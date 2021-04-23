/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "AST.y" /* yacc.c:339  */

	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include <ctype.h>
	#include <stdarg.h>
	#include "header.h"
	void yyerror(const char*);
	int yylex();
	
	/* prototypes */
	int ex (nodeType *p, int flag);
	/* function prototype to create a node for an operation */ 
	nodeType *opr(int oper, int nops, ...);
	/* function prototype to create a node for an identifier */
	nodeType *id(char *identifier);
	/* function prototype to create a node for a constat */
	nodeType *con(char *value);

	int if_assign = 1;


#line 89 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
#line 25 "AST.y" /* yacc.c:355  */

	int ival;
	nodeType *nPtr;
	char string[128];

#line 195 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 212 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  21
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   219

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  149

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   285

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    40,     2,     2,
      33,    34,    38,    36,    44,    37,    35,    39,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    42,    45,
      31,    43,    32,    41,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    46,     2,    47,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    66,    66,    67,    71,    72,    73,    74,    75,    79,
      80,    81,    82,    83,    87,    88,    89,    95,    98,   101,
     104,   111,   112,   113,   117,   118,   119,   120,   124,   125,
     126,   130,   131,   132,   133,   134,   138,   139,   140,   144,
     145,   149,   150,   151,   152,   156,   157,   161,   165,   166,
     170,   171,   175,   176,   180,   181,   182,   183,   184,   188,
     189,   190,   194,   195,   199,   200,   204,   205,   209,   210,
     214,   215,   216,   220,   221,   222,   226,   227,   231,   232,
     236,   237,   241,   242,   246,   250,   251,   254,   255,   261
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "HASH", "INCLUDE", "DEFINE", "STDIO",
  "STDLIB", "MATH", "STRING", "TIME", "IDENTIFIER", "INTEGER_LITERAL",
  "FLOAT_LITERAL", "STRING_LITERAL", "HEADER_LITERAL", "INC_OP", "DEC_OP",
  "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "ADD_ASSIGN", "SUB_ASSIGN", "CHAR",
  "INT", "FLOAT", "VOID", "MAIN", "STRUCT", "FOR", "'<'", "'>'", "'('",
  "')'", "'.'", "'+'", "'-'", "'*'", "'/'", "'%'", "'?'", "':'", "'='",
  "','", "';'", "'{'", "'}'", "$accept", "headers", "libraries",
  "primary_expression", "postfix_expression", "unary_expression",
  "multiplicative_expression", "additive_expression",
  "relational_expression", "equality_expression", "conditional_expression",
  "assignment_expression", "expression", "constant_expression",
  "declaration", "init_declarator_list", "init_declarator",
  "type_specifier", "struct_specifier", "struct_declaration_list",
  "struct_declaration", "specifier_qualifier_list",
  "struct_declarator_list", "struct_declarator", "statement",
  "compound_statement", "block_item_list", "block_item",
  "expression_statement", "iteration_statement", "translation_unit",
  "external_declaration", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,    60,    62,    40,    41,    46,    43,    45,    42,    47,
      37,    63,    58,    61,    44,    59,   123,   125
};
# endif

#define YYPACT_NINF -69

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-69)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       6,    11,   -69,   -18,   -69,   -69,    -6,   -69,   -69,    -3,
     -69,   169,   -69,     5,    -7,   -12,   175,     3,   -69,    70,
     -69,   -69,   -69,   -69,   205,     9,   175,   -69,   175,    -8,
     -69,    -4,   173,    47,   -69,   -69,   -69,   -69,   -69,   -69,
      50,    44,    -2,   -69,   -69,   -69,    57,   173,   -69,    79,
     -69,   -69,   -69,   -69,   -69,    65,    65,   173,   173,   173,
     -69,    78,    37,   135,    90,   122,    45,   -69,   -69,   -69,
     -69,    92,   -69,   -69,   173,   -69,   -69,   -69,    -5,   -69,
     -69,   -69,   -69,    40,   -69,   -69,   -69,   -69,    73,   109,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   101,   -69,   -69,   106,   -69,
     -69,   -69,   119,   -69,   -69,   -69,   -69,   -69,   -69,   173,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   135,   135,
      90,    90,    90,    90,   122,   122,    41,    56,   -69,   -69,
     -69,   -69,   173,    56,   -69,   173,    66,   146,   -69
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    55,    56,    57,    54,     0,    89,    88,     0,
      58,     0,    85,     0,     0,    61,     0,    53,    48,     0,
      50,     1,    86,     2,     0,     0,     0,    56,    67,     0,
      62,     0,     0,     0,    49,     4,     5,     6,     7,     8,
       0,     0,     0,    66,    59,    63,    72,     0,    64,     0,
      68,     9,    10,    11,    12,     0,     0,     0,     0,     0,
      14,    21,    24,    28,    31,    36,    39,    41,    52,    51,
       3,     0,    87,    60,     0,    24,    47,    70,     0,    65,
      19,    20,    45,     0,    22,    23,    17,    18,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    82,    76,     0,    80,
      81,    73,     0,    78,    74,    75,    71,    69,    13,     0,
      15,    16,    43,    44,    42,    25,    26,    27,    29,    30,
      34,    35,    32,    33,    37,    38,     0,     0,    83,    77,
      79,    46,     0,     0,    40,     0,     0,     0,    84
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -69,   -69,   -69,   112,   -69,   -46,    74,   118,    75,   -69,
     -45,   -28,   -43,    68,   -68,   -69,   114,     0,   -69,   154,
      46,   133,   -69,   103,    58,   147,   -69,    85,   -56,   -69,
     -69,   192
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     7,    40,    60,    61,    62,    63,    64,    65,    66,
      67,    82,   108,    77,     8,    19,    20,    28,    10,    29,
      30,    31,    49,    50,   110,   111,   112,   113,   114,   115,
      11,    12
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
       9,    75,    76,   109,    68,    15,    46,    46,    17,     1,
      14,     9,    84,    85,    83,    13,     2,    27,     4,     5,
      23,     6,     2,    27,     4,     5,    25,     6,    75,    76,
       2,     3,     4,     5,    26,     6,    24,    47,    47,    44,
      16,    48,    18,    41,   109,    73,    32,   125,   126,   127,
      75,    75,    75,    75,    75,    75,    75,    75,    17,    90,
      91,   136,   122,   123,   124,   102,   103,    51,    52,    53,
      54,     9,    55,    56,   118,    45,    51,    52,    53,    54,
      92,   143,    70,   142,   119,   119,   104,   145,    45,    57,
      71,   141,    58,    59,    86,    87,    75,   144,    57,    74,
     147,   106,   146,    51,    52,    53,    54,   120,    55,    56,
     119,    88,     9,    89,    33,    34,     2,    27,     4,     5,
     121,     6,   105,    78,    79,    57,    96,    97,    58,    59,
      51,    52,    53,    54,   137,    55,    56,   106,    71,   107,
      98,    99,   116,     2,    27,     4,     5,    69,     6,   105,
     119,   138,    57,   100,   101,    58,    59,    51,    52,    53,
      54,    43,    55,    56,   106,    71,   139,    80,    81,    21,
     128,   129,     1,    93,    94,    95,   105,   134,   135,    57,
      42,   117,    58,    59,    51,    52,    53,    54,    72,    55,
      56,   106,    71,     2,     3,     4,     5,   140,     6,     2,
      27,     4,     5,    22,     6,   148,    57,     0,     0,    58,
      59,    35,    36,    37,    38,    39,   130,   131,   132,   133
};

static const yytype_int16 yycheck[] =
{
       0,    47,    47,    71,    32,    11,    11,    11,    11,     3,
      28,    11,    58,    59,    57,     4,    24,    25,    26,    27,
      15,    29,    24,    25,    26,    27,    33,    29,    74,    74,
      24,    25,    26,    27,    46,    29,    31,    42,    42,    47,
      46,    45,    45,    34,   112,    47,    43,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,    11,    22,
      23,   104,    90,    91,    92,    20,    21,    11,    12,    13,
      14,    71,    16,    17,    34,    29,    11,    12,    13,    14,
      43,   137,    32,    42,    44,    44,    41,   143,    42,    33,
      46,   119,    36,    37,    16,    17,   142,   142,    33,    42,
      34,    45,   145,    11,    12,    13,    14,    34,    16,    17,
      44,    33,   112,    35,    44,    45,    24,    25,    26,    27,
      11,    29,    30,    44,    45,    33,    36,    37,    36,    37,
      11,    12,    13,    14,    33,    16,    17,    45,    46,    47,
      18,    19,    74,    24,    25,    26,    27,    33,    29,    30,
      44,    45,    33,    31,    32,    36,    37,    11,    12,    13,
      14,    28,    16,    17,    45,    46,    47,    55,    56,     0,
      96,    97,     3,    38,    39,    40,    30,   102,   103,    33,
      26,    78,    36,    37,    11,    12,    13,    14,    41,    16,
      17,    45,    46,    24,    25,    26,    27,   112,    29,    24,
      25,    26,    27,    11,    29,   147,    33,    -1,    -1,    36,
      37,     6,     7,     8,     9,    10,    98,    99,   100,   101
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    24,    25,    26,    27,    29,    49,    62,    65,
      66,    78,    79,     4,    28,    11,    46,    11,    45,    63,
      64,     0,    79,    15,    31,    33,    46,    25,    65,    67,
      68,    69,    43,    44,    45,     6,     7,     8,     9,    10,
      50,    34,    67,    69,    47,    68,    11,    42,    45,    70,
      71,    11,    12,    13,    14,    16,    17,    33,    36,    37,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    64,
      32,    46,    73,    47,    42,    53,    58,    61,    44,    45,
      51,    51,    59,    60,    53,    53,    16,    17,    33,    35,
      22,    23,    43,    38,    39,    40,    36,    37,    18,    19,
      31,    32,    20,    21,    41,    30,    45,    47,    60,    62,
      72,    73,    74,    75,    76,    77,    61,    71,    34,    44,
      34,    11,    59,    59,    59,    53,    53,    53,    54,    54,
      55,    55,    55,    55,    56,    56,    60,    33,    45,    47,
      75,    59,    42,    76,    58,    76,    60,    34,    72
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    49,    49,    50,    50,    50,    50,    50,    51,
      51,    51,    51,    51,    52,    52,    52,    52,    52,    52,
      52,    53,    53,    53,    54,    54,    54,    54,    55,    55,
      55,    56,    56,    56,    56,    56,    57,    57,    57,    58,
      58,    59,    59,    59,    59,    60,    60,    61,    62,    62,
      63,    63,    64,    64,    65,    65,    65,    65,    65,    66,
      66,    66,    67,    67,    68,    68,    69,    69,    70,    70,
      71,    71,    71,    72,    72,    72,    73,    73,    74,    74,
      75,    75,    76,    76,    77,    78,    78,    79,    79,    79
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     5,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     3,     3,     2,     2,     2,
       2,     1,     2,     2,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       5,     1,     3,     3,     3,     1,     3,     1,     2,     3,
       1,     3,     3,     1,     1,     1,     1,     1,     1,     4,
       5,     2,     1,     2,     2,     3,     2,     1,     1,     3,
       2,     3,     1,     1,     1,     1,     2,     3,     1,     2,
       1,     1,     1,     2,     7,     1,     2,     5,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 9:
#line 79 "AST.y" /* yacc.c:1646  */
    {(yyval.nPtr) = id((yyvsp[0].string));}
#line 1414 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 80 "AST.y" /* yacc.c:1646  */
    {(yyval.nPtr) = con((yyvsp[0].string));}
#line 1420 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 81 "AST.y" /* yacc.c:1646  */
    {(yyval.nPtr) = con((yyvsp[0].string));}
#line 1426 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 82 "AST.y" /* yacc.c:1646  */
    {(yyval.nPtr) = con((yyvsp[0].string));}
#line 1432 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 83 "AST.y" /* yacc.c:1646  */
    {(yyval.nPtr) = (yyvsp[-1].nPtr);}
#line 1438 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 87 "AST.y" /* yacc.c:1646  */
    {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1444 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 89 "AST.y" /* yacc.c:1646  */
    {
											char *tmp = strcat((yyvsp[-2].nPtr)->id.name,".");
											tmp = strcat(tmp, (yyvsp[0].string));
											printf(" %s\n", tmp); 			
											(yyval.nPtr) = id(tmp);
										}
#line 1455 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 95 "AST.y" /* yacc.c:1646  */
    {
											(yyval.nPtr) = opr('=', 2, (yyvsp[-1].nPtr), opr('+', 2, (yyvsp[-1].nPtr), con("1") ) );
										}
#line 1463 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 98 "AST.y" /* yacc.c:1646  */
    {
											(yyval.nPtr) = opr('=', 2, (yyvsp[-1].nPtr), opr('-', 2, (yyvsp[-1].nPtr), con("1") ) );										
										}
#line 1471 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 101 "AST.y" /* yacc.c:1646  */
    {
											(yyval.nPtr) = opr('=', 2, (yyvsp[0].nPtr), opr('+', 2, (yyvsp[0].nPtr), con("1") ) );										
										}
#line 1479 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 104 "AST.y" /* yacc.c:1646  */
    {
											(yyval.nPtr) = opr('=', 2, (yyvsp[0].nPtr), opr('-', 2, (yyvsp[0].nPtr), con("1") ) );										
										}
#line 1487 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 111 "AST.y" /* yacc.c:1646  */
    {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1493 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 112 "AST.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr('+', 1, (yyvsp[0].nPtr));}
#line 1499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 113 "AST.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr('+', 1, (yyvsp[0].nPtr));}
#line 1505 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 117 "AST.y" /* yacc.c:1646  */
    {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1511 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 118 "AST.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr('*', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));}
#line 1517 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 119 "AST.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr('/', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));}
#line 1523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 120 "AST.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr('%', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));}
#line 1529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 124 "AST.y" /* yacc.c:1646  */
    {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 125 "AST.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr('+', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));}
#line 1541 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 126 "AST.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr('-', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));}
#line 1547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 131 "AST.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr('<', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));}
#line 1553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 132 "AST.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr('>', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));}
#line 1559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 133 "AST.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr(LE_OP, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));}
#line 1565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 134 "AST.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr(GE_OP, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));}
#line 1571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 138 "AST.y" /* yacc.c:1646  */
    {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 139 "AST.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr(EQ_OP, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));}
#line 1583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 140 "AST.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr(NE_OP, 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));}
#line 1589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 144 "AST.y" /* yacc.c:1646  */
    {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 145 "AST.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr('?', 2, (yyvsp[-4].nPtr), opr(':', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)) );}
#line 1601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 149 "AST.y" /* yacc.c:1646  */
    {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 150 "AST.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr('=', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));}
#line 1613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 151 "AST.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr('=', 2, (yyvsp[-2].nPtr), opr('+', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)) );}
#line 1619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 152 "AST.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr('=', 2, (yyvsp[-2].nPtr), opr('-', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr)) );}
#line 1625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 156 "AST.y" /* yacc.c:1646  */
    {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 161 "AST.y" /* yacc.c:1646  */
    {}
#line 1637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 166 "AST.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr(';', 1, (yyvsp[-1].nPtr));}
#line 1643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 170 "AST.y" /* yacc.c:1646  */
    {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 171 "AST.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr(',', 2, (yyvsp[-2].nPtr), (yyvsp[0].nPtr));}
#line 1655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 175 "AST.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr('=', 2, id((yyvsp[-2].string)), (yyvsp[0].nPtr));}
#line 1661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 176 "AST.y" /* yacc.c:1646  */
    {(yyval.nPtr) = id((yyvsp[0].string));}
#line 1667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 184 "AST.y" /* yacc.c:1646  */
    {if_assign = 0;}
#line 1673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 220 "AST.y" /* yacc.c:1646  */
    {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 221 "AST.y" /* yacc.c:1646  */
    {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 222 "AST.y" /* yacc.c:1646  */
    {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 227 "AST.y" /* yacc.c:1646  */
    {(yyval.nPtr) = (yyvsp[-1].nPtr);}
#line 1697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 231 "AST.y" /* yacc.c:1646  */
    {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 232 "AST.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr(';', 2, (yyvsp[-1].nPtr), (yyvsp[0].nPtr));}
#line 1709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 236 "AST.y" /* yacc.c:1646  */
    {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 237 "AST.y" /* yacc.c:1646  */
    {(yyval.nPtr) = (yyvsp[0].nPtr);}
#line 1721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 242 "AST.y" /* yacc.c:1646  */
    {(yyval.nPtr) = (yyvsp[-1].nPtr);}
#line 1727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 246 "AST.y" /* yacc.c:1646  */
    {(yyval.nPtr) = opr(FOR, 4, (yyvsp[-4].nPtr), (yyvsp[-3].nPtr), (yyvsp[-2].nPtr), (yyvsp[0].nPtr));}
#line 1733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 254 "AST.y" /* yacc.c:1646  */
    {ex((yyvsp[0].nPtr), 0); /*freeNode($2);*/}
#line 1739 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 255 "AST.y" /* yacc.c:1646  */
    {
												if(if_assign)
												{											
													ex((yyvsp[0].nPtr), 2); /*freeNode($2);*/
												}
											}
#line 1750 "y.tab.c" /* yacc.c:1646  */
    break;


#line 1754 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 264 "AST.y" /* yacc.c:1906  */


void yyerror(const char *str)
{
	fflush(stdout);
	fprintf(stderr, "*** %s\n", str);
}

int main(){
	if(!yyparse())
	{
		printf("Successful\n");
	}
	else
		printf("Unsuccessful\n");

	return 0;
}

nodeType *con(char *value)
{
	nodeType *p;
	/* allocate node */
	if ((p = malloc(sizeof(nodeType))) == NULL)
		yyerror("out of memory");
	/* copy information */
	p->type = typeCon;
	strcpy(p->con.value, value);
	return p;
}
nodeType *id(char *identifier) {
	nodeType *p;
	/* allocate node */
	if ((p = malloc(sizeof(nodeType))) == NULL)
		yyerror("out of memory");
	/* copy information */
	p->type = typeId;
	strcpy(p->id.name,identifier);
//	printf("The copied identifier %s\n", p->id.name);
	return p;
}

nodeType *opr(int oper, int nops, ...)
{
	va_list ap;
	nodeType *p;
	int i;
	/* allocate node, extending op array */
	if ((p = malloc(sizeof(nodeType) +(nops-1) * sizeof(nodeType *))) == NULL)
		yyerror("out of memory");
	/* copy information */
	p->type = typeOpr;
	p->opr.oper = oper;
	p->opr.nops = nops;
	va_start(ap, nops);
	for (i = 0; i < nops; i++)
		p->opr.op[i] = va_arg(ap, nodeType*);
	va_end(ap);
	return p;
}
