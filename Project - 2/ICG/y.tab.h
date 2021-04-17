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
    PREPROC = 258,
    STDIO = 259,
    MATH = 260,
    STRING = 261,
    IDENTIFIER = 262,
    INTEGER_LITERAL = 263,
    FLOAT_LITERAL = 264,
    STRING_LITERAL = 265,
    HEADER_LITERAL = 266,
    CHARACTER_LITERAL = 267,
    INC_OP = 268,
    DEC_OP = 269,
    LE_OP = 270,
    GE_OP = 271,
    EQ_OP = 272,
    NE_OP = 273,
    LT = 274,
    GT = 275,
    AND_LOG = 276,
    OR_LOG = 277,
    NOT = 278,
    ADD_ASSIGN = 279,
    SUB_ASSIGN = 280,
    MUL_ASSIGN = 281,
    DIV_ASSIGN = 282,
    MOD_ASSIGN = 283,
    CHAR = 284,
    INT = 285,
    FLOAT = 286,
    VOID = 287,
    MAIN = 288,
    BREAK = 289,
    SWITCH = 290,
    CASE = 291,
    DEFAULT = 292,
    RETURN = 293,
    SUB = 294,
    ADD = 295,
    MUL = 296,
    DIV = 297,
    MOD = 298,
    STRUCT = 299,
    WHILE = 300
  };
#endif
/* Tokens.  */
#define PREPROC 258
#define STDIO 259
#define MATH 260
#define STRING 261
#define IDENTIFIER 262
#define INTEGER_LITERAL 263
#define FLOAT_LITERAL 264
#define STRING_LITERAL 265
#define HEADER_LITERAL 266
#define CHARACTER_LITERAL 267
#define INC_OP 268
#define DEC_OP 269
#define LE_OP 270
#define GE_OP 271
#define EQ_OP 272
#define NE_OP 273
#define LT 274
#define GT 275
#define AND_LOG 276
#define OR_LOG 277
#define NOT 278
#define ADD_ASSIGN 279
#define SUB_ASSIGN 280
#define MUL_ASSIGN 281
#define DIV_ASSIGN 282
#define MOD_ASSIGN 283
#define CHAR 284
#define INT 285
#define FLOAT 286
#define VOID 287
#define MAIN 288
#define BREAK 289
#define SWITCH 290
#define CASE 291
#define DEFAULT 292
#define RETURN 293
#define SUB 294
#define ADD 295
#define MUL 296
#define DIV 297
#define MOD 298
#define STRUCT 299
#define WHILE 300

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 37 "ICG.y" /* yacc.c:1909  */

    int ival;
	char string[128];

#line 149 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
