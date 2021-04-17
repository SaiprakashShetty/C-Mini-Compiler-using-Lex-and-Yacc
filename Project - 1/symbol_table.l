%{
	#include <stdio.h>
	#include "y.tab.h"
	#include<string.h>

	//#define YY_USER_ACTION yylloc.first_line = yylloc.last_line = yylineno;

	extern void yyerror(const char *);  /* prints grammar violation message */

	extern int sym_type(const char *);  /* returns type from symbol table */

	#define sym_type(identifier) IDENTIFIER /* with no symbol table, fake it */

	static void comment(void);

	static int check_type(void);
	
	int line = 0;

%}

%option yylineno

D   		[0-9]
L   		[a-zA-Z_]
A   		[a-zA-Z_0-9]
WS  		[ \t\v\n\f]


%%
"/*"		{ comment(); }
"//"[^\n]*	{ /* Consume Comment */ }

	/* Data Types */
int			{ strcpy(yylval.string,yytext); return(INT); }
float		{ strcpy(yylval.string,yytext); return(FLOAT); }
char		{ strcpy(yylval.string,yytext); return(CHAR); }
void		{ strcpy(yylval.string,yytext); return(VOID); }
main		{ strcpy(yylval.string,yytext); return(MAIN); }

	/* User Defined Data Types */
struct		{ strcpy(yylval.string,yytext); return(STRUCT); }

	/* Headers */
"#"		{ return HASH; }
include		{ return INCLUDE; }
define		{ return DEFINE; }

	/* C Libraries */
"math.h"	{ return MATH; }
"stdio.h"	{ return STDIO; }
"stdlib.h"	{ return STDLIB; }
"string.h"	{ return STRING; }
"time.h"	{ return TIME; }

	/* Control Structures */
for		{ return(FOR); }

	/* User Defined Data Types, Identifiers */
{L}{A}*						{	 strcpy(yylval.string,yytext); return IDENTIFIER;}
{D}+							{ strcpy(yylval.string,yytext); return INTEGER_LITERAL;}
{D}+\.{D}+						{ strcpy(yylval.string,yytext); return FLOAT_LITERAL;}
\"{A}+(".h"|".c")\"				{return HEADER_LITERAL;}
L?\"(\\.|[^\\"])*\"	{ return(STRING_LITERAL); }

	/* Assignment Operators */
"+="		{return(ADD_ASSIGN); }
"-="		{return(SUB_ASSIGN); }


	/* Relational Operators */
"++"		{return(INC_OP); }
"--"		{return(DEC_OP); }
"<="		{ strcpy(yylval.string,yytext); return(LE_OP); }
">="		{ strcpy(yylval.string,yytext); return(GE_OP); }
"=="		{ strcpy(yylval.string,yytext); return(EQ_OP); }
"!="		{ strcpy(yylval.string,yytext); return(NE_OP); }

	/* Basic Syntax */
";"		{return(';'); }
"{"	{return('{'); }
"}"	{return('}'); }
","		{return(','); }
":"		{return(':'); }
"="		{return('='); }
"("		{return('('); }
")"		{return(')'); }
("["|"<:")	{return('['); }
("]"|":>")	{return(']'); }
"."		{return('.'); }
"&"		{return('&'); }
"!"		{return('!'); }
"~"		{return('~'); }
"-"		{ strcpy(yylval.string,yytext);return('-'); }
"+"		{ strcpy(yylval.string,yytext);return('+'); }
"*"		{ strcpy(yylval.string,yytext);return('*'); }
"/"		{ strcpy(yylval.string,yytext);return('/'); }
"%"		{ strcpy(yylval.string,yytext);return('%'); }
"<"		{ strcpy(yylval.string,yytext);return('<'); }
">"		{ strcpy(yylval.string,yytext);return('>'); }
"^"		{return('^'); }
"|"		{return('|'); }
"?"		{return('?'); }


{WS}+		{ /* whitespace separates tokens */}
	
.		{ printf("No Match, Invalid Expression %s\n", yytext); }
"\n"	{yylval.ival = line++;}
%%

int yywrap(void)
{
	return 1;
}


static void comment(void)
{
    int c;

    while ((c = input()) != 0)
        if (c == '*')
        {
            while ((c = input()) == '*')
                ;

            if (c == '/')
                return;

            if (c == 0)
                break;
        }
    yyerror("unterminated comment");
}
