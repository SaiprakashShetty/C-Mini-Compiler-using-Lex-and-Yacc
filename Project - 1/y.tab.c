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
#line 1 "symbol_table.y" /* yacc.c:339  */

	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#include <ctype.h>
	#define LIMIT 1024
	#define MAX_SYMBOLS 100			// defines max no of record in each symbol table
	#define MAX_SCOPE 10			// defines max no of scopes allowed 
	#define NEWSCOPE 1				// denoted new scope
	#define OLDSCOPE 0				// denotes old scope
	#define NO_OF_KEYWORD 7			// denotes no of keywords
	#define LENGTH_OF_KEYWORDS 7	// max length of keyword string
	#define MAX_MEMBER 10			// max number of member in struct
	#define TYPE_LENGTH 6			// length of type int float void ....
	#define MAX_NO_OF_STRUCT 10		// max_no of structure which can be defined in a scope
	#define STRUCT_FLAG 2			// Flag to know struct which is declared
	
	
	/* the start index for the member of nested struct in the parent struct  initialized at nested_struct rule */ 
	int nested_struct_start_index;
	
	// keyword_Array
	char keywords[NO_OF_KEYWORD][LENGTH_OF_KEYWORDS] = {"char","int","float","void","main","for","struct"};
	int c = 0;
	int scope = NEWSCOPE;
	void yyerror(const char*);
	int yylex();
	
	// used for ternary construct to denote if condition is true or false
	int ternary_flag = 0;
	
	// flag to mark if the varaible is not_defined. Used to decide wheather to push the value in the symbol table or not.
	// 1 => the varaible is not defined.
	int not_defined = 0;
	
	int error = 0;
	struct symbol {
		char name[LIMIT];
		char type[LIMIT];
		char value[LIMIT];
	};
	
	struct struct_data{
		char struct_name[LIMIT];
		char member_type[MAX_MEMBER][TYPE_LENGTH];
		char member_name[MAX_MEMBER][LIMIT];
		int index_to_insert_member;				// to know at which index do we have to insert new member
	};
	
	struct stack_for_symbol_tables{
		int index_to_insert;
		int struct_index_to_insert;
		struct struct_data struct_defined[MAX_NO_OF_STRUCT];
		struct symbol symbol_table[MAX_SYMBOLS];
	}symbol_table_stack[MAX_SCOPE];
	
	/* used if know if struct is used as member to declare a variable of its type
	   1 means used 
	*/
	int struct_reference_used = 0;
	
	int top_stack_for_symbol_tables = -1;
	
	// called to perform all artihmatic operations
	void fun(char *result ,char *arg1,char *arg2,char *arg3);
	
	/* called to push the varaibles in the current scope */
	int push_my(char *type,char *name,char *value,int flag);
	
	// not used yet
	void struct_member_name(char* struct_name,int struct_index_to_insert);
	/* to pop the scope */
	int pop_my();
	
	/* to check if the varaible of current scope is declared or not
	   return value 1 if not else -1; 
	*/
	int search_my(char *name,int flag);
	
	/* to display the current scope */
	void display();
	void display_struct();
	
	void struct_member(char *type,char *name);
	
	
	/*  update the value of of varaible in symbol table by first checking if varaible is defined or not
		if not defined then this function return value -1  */
	int update_variable_value(char *name,char *value);
	
	int add_struct_member_in_symbol_table(char *struct_name);
	
	/*
		to check if the varaibles in an expression are defined or not
		return type is array of varaibles that are not defined.
	*/
	void check(char *arg1,char *arg3);
	
	void coercion(char *type,char *value);
	
	void init_symbol_table();
	
	void write_to_file();

#line 171 "y.tab.c" /* yacc.c:339  */

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
#line 107 "symbol_table.y" /* yacc.c:355  */

	int ival;
	char string[128];

#line 276 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 293 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   214

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  95
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  152

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
       2,     2,     2,     2,     2,     2,     2,    35,     2,     2,
      38,    39,    36,    31,    44,    32,    40,    37,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    42,    45,
      33,    43,    34,    41,     2,     2,     2,     2,     2,     2,
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
       0,   133,   133,   134,   138,   139,   140,   141,   142,   146,
     147,   148,   149,   150,   184,   185,   186,   203,   204,   205,
     206,   210,   211,   215,   216,   220,   221,   227,   233,   241,
     242,   247,   255,   256,   261,   266,   271,   279,   280,   285,
     293,   294,   294,   298,   299,   321,   322,   323,   327,   328,
     332,   336,   343,   408,   409,   413,   428,   437,   438,   439,
     440,   441,   445,   446,   454,   461,   470,   471,   475,   476,
     484,   485,   489,   490,   494,   495,   496,   500,   501,   502,
     506,   507,   510,   513,   523,   524,   528,   529,   533,   534,
     538,   542,   543,   547,   548,   549
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
  "INT", "FLOAT", "VOID", "MAIN", "STRUCT", "FOR", "'+'", "'-'", "'<'",
  "'>'", "'%'", "'*'", "'/'", "'('", "')'", "'.'", "'?'", "':'", "'='",
  "','", "';'", "'{'", "'}'", "$accept", "headers", "libraries",
  "primary_expression", "postfix_expression", "unary_expression",
  "unary_operator", "multiplicative_expression", "additive_expression",
  "relational_expression", "equality_expression", "conditional_expression",
  "$@1", "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "init_declarator_list",
  "init_declarator", "type_specifier", "struct_specifier", "nested_struct",
  "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "statement", "compound_statement", "new_scope",
  "new_scope_end", "block_item_list", "block_item", "expression_statement",
  "iteration_statement", "translation_unit", "external_declaration", YY_NULLPTR
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
     285,    43,    45,    60,    62,    37,    42,    47,    40,    41,
      46,    63,    58,    61,    44,    59,   123,   125
};
# endif

#define YYPACT_NINF -108

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-108)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     158,    35,  -108,    16,  -108,  -108,    -6,  -108,  -108,    24,
    -108,   116,  -108,    53,    44,    56,   102,    67,  -108,   -29,
    -108,  -108,  -108,  -108,   188,    81,  -108,  -108,   102,    64,
    -108,    25,   136,   114,  -108,  -108,  -108,  -108,  -108,  -108,
     110,   120,   102,  -108,  -108,  -108,   109,   136,  -108,    52,
    -108,  -108,  -108,  -108,  -108,   143,   143,  -108,  -108,   136,
    -108,   148,    78,   136,   141,   104,    13,   138,  -108,  -108,
    -108,  -108,   113,  -108,   146,   136,  -108,  -108,  -108,    -5,
    -108,  -108,  -108,  -108,   -20,  -108,  -108,   130,   169,  -108,
    -108,  -108,   136,  -108,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,  -108,  -108,    49,  -108,  -108,
    -108,  -108,   136,  -108,  -108,  -108,  -108,  -108,  -108,   141,
     141,   104,   104,   104,   104,    13,    13,   136,   163,  -108,
     118,  -108,  -108,  -108,    -4,  -108,  -108,  -108,  -108,    41,
     101,  -108,  -108,  -108,   136,   101,  -108,  -108,   136,    33,
      92,  -108
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    58,    59,    60,    57,     0,    95,    94,     0,
      61,     0,    91,     0,     0,    64,     0,    56,    51,     0,
      53,     1,    92,     2,     0,     0,    65,    59,    71,     0,
      66,     0,     0,     0,    52,     4,     5,     6,     7,     8,
       0,     0,     0,    70,    62,    67,    76,     0,    68,     0,
      72,     9,    10,    11,    12,     0,     0,    23,    24,     0,
      14,    21,    25,     0,    29,    32,    37,    40,    43,    55,
      54,     3,    82,    93,     0,     0,    25,    50,    74,     0,
      69,    19,    20,    48,     0,    17,    18,     0,     0,    46,
      47,    45,     0,    22,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    41,    80,     0,    63,    75,
      73,    13,     0,    15,    16,    44,    28,    26,    27,    30,
      31,    35,    36,    33,    34,    38,    39,     0,     0,    88,
       0,    86,    87,    77,     0,    84,    78,    79,    49,     0,
       0,    89,    83,    85,     0,     0,    81,    42,     0,     0,
       0,    90
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -108,  -108,  -108,   144,  -108,   -46,  -108,   105,    90,   103,
    -108,   -45,  -108,   -28,  -108,   -56,   129,   -89,  -108,   172,
       0,  -108,  -108,   166,   -15,   181,  -108,   131,    61,   171,
    -108,  -108,  -108,    79,  -107,  -108,  -108,   203
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,    40,    60,    61,    62,    63,    64,    65,    66,
      67,    68,   127,    83,    92,   130,    78,     8,    19,    20,
      28,    10,    42,    29,    30,    31,    49,    50,   132,   133,
     107,   146,   134,   135,   136,   137,    11,    12
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
       9,    76,    77,    84,    69,    15,    46,    51,    52,    53,
      54,     9,    55,    56,    45,    33,    34,    93,   131,   111,
       2,    27,     4,     5,   112,     6,   128,    57,    58,    76,
      77,    99,   100,   145,    59,    17,    46,    47,   148,    13,
      16,   129,    72,   142,    14,   131,   101,   102,   116,   117,
     118,    76,    76,    76,    76,    76,    76,    76,    76,    45,
      51,    52,    53,    54,   115,    55,    56,    47,    23,    18,
      48,   139,   150,     2,    27,     4,     5,   112,     6,   128,
      57,    58,    25,   144,   138,   112,    24,    59,     2,    27,
       4,     5,   149,     6,   129,    72,    79,    80,    76,   147,
      89,    90,    26,    51,    52,    53,    54,     9,    55,    56,
      32,    44,    51,    52,    53,    54,    21,    55,    56,     1,
      41,    91,   128,    57,    58,    17,     2,    27,     4,     5,
      59,     6,    57,    58,     9,    97,    98,   129,    72,    59,
       2,     3,     4,     5,    71,     6,   129,    51,    52,    53,
      54,    75,    55,    56,    51,    52,    53,    54,   103,   104,
     106,     1,   112,   141,    85,    86,    72,    57,    58,   113,
       2,    27,     4,     5,    59,     6,    94,    95,    96,   105,
     114,    59,     2,     3,     4,     5,    87,     6,    88,   121,
     122,   123,   124,   108,    35,    36,    37,    38,    39,    81,
      82,   140,   119,   120,   109,    70,   125,   126,    74,    43,
     110,   151,    73,   143,    22
};

static const yytype_uint8 yycheck[] =
{
       0,    47,    47,    59,    32,    11,    11,    11,    12,    13,
      14,    11,    16,    17,    29,    44,    45,    63,   107,    39,
      24,    25,    26,    27,    44,    29,    30,    31,    32,    75,
      75,    18,    19,   140,    38,    11,    11,    42,   145,     4,
      46,    45,    46,    47,    28,   134,    33,    34,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,    74,
      11,    12,    13,    14,    92,    16,    17,    42,    15,    45,
      45,   127,    39,    24,    25,    26,    27,    44,    29,    30,
      31,    32,    38,    42,   112,    44,    33,    38,    24,    25,
      26,    27,   148,    29,    45,    46,    44,    45,   144,   144,
      22,    23,    46,    11,    12,    13,    14,   107,    16,    17,
      43,    47,    11,    12,    13,    14,     0,    16,    17,     3,
      39,    43,    30,    31,    32,    11,    24,    25,    26,    27,
      38,    29,    31,    32,   134,    31,    32,    45,    46,    38,
      24,    25,    26,    27,    34,    29,    45,    11,    12,    13,
      14,    42,    16,    17,    11,    12,    13,    14,    20,    21,
      47,     3,    44,    45,    16,    17,    46,    31,    32,    39,
      24,    25,    26,    27,    38,    29,    35,    36,    37,    41,
      11,    38,    24,    25,    26,    27,    38,    29,    40,    99,
     100,   101,   102,    47,     6,     7,     8,     9,    10,    55,
      56,    38,    97,    98,    75,    33,   103,   104,    42,    28,
      79,   150,    41,   134,    11
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    24,    25,    26,    27,    29,    49,    65,    68,
      69,    84,    85,     4,    28,    11,    46,    11,    45,    66,
      67,     0,    85,    15,    33,    38,    46,    25,    68,    71,
      72,    73,    43,    44,    45,     6,     7,     8,     9,    10,
      50,    39,    70,    73,    47,    72,    11,    42,    45,    74,
      75,    11,    12,    13,    14,    16,    17,    31,    32,    38,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    61,
      67,    34,    46,    77,    71,    42,    53,    59,    64,    44,
      45,    51,    51,    61,    63,    16,    17,    38,    40,    22,
      23,    43,    62,    53,    35,    36,    37,    31,    32,    18,
      19,    33,    34,    20,    21,    41,    47,    78,    47,    64,
      75,    39,    44,    39,    11,    61,    53,    53,    53,    55,
      55,    56,    56,    56,    56,    57,    57,    60,    30,    45,
      63,    65,    76,    77,    80,    81,    82,    83,    61,    63,
      38,    45,    47,    81,    42,    82,    79,    59,    82,    63,
      39,    76
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    49,    49,    50,    50,    50,    50,    50,    51,
      51,    51,    51,    51,    52,    52,    52,    52,    52,    52,
      52,    53,    53,    54,    54,    55,    55,    55,    55,    56,
      56,    56,    57,    57,    57,    57,    57,    58,    58,    58,
      59,    60,    59,    61,    61,    62,    62,    62,    63,    63,
      64,    65,    65,    66,    66,    67,    67,    68,    68,    68,
      68,    68,    69,    69,    69,    70,    71,    71,    72,    72,
      73,    73,    74,    74,    75,    75,    75,    76,    76,    76,
      77,    77,    78,    79,    80,    80,    81,    81,    82,    82,
      83,    84,    84,    85,    85,    85
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     5,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     3,     3,     2,     2,     2,
       2,     1,     2,     1,     1,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     0,     6,     1,     3,     1,     1,     1,     1,     3,
       1,     2,     3,     1,     3,     3,     1,     1,     1,     1,
       1,     1,     4,     6,     2,     0,     1,     2,     2,     3,
       2,     1,     1,     3,     2,     3,     1,     1,     1,     1,
       2,     5,     0,     0,     1,     2,     1,     1,     1,     2,
       7,     1,     2,     5,     1,     1
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
        case 2:
#line 133 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("61\n");*/}
#line 1501 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 134 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("62\n");*/}
#line 1507 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 138 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("66\n");*/}
#line 1513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 139 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("67\n");*/}
#line 1519 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 140 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("68\n");*/}
#line 1525 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 141 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("69\n");*/}
#line 1531 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 142 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("70\n");*/}
#line 1537 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 146 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("$1 : %s $$ : %s\n",$1,$$);/*printf("74\n");*/}
#line 1543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 147 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("65\n");*/}
#line 1549 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 148 "symbol_table.y" /* yacc.c:1646  */
    {}
#line 1555 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 149 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("76\n");*/}
#line 1561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 151 "symbol_table.y" /* yacc.c:1646  */
    {
								/*printf("77\n");*/
								int flag = 1;
								int i=0;
								while((yyvsp[-1].string)[i] != '\0')
								{
									//printf("$2[%d] = %c \n",i,$2[i]);
									if(!isdigit((yyvsp[-1].string)[i]))
									{
										flag = 0;
										break;
									}
									i++;
								}
								//printf("$2 %s flag %d \n",$2,flag);
								if(!flag)
								{
									strcpy((yyval.string),"(");
									strcpy((yyval.string)+1,(yyvsp[-1].string));
									strcat((yyval.string),")");
									(yyval.string)[strlen((yyval.string))] = '\0';
								}
								else
								{
									strcpy((yyval.string),(yyvsp[-1].string));
									//printf("else $$ %s\n",$$);
								}
								//printf("from expression $$ %s\n",$$);
							}
#line 1595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 184 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("81\n");*/}
#line 1601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 185 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("82\n");*/}
#line 1607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 186 "symbol_table.y" /* yacc.c:1646  */
    {
												char temp[LIMIT];
												strcpy(temp,(yyvsp[-2].string));
												strcat(temp,".");
												strcat(temp,(yyvsp[0].string));
												strcpy((yyval.string),temp); 
												int value = update_variable_value((yyval.string),"");
												if(value == -1)
												{
													FILE *fptr = fopen("error.txt","a");
													fprintf(fptr,"Varaible %s is not defined\n",(yyval.string));
													error = 1;
													fclose(fptr);
													not_defined = -1;
												}
												/*printf("83\n");*/
											}
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 203 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("84\n");*/}
#line 1635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 204 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("85\n");*/}
#line 1641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 205 "symbol_table.y" /* yacc.c:1646  */
    {}
#line 1647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 206 "symbol_table.y" /* yacc.c:1646  */
    {}
#line 1653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 210 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("89\n");*/}
#line 1659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 211 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("90\n");*/}
#line 1665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 215 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("94\n");*/}
#line 1671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 216 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("95\n");*/}
#line 1677 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 220 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("99\n");*/}
#line 1683 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 221 "symbol_table.y" /* yacc.c:1646  */
    {
															//printf("100\n");
															//printf("In * part $1 : %s $3 : %s\n",$1,$3);
															check((yyvsp[-2].string),(yyvsp[0].string));	// to check if varaibles used are defined or not
															fun((yyval.string),(yyvsp[-2].string),(yyvsp[-1].string),(yyvsp[0].string));
														}
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 227 "symbol_table.y" /* yacc.c:1646  */
    {
															//printf("In / part $1 : %s $3 : %s\n",$1,$3);
															/*printf("101\n");*/
															check((yyvsp[-2].string),(yyvsp[0].string));	// to check if varaibles used are defined or not
															fun((yyval.string),(yyvsp[-2].string),(yyvsp[-1].string),(yyvsp[0].string));
													 	}
#line 1705 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 233 "symbol_table.y" /* yacc.c:1646  */
    {
															/*printf("102\n");*/
															check((yyvsp[-2].string),(yyvsp[0].string));	// to check if varaibles used are defined or not
															fun((yyval.string),(yyvsp[-2].string),(yyvsp[-1].string),(yyvsp[0].string));
														}
#line 1715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 241 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("106\n");printf("%s \n",$$);*/}
#line 1721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 242 "symbol_table.y" /* yacc.c:1646  */
    {
															/*printf("101\n");*/
															check((yyvsp[-2].string),(yyvsp[0].string));	// to check if varaibles used are defined or not
															fun((yyval.string),(yyvsp[-2].string),(yyvsp[-1].string),(yyvsp[0].string));
													 	}
#line 1731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 247 "symbol_table.y" /* yacc.c:1646  */
    {
															/*printf("101\n");*/
															check((yyvsp[-2].string),(yyvsp[0].string));	// to check if varaibles used are defined or not
															fun((yyval.string),(yyvsp[-2].string),(yyvsp[-1].string),(yyvsp[0].string));
													 	}
#line 1741 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 255 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("112\n");printf("%s \n",$$);*/}
#line 1747 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 256 "symbol_table.y" /* yacc.c:1646  */
    {
															/*printf("113\n");*/
															check((yyvsp[-2].string),(yyvsp[0].string));	// to check if varaibles used are defined or not
															fun((yyval.string),(yyvsp[-2].string),(yyvsp[-1].string),(yyvsp[0].string));
														}
#line 1757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 261 "symbol_table.y" /* yacc.c:1646  */
    {
															/*printf("114\n");*/
															check((yyvsp[-2].string),(yyvsp[0].string));	// to check if varaibles used are defined or not
															fun((yyval.string),(yyvsp[-2].string),(yyvsp[-1].string),(yyvsp[0].string));
														}
#line 1767 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 266 "symbol_table.y" /* yacc.c:1646  */
    {
															/*printf("121\n");*/
															check((yyvsp[-2].string),(yyvsp[0].string));	// to check if varaibles used are defined or not
															fun((yyval.string),(yyvsp[-2].string),(yyvsp[-1].string),(yyvsp[0].string));
														}
#line 1777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 271 "symbol_table.y" /* yacc.c:1646  */
    {
															/*printf("121\n");*/
															check((yyvsp[-2].string),(yyvsp[0].string));	// to check if varaibles used are defined or not
															fun((yyval.string),(yyvsp[-2].string),(yyvsp[-1].string),(yyvsp[0].string));
														}
#line 1787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 279 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("120\n");printf("%s \n",$$);*/}
#line 1793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 280 "symbol_table.y" /* yacc.c:1646  */
    {
															/*printf("121\n");*/
															check((yyvsp[-2].string),(yyvsp[0].string));	// to check if varaibles used are defined or not
															fun((yyval.string),(yyvsp[-2].string),(yyvsp[-1].string),(yyvsp[0].string));
														}
#line 1803 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 285 "symbol_table.y" /* yacc.c:1646  */
    {
															/*printf("121\n");*/
															check((yyvsp[-2].string),(yyvsp[0].string));	// to check if varaibles used are defined or not
															fun((yyval.string),(yyvsp[-2].string),(yyvsp[-1].string),(yyvsp[0].string));
														}
#line 1813 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 293 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("126\n");printf("%s \n",$$);*/}
#line 1819 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 294 "symbol_table.y" /* yacc.c:1646  */
    { if( strlen((yyvsp[-1].string)) == 1 && !strcmp((yyvsp[-1].string),"1") ) ternary_flag = 1; }
#line 1825 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 294 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("127\n");*/}
#line 1831 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 298 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("131\n");printf("%s \n",$$);*/}
#line 1837 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 299 "symbol_table.y" /* yacc.c:1646  */
    {
																		//printf("132\n");
																		//printf("ternary_flag %d not_defined %d\n",ternary_flag,not_defined);
																		if(not_defined == 0 || ternary_flag == 1)
																		{
																			//printf("hello\n");
																			int value = update_variable_value((yyvsp[-2].string),(yyvsp[0].string));
																			if( value == -1 )
																			{
																				not_defined = 1;
																				FILE *fptr = fopen("error.txt","a");
																				fprintf(fptr,"Varaible %s is not defined\n",(yyval.string));
																				error = 1;
																				fclose(fptr);
																			}
																		}
																		not_defined = 0;
																		ternary_flag = 0;
																	}
#line 1861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 321 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("136\n");*/}
#line 1867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 322 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("137\n");*/}
#line 1873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 323 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("138\n");*/}
#line 1879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 327 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("142\n");printf("%s \n",$$);*/}
#line 1885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 328 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("143\n");*/}
#line 1891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 332 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("147\n");*/}
#line 1897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 336 "symbol_table.y" /* yacc.c:1646  */
    {
									/*
									if(!strcmp($1,"struct"))
										display_struct();
									*/
										//printf("151\n");
								}
#line 1909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 343 "symbol_table.y" /* yacc.c:1646  */
    {
													/* display struct member in cuurent scope only if $1 = "struct" */
													
													/*
													if(!strcmp($1,"struct"))
														display_struct();
													*/
													
													//printf("$$ %s\n",$$);
													//printf("152\n");
													//display_struct();
													//printf("%s \n",$1);
													//printf("$2 %s\n",$2);
													char *type = (yyvsp[-2].string);
													
													/* if the $2 has '_' character then varaible has value associated it*/
													if(index((yyvsp[-1].string),'?') != NULL)
													{
														
														/* to get the index of '_' in $2 */
														char *_ = index((yyvsp[-1].string), '?');
														
														/* to get the no of characher in the name string */
														int _index = (int)(_ - (yyvsp[-1].string));
														
														/* to get the no of characher in the value string */
														int value_length = strlen((yyvsp[-1].string)) - _index;
														
														char name[_index];
														strncpy(name,(yyvsp[-1].string),_index);
														name[_index] = '\0';
														
														char value[value_length];
														strncpy(value,(yyvsp[-1].string)+_index+1,value_length);
														//printf("VALUE %s length %d\n",value,strlen(value));
														value[value_length] = '\0';
														
														coercion(type,value);
														//printf("VALUE %s length %d\n",value,strlen(value));
														//printf("not_defined %d\n",not_defined);
														if(not_defined == 0)
															push_my(type,name,value,scope);
														not_defined = 0;
													}
													else if(!strcmp((yyvsp[-2].string),"struct"))
													{
														//int struct_index_to_insert = symbol_table_stack[top_stack_for_symbol_tables].struct_index_to_insert;
														add_struct_member_in_symbol_table((yyvsp[-1].string));
														//struct_member_name($2,struct_index_to_insert-1);
													}
													
													/* if varaible is declared without default value */
													else
													{
														//printf("good night");
														char name[strlen((yyvsp[-1].string))+1];
														strcpy(name,(yyvsp[-1].string));
														//name[strlen($2)] = '\0';
														//printf("hi\n");
														push_my(type,name,"",scope);
													}
												}
#line 1976 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 408 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("156\n");*/}
#line 1982 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 409 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("157\n");*/}
#line 1988 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 413 "symbol_table.y" /* yacc.c:1646  */
    {
												//printf("$1 : %s $3 : %s\n",$1,$3);
												/*assigning value to init_declarator of form " 													  'var_name'_'var_default_value' */
												 
												//printf("161\n");
												//printf("$$ %s %d\n",$$,strlen($$));
												
												strncpy((yyval.string)+strlen((yyval.string)), "?", 2);
												(yyval.string)[strlen((yyval.string))] = '\0';
												//printf("$$ %s\n",$$);
												//printf("$3 %s\n",$3);
												strncpy((yyval.string)+strlen((yyval.string)), (yyvsp[0].string), sizeof((yyvsp[0].string)));
												//$$[strlen($$)] = '\0';
												//printf("$$ %s\n",$$);
											}
#line 2008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 428 "symbol_table.y" /* yacc.c:1646  */
    {
												/*assigning value to init_declarator of form " 													  'var_name' */
												
												strncpy((yyval.string),(yyvsp[0].string),strlen((yyvsp[0].string)) - 1);(yyval.string)[strlen((yyval.string))] = '\0';
												//printf("162\n");
											}
#line 2019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 437 "symbol_table.y" /* yacc.c:1646  */
    {}
#line 2025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 438 "symbol_table.y" /* yacc.c:1646  */
    {}
#line 2031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 439 "symbol_table.y" /* yacc.c:1646  */
    {}
#line 2037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 440 "symbol_table.y" /* yacc.c:1646  */
    {}
#line 2043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 441 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("Struct_specifier %s\n",$1);*/}
#line 2049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 445 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("174\n");*/}
#line 2055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 447 "symbol_table.y" /* yacc.c:1646  */
    {
														/* struct_flag is to tell the decleration is of structure 
														   and value is "" beacuse this push is used to put only the name of 															   struct declared in current scope*/ 
														   struct_member("",(yyvsp[-4].string));
														//push_my("",$2,"",STRUCT_FLAG);
														/*strcpy($$,$1.string);printf("175\n");*/
													}
#line 2067 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 454 "symbol_table.y" /* yacc.c:1646  */
    {
														/* initialized to denote the member used in the struct decleration 															   is struct */
														struct_reference_used = 1;
														/*printf("176\n");*/
													}
#line 2077 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 461 "symbol_table.y" /* yacc.c:1646  */
    {
						if(top_stack_for_symbol_tables != -1)
						{
							int struct_index_to_insert = symbol_table_stack[top_stack_for_symbol_tables].struct_index_to_insert;
							nested_struct_start_index = symbol_table_stack[top_stack_for_symbol_tables].struct_defined[struct_index_to_insert].index_to_insert_member;
						}
					}
#line 2089 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 470 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("%s \n",$1);printf("180\n");*/}
#line 2095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 471 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("181\n");*/}
#line 2101 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 475 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("185\n");*/}
#line 2107 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 476 "symbol_table.y" /* yacc.c:1646  */
    {
																struct_member((yyvsp[-2].string),(yyvsp[-1].string));
																//push_my($1,$2,"",STRUCT_FLAG);
															 	/*printf("%s \n",$1);printf("%s \n",$2);printf("186\n");*/
															}
#line 2117 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 484 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("190\n");*/}
#line 2123 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 485 "symbol_table.y" /* yacc.c:1646  */
    {/*strcpy($$,$1);printf("%s \n",$1);printf("191\n");*/}
#line 2129 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 489 "symbol_table.y" /* yacc.c:1646  */
    {/*strcpy($$,$1);printf("%s \n",$1);printf("195\n");*/}
#line 2135 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 490 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("196\n");*/}
#line 2141 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 494 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("200\n");*/}
#line 2147 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 495 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("201\n");*/}
#line 2153 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 496 "symbol_table.y" /* yacc.c:1646  */
    {/*strcpy($$,$1);printf("%s \n",$1);printf("202\n");*/}
#line 2159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 500 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("206\n");*/}
#line 2165 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 501 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("207\n");*/}
#line 2171 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 502 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("208\n");*/}
#line 2177 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 506 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("212\n");*/}
#line 2183 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 507 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("213\n");*/}
#line 2189 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 510 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("216\n");*/ scope = NEWSCOPE;}
#line 2195 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 513 "symbol_table.y" /* yacc.c:1646  */
    {
				/*printf("219\n");*/
				scope = OLDSCOPE;
				//display();
				//printf("\n");
				write_to_file();
				pop_my();
			}
#line 2208 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 523 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("222\n");*/}
#line 2214 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 524 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("223\n");*/}
#line 2220 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 528 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("227\n");*/}
#line 2226 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 529 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("228\n");*/}
#line 2232 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 533 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("232\n");*/}
#line 2238 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 534 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("233\n");*/}
#line 2244 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 538 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("238\n");*/}
#line 2250 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 542 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("244\n");*/}
#line 2256 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 543 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("245\n");*/}
#line 2262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 547 "symbol_table.y" /* yacc.c:1646  */
    {write_to_file();/*printf("249\n");*/}
#line 2268 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 548 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("250\n");*/}
#line 2274 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 549 "symbol_table.y" /* yacc.c:1646  */
    {/*printf("251\n");*/}
#line 2280 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2284 "y.tab.c" /* yacc.c:1646  */
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
#line 552 "symbol_table.y" /* yacc.c:1906  */


void yyerror(const char *str)
{
	fflush(stdout);
	fprintf(stderr, "*** %s\n", str);
}
int main(){
	init_symbol_table();
	if(!yyparse())
	{
		printf("Successful\n");
	}
	else
		printf("Unsuccessful\n");

	return 0;
}


void init_symbol_table()
{
	FILE *fptr = fopen("symbol_table.txt","w");
	fclose(fptr);
	FILE *fptr1 = fopen("error.txt","w");
	fclose(fptr1);
	top_stack_for_symbol_tables = 0;
	int *index_to_insert = &symbol_table_stack[top_stack_for_symbol_tables].index_to_insert;
	int i;
	//printf("index_to_insert %d\n",*index_to_insert);
	for(i=0;i<NO_OF_KEYWORD;i++)
	{
		strcpy(symbol_table_stack[top_stack_for_symbol_tables].symbol_table[*index_to_insert].name,keywords[i]);
		//printf("init_symbol_table %s\n",symbol_table_stack[top_stack_for_symbol_tables].symbol_table[*index_to_insert].name);
		strcpy(symbol_table_stack[top_stack_for_symbol_tables].symbol_table[*index_to_insert].type,"KEYWORD");
		strcpy(symbol_table_stack[top_stack_for_symbol_tables].symbol_table[*index_to_insert].value,"");
		//*(index_to_insert)++;
		symbol_table_stack[top_stack_for_symbol_tables].index_to_insert++;
		//printf("hello");
	}
	//display();
	//printf("\n");
	write_to_file();
}

void write_to_file()
{
	FILE *fptr = fopen("symbol_table.txt","a");
	int i = 0;
	if(top_stack_for_symbol_tables != -1)
	{
		int length = symbol_table_stack[top_stack_for_symbol_tables].index_to_insert;
		for(i=0;i<length;i++)
		{
			fprintf(fptr,"TYPE : %5s\t\tNAME : %5s\t\tVALUE : %5s\n",symbol_table_stack[top_stack_for_symbol_tables].symbol_table[i].type,symbol_table_stack[top_stack_for_symbol_tables].symbol_table[i].name,symbol_table_stack[top_stack_for_symbol_tables].symbol_table[i].value);
		}
	}
	fprintf(fptr,"\n");
	fclose(fptr);
}

void struct_member_name(char* struct_name,int struct_index_to_insert)
{
	//printf("In struct_member_name function %s\n",symbol_table_stack[top_stack_for_symbol_tables].struct_defined[struct_index_to_insert].struct_name);
	int index_to_insert_member = symbol_table_stack[top_stack_for_symbol_tables].struct_defined[struct_index_to_insert].index_to_insert_member;
	int i;
	//printf("nested_struct_start_index %d\n",nested_struct_start_index);
	for(i=0;i<index_to_insert_member;i++)
	{
		strcat(symbol_table_stack[top_stack_for_symbol_tables].struct_defined[struct_index_to_insert].member_name[i],".");
		strcat(symbol_table_stack[top_stack_for_symbol_tables].struct_defined[struct_index_to_insert].member_name[i],struct_name);
	}
	//printf("nested struct name %s\n",symbol_table_stack[top_stack_for_symbol_tables].struct_defined[struct_index_to_insert].member_name[i-1]);
}

void coercion(char *type,char *value)
{	
	char buf[6];
	int i=0;
	int is_digit = 1;
	int is_decimal = 0;
	//printf("Type : %s Value : %s\n",type,value);
	while(value[i] != '\0')
	{
		if( isdigit(value[i]) || value[i] == '.')
		{
			if(value[i] == '.')
				is_decimal = 1; 
			//printf("value[%d] : %c\n",i,value[i]);
		}
		else
		{
			is_digit = 0;
			break;
		}
		i++;
	}
	//printf("is_digit : %d\n",is_digit);
	if(!strcmp(type,"int") && is_digit)
	{
		int temp = atoi(value);
		gcvt(temp,6,buf);
		buf[strlen(buf)] = '\0';
		strcpy(value,buf);
		if(is_decimal)
		{
			FILE *fptr = fopen("error.txt","a");
			error = 1;
			fprintf(fptr,"Warning : data loss may occur.Converting float to int\n");
			fclose(fptr);
		}
	}
	else if(!strcmp(type,"float") && is_digit)
	{
		float temp = atof(value);
		gcvt(temp,6,buf);
		buf[strlen(buf)] = '\0';
		strcpy(value,buf);
		//printf("Warning : Converting from int to float'\n");
	}
}
int search_my(char *name,int flag)
{
	//printf("Hello, I'm in search_my()");
	/*
	printf("-------------Inside Search--------------- \n");
	printf("scope %d\n",flag);
	printf("Name %s\n",name);
	printf("index_to_insert %d\n",symbol_table_stack[top_stack_for_symbol_tables].index_to_insert);
	printf("Symbol table's top Varaible Name %s\n",symbol_table_stack[top_stack_for_symbol_tables].symbol_table[0].name);
	printf("-------------Inside Search--------------- \n");
	*/
	if(!flag)
	{
		int length = symbol_table_stack[top_stack_for_symbol_tables].index_to_insert;
		int i = 0;
		while(i<length)
		{
			//printf("stuck here");
			if(!strcmp(name,symbol_table_stack[top_stack_for_symbol_tables].symbol_table[i].name))
				return -1;
			i++;
		}
	}

	return 1;
}

int push_my(char *type,char *name,char *value,int flag)
{
	if(top_stack_for_symbol_tables == MAX_SCOPE)
		printf("Cannot have more than %d Scope in a program",MAX_SCOPE);
	else
	{
		if( top_stack_for_symbol_tables != -1 && strlen(type) != 0 && search_my(name,flag) == -1 )
		//if(0)
		{
			FILE *fptr = fopen("error.txt","a");
			error = 1;
			fprintf(fptr,"Cannot have multiple decleration for same variable %s\n",name);
			fclose(fptr);
			return -1;	
		}
		else
		{
			if(flag == NEWSCOPE)
			{
				top_stack_for_symbol_tables++;
				scope = OLDSCOPE;
			}
			//if(flag != STRUCT_FLAG)
			{
				int index_to_insert = symbol_table_stack[top_stack_for_symbol_tables].index_to_insert;
				if(symbol_table_stack[top_stack_for_symbol_tables].index_to_insert <= MAX_SYMBOLS)
				{
					strcpy(symbol_table_stack[top_stack_for_symbol_tables].symbol_table[index_to_insert].name,name);
					strcpy(symbol_table_stack[top_stack_for_symbol_tables].symbol_table[index_to_insert].type,type);
					/*
					char buf[6];
					if(!strcmp(type,"float"))
					{
						float temp = atof(value);
						char buf[6];
						gcvt(temp,6,buf);
						buf[strlen(buf)] = '\0';
					}
					else if(!strcmp(type,"int"))
					{
						int temp = atoi(value);
						gcvt(temp,6,buf);
						buf[strlen(buf)] = '\0';
					}
					*/
					strcpy(symbol_table_stack[top_stack_for_symbol_tables].symbol_table[index_to_insert].value,value);
					symbol_table_stack[top_stack_for_symbol_tables].index_to_insert += 1;
					//printf("Name %s\n",symbol_table_stack[top_stack_for_symbol_tables].symbol_table[0].name);
					//printf("Value %s\n",symbol_table_stack[top_stack_for_symbol_tables].symbol_table[0].value);
					//printf("Type %s\n",symbol_table_stack[top_stack_for_symbol_tables].symbol_table[0].type);
				}
				else
				{
					printf("Cannot have more than %d Symbols in each scope",MAX_SYMBOLS);
					return -1;
				}
			}
			/*
			else
			{
				
			}
			*/
			return 0;
		}
	}
}

int pop_my()
{
	if(top_stack_for_symbol_tables == -1)
	{
		printf("No Scope Present");
		return -1;
	}
	// poping all the content of top_stack_for_symbol_tables by making corresponding index to zero.
	else
	{
		// setting index_to_insert of top_stack_for_symbol_tables to 0 
		symbol_table_stack[top_stack_for_symbol_tables].index_to_insert = 0;
		
		// setting struct_index_to_insert of top_stack_for_symbol_tables to 0 and also all the index_to_insert_member of struct_defined
		int struct_index_to_insert =  symbol_table_stack[top_stack_for_symbol_tables].struct_index_to_insert;
		int i;
		for(i = 0;i<struct_index_to_insert;i++)
			symbol_table_stack[top_stack_for_symbol_tables].struct_defined[i].index_to_insert_member = 0;
		symbol_table_stack[top_stack_for_symbol_tables].struct_index_to_insert = 0;
		
		// need to clear stack top before decrementing
		top_stack_for_symbol_tables--; 
		return 0;
	}
}

void display_struct()
{
	int i = 0;
	int j;
	if(top_stack_for_symbol_tables != -1)
	{
		int struct_index_to_insert = symbol_table_stack[top_stack_for_symbol_tables].struct_index_to_insert;
		for(i=0;i<struct_index_to_insert;i++)
		{
			//printf("Structure name %s\n",symbol_table_stack[top_stack_for_symbol_tables].struct_defined[i].struct_name);
			int index_to_insert_member = symbol_table_stack[top_stack_for_symbol_tables].struct_defined[i].index_to_insert_member;
			//printf("index_to_insert_member %d\n",index_to_insert_member);
			for(j=0;j<index_to_insert_member;j++)
			{
				printf("Type: %s NAME: %s ",symbol_table_stack[top_stack_for_symbol_tables].struct_defined[i].member_type[j],symbol_table_stack[top_stack_for_symbol_tables].struct_defined[i].member_name[j]);
			}
			printf("\n");
		}
	}
}


void display()
{
	//printf("Display\n");
	int i = 0;
	if(top_stack_for_symbol_tables != -1)
	{
		//printf("Display\n");
		//printf("Display top_stack_for_symbol_tables %d \n",top_stack_for_symbol_tables);
		int length = symbol_table_stack[top_stack_for_symbol_tables].index_to_insert;
		//printf("Display index_to_insert %d \n",length);
		for(i=0;i<length;i++)
		{
			//printf("helllo");
			printf("TYPE : %s\tNAME : %s\tVALUE : %s\n",symbol_table_stack[top_stack_for_symbol_tables].symbol_table[i].type,symbol_table_stack[top_stack_for_symbol_tables].symbol_table[i].name,symbol_table_stack[top_stack_for_symbol_tables].symbol_table[i].value);
		}
	}
}

void fun(char *result ,char *arg1,char *arg2,char *arg3)
{
	/*
	int i = 0;
	int flag = 0;
	if(arg1[i] == '(')
	{
		i+=1;
		flag = 1;
	}
	*/
	int arg1_length = strlen(arg1);
	int arg3_length = strlen(arg3);
	int i=arg1_length-1;
	int j = 0;
	if((isdigit(arg1[i]) | arg1[i] == '.') || (isdigit(arg3[j])  | arg3[j] == '.'))
	{
		float temp; 
		//if(!strcmp(arg2,"*"))
		{
			//printf("result %s arg1 %s arg2 %s arg3 %s\n",result,arg1,arg2,arg3);
			//int arg1_length = strlen(arg1);
			//int arg3_length = strlen(arg3);
			//int i=arg1_length-1;
			//int j = 0;
			while((i >= 0) && (isdigit(arg1[i]) | arg1[i] == '.'))
			{
				//printf("stuck\n");
				i--;
			}
			
			while((j < arg3_length) && (isdigit(arg3[j])  | arg3[j] == '.'))
			{
				//printf("stuck\n");
				j++;
			}
			
			if(i+1 <= arg1_length-1 && j-1 >= 0)
			{
				//printf("i %d\n",i);
				char temp_arg3[j];
				strncpy(temp_arg3,arg3,j);
				//printf("j %d\n",j-1);
				//printf("arg1 %s \n",arg1+(i+1));
				//printf("arg3 %s \n",temp_arg3);
				if(!strcmp(arg2,"*"))
					temp = atof(arg1+(i+1)) * atof(temp_arg3);
				else if(!strcmp(arg2,"/"))
					temp = atof(arg1+(i+1)) / atof(temp_arg3);
				else if(!strcmp(arg2,"%"))
					temp = atoi(arg1+(i+1)) % atoi(temp_arg3);
				else if(!strcmp(arg2,"+"))
					temp = atof(arg1+(i+1)) + atof(temp_arg3);
				else if(!strcmp(arg2,"-"))
					temp = atof(arg1+(i+1)) - atof(temp_arg3);
				else if(!strcmp(arg2,"<"))
					temp = atof(arg1+(i+1)) < atof(temp_arg3);
				else if(!strcmp(arg2,">"))
					temp = atof(arg1+(i+1)) > atof(temp_arg3);
				else if(!strcmp(arg2,">="))
					temp = atof(arg1+(i+1)) >= atof(temp_arg3);
				else if(!strcmp(arg2,"<="))
					temp = atof(arg1+(i+1)) <= atof(temp_arg3);
				else if(!strcmp(arg2,"!="))
					temp = atof(arg1+(i+1)) != atof(temp_arg3);
				else if(!strcmp(arg2,"=="))
					temp = atof(arg1+(i+1)) == atof(temp_arg3);
				
				char buf[128];
				gcvt(temp,6,buf);
				/*
				if(!strcmp(buf,"inf"))
				{
					printf("Error\n");
					exit(0);
				}
				*/
				//buf[strlen(buf)] = '\0';
				strcat(buf,arg3+j);
				//printf("result %s\n",result);
				//printf("arg1 %s \n",arg1);
				//printf("arg2 %s \n",arg2);
				//printf("arg3 %s \n",arg3);
				//printf("buf %s\n",buf);
				//printf("arg1+i+1 %s\n",arg1+i+1);
				//printf("arg1 %s\n",arg1);
				strncpy(arg1+i+1,buf,sizeof(buf));
				//arg1[strlen(arg1)] = '\0';
				
				//printf("\n");
				strcpy(result,arg1);
				//printf("arg1 %s \n",arg1);
				//printf("result %s \n",result);
				//strcat(result,buf);
				return;
			}
			else
			{
				//printf("in else part of fun function arg1 =  %s arg3 = %s\n",arg1,arg3);
				strncpy(result,arg1,sizeof(arg1));
				strcat(result,arg2);
				//result[strlen(result)] = '\0';
				strcat(result,arg3);
				result[strlen(result)] = '\0';
				//printf("res %s\n",result);
				return;
			}
			//temp = atof(arg1) * atof(arg3);
		}
		/*
		else if(!strcmp(arg2,"/"))
			temp = atof(arg1) / atof(arg3);
		else if(!strcmp(arg2,"%"))
			temp = atoi(arg1) % atoi(arg3);
		else if(!strcmp(arg2,"+"))
			temp = atof(arg1) + atof(arg3);
		else if(!strcmp(arg2,"-"))
			temp = atof(arg1) - atof(arg3);
		else if(!strcmp(arg2,"<"))
			temp = atof(arg1) < atof(arg3);
		else if(!strcmp(arg2,">"))
			temp = atof(arg1) > atof(arg3);
		else if(!strcmp(arg2,"="))
		{
		}
		gcvt(temp,6,result);
		result[strlen(result)] = '\0';
		printf("In Else -> Result for %s * %s : %s\n",arg1,arg3,result);
		*/
	}
	else
	{
		char *p[128];
		strncpy(result,arg1,sizeof(arg1));
		//strcat(result,arg1);
		result[strlen(result)] = '\0';
		//printf("result 1 %s\n",result);
		//printf("arg2 %s\n",arg2);
		//strncpy(result+strlen(result),arg2,2);
		strcat(result,arg2);
		result[strlen(result)] = '\0';
		//printf("result 2 %s \n",result);
		//printf("arg3 %s \n",arg3);
		//strncpy(result+strlen(result),arg3,strlen(arg3));
		strcat(result,arg3);
		result[strlen(result)] = '\0';
		//printf("In If -> Result for %s * %s : %s\n",arg1,arg3,result);
	}	
}

int update_variable_value(char *name,char *value)
{
	int i,j;
	int index_to_insert;
	char *temp_name;
	for(i=top_stack_for_symbol_tables;i>=0;i--)
	{
		index_to_insert = symbol_table_stack[i].index_to_insert;
	//printf("name : %s",name);
		for(j=0;j<index_to_insert;j++)
		{
			temp_name = symbol_table_stack[i].symbol_table[j].name;
			//printf("temp_name : %s",temp_name);
			if(!strcmp(temp_name,name))
			{
				if(strlen(value) == 0)
					return 1;
				value[strlen(value)] = '\0';	// to ensure value string is null terminated
				strcpy(symbol_table_stack[i].symbol_table[j].value,value);
				return 1;
			}
		}
	}
	return -1;	
}

void check(char *arg1,char *arg3)
{
	char temp_name[128];
	int i=0;
	//printf("arg1 : %s arg3 : %s\n",arg1,arg3);
	int flag_operator = 0;	// means argument passed doesn't have operator
	int value;
	if( !isdigit(arg1[0]) && arg1[0] != '(' )
	{
		// for ensuring no operator is present in argument passed. Ex = (p*q-1)	gives arg1 = p*q and arg3 = 1
		while( arg1[i] != '\0' )
		{
			if( !isalnum(arg1[i]) )
			{
				flag_operator = 1;				
				break;
			}
			i++;
		}
		//printf("check flag %d\n",flag_operator);	
		if( !flag_operator )
		{
			// check if varaible in arg1 is present in symbol table or not
			value = update_variable_value(arg1,"");
			if(value == -1)
			{
				not_defined = 1;
				FILE *fptr = fopen("error.txt","a");
				fprintf(fptr,"Varaible %s is not defined\n",arg1);
				error = 1;
				fclose(fptr);
			}
		}
	}
	i=0;
	flag_operator = 0;
	if( !isdigit(arg3[0]) && arg3[0] != '(' )
	{
		while( arg3[i] != '\0' )
		{
			if( !isalnum(arg3[i]) )
			{
				flag_operator = 1;				
				break;
			}
			i++;
		}
		if( !flag_operator )
		{
			//check if varaible in arg1 is present in symbol table or not
			value = update_variable_value(arg3,"");
			if(value == -1)
			{
				not_defined = 1;
				FILE *fptr = fopen("error.txt","a");
				fprintf(fptr,"Varaible %s is not defined\n",arg3);
				error = 1;
				fclose(fptr);
			}
		}
	}
	
}

int add_struct_member_in_symbol_table(char *struct_name)
{
	// to make sure struct_name is null terminated
	//printf("struct name : %s\n",struct_name);
	struct_name[strlen(struct_name)] = '\0';
	
	//int index_to_insert = symbol_table_stack[top_stack_for_symbol_tables].index_to_insert;
	int last_struct_inserted_index = symbol_table_stack[top_stack_for_symbol_tables].struct_index_to_insert - 1;
	
	int last_insert_index_member_struct = symbol_table_stack[top_stack_for_symbol_tables].struct_defined[last_struct_inserted_index].index_to_insert_member;
	
	int j=0,i;	// index for member of struct;
	char *type;
	char *var_name;
	char name[128];
	for(i=0;i<last_insert_index_member_struct;i++)
	{
		type = symbol_table_stack[top_stack_for_symbol_tables].struct_defined[last_struct_inserted_index].member_type[j];
		var_name = symbol_table_stack[top_stack_for_symbol_tables].struct_defined[last_struct_inserted_index].member_name[j];
		strcpy(name,struct_name);
		strcat(name,".");
		strcat(name,var_name);
		name[strlen(name)] = '\0';
		j++;
		push_my(type,name,"",scope);
	}
}

void struct_member(char *type,char *name)
{
	if(scope == NEWSCOPE)
	{
		++top_stack_for_symbol_tables;
		scope = OLDSCOPE;
		//printf("inside struct\n");
	}
	int *struct_index_to_insert = &symbol_table_stack[top_stack_for_symbol_tables].struct_index_to_insert;
	//int *index_to_insert_member = &symbol_table_stack[top_stack_for_symbol_tables].struct_defined[*struct_index_to_insert].index_to_insert_member;
	if(strlen(type) != 0 && strlen(name) != 0)
	{
		//printf("Struct member name %s\n",name);
		//printf("Struct member type %s\n",type);
		int *index_to_insert_member;
		if(struct_reference_used == 0 && !strcmp(type,"struct")) 
		{
			//printf("!!!!!!!!!!!!!\n");
			*struct_index_to_insert -= 1;
			symbol_table_stack[top_stack_for_symbol_tables].struct_defined[*struct_index_to_insert].struct_name[0] = '\0';
			index_to_insert_member = &symbol_table_stack[top_stack_for_symbol_tables].struct_defined[*struct_index_to_insert].index_to_insert_member;
			int i;
			//printf("nested_struct_start_index %d\n",nested_struct_start_index);
			char new_name[2*LIMIT];
			for(i=nested_struct_start_index;i<*index_to_insert_member;i++)
			{
				strcpy(new_name,name);
				strcat(new_name,".");
				strcat(new_name,symbol_table_stack[top_stack_for_symbol_tables].struct_defined[*struct_index_to_insert].member_name[i]);
				//printf("new name %s\n"new_name);
				strcpy(symbol_table_stack[top_stack_for_symbol_tables].struct_defined[*struct_index_to_insert].member_name[i],new_name);
				//strcat(symbol_table_stack[top_stack_for_symbol_tables].struct_defined[*struct_index_to_insert].member_name[i],".");
				//strcat(symbol_table_stack[top_stack_for_symbol_tables].struct_defined[*struct_index_to_insert].member_name[i],name);
			}
			//printf("nested struct name %s\n",symbol_table_stack[top_stack_for_symbol_tables].struct_defined[*struct_index_to_insert].member_name[i-1]);
			//printf("nested struct name %s\n",symbol_table_stack[top_stack_for_symbol_tables].struct_defined[*struct_index_to_insert].member_type[i-1]);
		}
		else
		{
			index_to_insert_member = &symbol_table_stack[top_stack_for_symbol_tables].struct_defined[*struct_index_to_insert].index_to_insert_member;
			//printf("struct_index_to_insert %d\n",*struct_index_to_insert);

			//printf("index_to_insert_member %d\n",*index_to_insert_member);
			strcpy(symbol_table_stack[top_stack_for_symbol_tables].struct_defined[*struct_index_to_insert].member_type[*index_to_insert_member],type);
			strcpy(symbol_table_stack[top_stack_for_symbol_tables].struct_defined[*struct_index_to_insert].member_name[*index_to_insert_member],name);
			*index_to_insert_member += 1;
			struct_reference_used = 0;
		}
	}
	else
	{
		//printf("Struct name %s\n",name);
		strcpy(symbol_table_stack[top_stack_for_symbol_tables].struct_defined[*struct_index_to_insert].struct_name,name);
		*struct_index_to_insert += 1;
	}
}
