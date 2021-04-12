#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include "header.h"
#include "y.tab.h"
int del = 1; /* distance of graph columns */
int eps = 3; /* distance of graph lines */
int flag = 0; // flag to print main initially
/* interface for drawing (can be replaced by "real" graphic using GD or other) */
void graphInit (void);
void graphFinish();
void graphBox (char *s, int *w, int *h);
void graphDrawBox (char *s, int c, int l);
void graphDrawArrow (int c1, int l1, int c2, int l2);

/* recursive drawing of the syntax tree */
void exNode (nodeType *p, int c, int l, int *ce, int *cm);
/***********************************************************/
/* main entry point of the manipulation of the syntax tree */
int ex (nodeType *p, int f)
{
	flag = f;
	int rte, rtm;
	graphInit ();
	exNode (p, 0, 0, &rte, &rtm);
	graphFinish();
	return 0;
}

void exNode( nodeType *p,  int c, int l, /* start column and line of node */  int *ce, int *cm /* resulting end column and mid of node */)
{
	int w, h; /* node width and height */
	char *s; /* node text */
	int cbar; /* "real" start column of node (centred above subnodes)
	*/
	int k; /* child number */
	int che, chm; /* end column and mid of children */
	int cs; /* start column of children */
	char word[20]; /* extended node text */
	if (!p) return;
	strcpy (word, "???"); /* should never appear */
	s = word;
	// printf("------------\n");
	// printf("%s \n", p->id.name);
	// printf("------------\n");
	switch(p->type) 
	{
		case typeCon: sprintf (word, "c(%s)", p->con.value); break;
		case typeId: sprintf (word, "id(%s)", p->id.name); break;
		case typeOpr:
		switch(p->opr.oper)
		{
			case FOR: s = "for"; break;
			case ';': {if(flag == 0) {s = "main"; flag = 1;} else if(flag == 2) {s = "global"; flag = 1;} else {s = "[;]";} break;}
			case '=': s = "[=]"; break;
		//	case UMINUS: s = "[_]"; break;
			case '+': s = "[+]"; break;
			case '-': s = "[-]"; break;
			case '*': s = "[*]"; break;
			case '/': s = "[/]"; break;
			case '<': s = "[<]"; break;
			case '>': s = "[>]"; break;
			case ':': s = "[:]"; break;
			case '?': s = "[?]"; break;
			case '%': s = "[%]"; break;
			case GE_OP: s = "[>=]"; break;
			case LE_OP: s = "[<=]"; break;
			case NE_OP: s = "[!=]"; break;
			case EQ_OP: s = "[==]"; break;
		}
	break;
	}
 	/* construct node text box */
	graphBox (s, &w, &h);
	cbar = c;
	*ce = c + w;
	*cm = c + w / 2;
	/* node is leaf */
	if (p->type == typeCon || p->type == typeId || p->opr.nops == 0) 
	{
		graphDrawBox (s, cbar, l);
		return;
	}

 	/* node has children */
 	cs = c;
	for (k = 0; k < p->opr.nops; k++) 
	{
		exNode (p->opr.op[k], cs, l+h+eps, &che, &chm);
		cs = che;
	}
	/* total node width */
	if (w < che - c) 
	{
		cbar += (che - c - w) / 2;
		*ce = che;
		*cm = (c + che) / 2;
	}
	/* draw node */
	graphDrawBox (s, cbar, l);
	/* draw arrows (not optimal: children are drawn a second time) */
	cs = c;
	for (k = 0; k < p->opr.nops; k++)
	{
		exNode (p->opr.op[k], cs, l+h+eps, &che, &chm);
		graphDrawArrow (*cm, l+h, chm, l+h+eps-1);
		cs = che;
	}
}

/* interface for drawing */
#define lmax 250
#define cmax 250
char graph[lmax][cmax]; /* array for ASCII-Graphic */
int graphNumber = 0;

void graphTest (int l, int c)
{ 
	int ok;
	ok = 1;
	if (l < 0) ok = 0;
	if (l >= lmax) ok = 0;
	if (c < 0) ok = 0;
	if (c >= cmax) ok = 0;
	if (ok) return;
	printf ("\n+++error: l=%d, c=%d not in drawing rectangle 0, 0 ... %d, %d", l, c, lmax, cmax);
	exit (1);
}


void graphInit (void) 
{
	int i, j;
	for (i = 0; i < lmax; i++)
	{
		for (j = 0; j < cmax; j++) 
		{
			graph[i][j] = ' ';
		}
	}
}


void graphFinish()
{
	int i, j;
	for (i = 0; i < lmax; i++)
	{
		for (j = cmax-1; j > 0 && graph[i][j] == ' '; j--);
		graph[i][cmax-1] = 0;
		if (j < cmax-1) 
			graph[i][j+1] = 0;
		if (graph[i][j] == ' ') 
			graph[i][j] = 0;
	}
	for (i = lmax-1; i > 0 && graph[i][0] == 0; i--);
	printf ("\n\nGraph %d:\n", graphNumber++);
	for (j = 0; j <= i; j++) printf ("\n%s", graph[j]);
	printf("\n");
}

void graphBox (char *s, int *w, int *h)
{
	*w = strlen (s) + del;
	*h = 1;
}
void graphDrawBox (char *s, int c, int l)
{
	int i;
	graphTest (l, c+strlen(s)-1+del);
	for (i = 0; i < strlen (s); i++) {
	graph[l][c+i+del] = s[i];
	}
}

void graphDrawArrow (int c1, int l1, int c2, int l2)
{
	int m;
	graphTest (l1, c1);
	graphTest (l2, c2);
	m = (l1 + l2) / 2;
	while (l1 != m)
	{
		graph[l1][c1] = '|'; if (l1 < l2) l1++; else l1--;
	}
	while (c1 != c2)
	{
		graph[l1][c1] = '-'; if (c1 < c2) c1++; else c1--;
	}
	while (l1 != l2)
	{
		graph[l1][c1] = '|'; if (l1 < l2) l1++; else l1--;
	}
	graph[l1][c1] = '|';
}