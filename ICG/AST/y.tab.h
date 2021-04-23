/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    HASH = 258,
    INCLUDE = 259,
    DEFINE = 260,
    STDIO = 261,
    STDLIB = 262,
    MATH = 263,
    STRING = 264,
    TIME = 265,
    IDENTIFIER = 266,
    INTEGER_LITERAL = 267,
    FLOAT_LITERAL = 268,
    STRING_LITERAL = 269,
    HEADER_LITERAL = 270,
    INC_OP = 271,
    DEC_OP = 272,
    LE_OP = 273,
    GE_OP = 274,
    EQ_OP = 275,
    NE_OP = 276,
    ADD_ASSIGN = 277,
    SUB_ASSIGN = 278,
    CHAR = 279,
    INT = 280,
    FLOAT = 281,
    VOID = 282,
    MAIN = 283,
    STRUCT = 284,
    FOR = 285
  };
#endif
/* Tokens.  */
#define HASH 258
#define INCLUDE 259
#define DEFINE 260
#define STDIO 261
#define STDLIB 262
#define MATH 263
#define STRING 264
#define TIME 265
#define IDENTIFIER 266
#define INTEGER_LITERAL 267
#define FLOAT_LITERAL 268
#define STRING_LITERAL 269
#define HEADER_LITERAL 270
#define INC_OP 271
#define DEC_OP 272
#define LE_OP 273
#define GE_OP 274
#define EQ_OP 275
#define NE_OP 276
#define ADD_ASSIGN 277
#define SUB_ASSIGN 278
#define CHAR 279
#define INT 280
#define FLOAT 281
#define VOID 282
#define MAIN 283
#define STRUCT 284
#define FOR 285

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 25 "AST.y" /* yacc.c:1909  */

	int ival;
	nodeType *nPtr;
	char string[128];

#line 120 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
