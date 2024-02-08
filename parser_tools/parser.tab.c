
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 2 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylex();
extern int yyparse();

int yyerror(const char *s);
int column_count = 0; // Global variable to count column definitions
char *type_v;
int order_completed = 0; // Flag to indicate if the order is completed


/* Line 189 of yacc.c  */
#line 88 "parser.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     CREATE = 258,
     TABLE = 259,
     ALTER = 260,
     SELECT = 261,
     FROM = 262,
     WHERE = 263,
     ID = 264,
     STAR = 265,
     INT = 266,
     FLOAT = 267,
     STRING = 268,
     VARCHAR = 269,
     CHAR = 270,
     DECIMAL = 271,
     DATE = 272,
     CONSTRAINT = 273,
     DEFAULT = 274,
     PRIMARY = 275,
     FOREIGN = 276,
     KEY = 277,
     NOT = 278,
     NULL_ = 279,
     REFERENCES = 280,
     UNIQUE = 281,
     AUTO_INCREMENT = 282,
     COMMA = 283,
     SEMICOLON = 284,
     DOT = 285,
     LPAREN = 286,
     RPAREN = 287,
     COLUMN = 288,
     AS = 289,
     ON = 290,
     JOIN = 291,
     INNER = 292,
     OUTER = 293,
     LEFT = 294,
     RIGHT = 295,
     FULL = 296,
     ADD = 297,
     MODIFY = 298,
     DROP = 299,
     EQUAL = 300,
     NOT_EQUAL = 301,
     PLUS = 302,
     MINUS = 303,
     MULTIPLY = 304,
     DIVIDE = 305,
     LESS = 306,
     GREATER = 307,
     AND = 308,
     OR = 309,
     TO = 310,
     RENAME = 311,
     NUM = 312
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 71 "parser.y"

    char *str;
    int num;



/* Line 214 of yacc.c  */
#line 188 "parser.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 200 "parser.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   172

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  79
/* YYNRULES -- Number of states.  */
#define YYNSTATES  162

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   312

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,    10,    12,    14,    16,    23,
      28,    30,    34,    38,    42,    46,    50,    54,    60,    64,
      68,    74,    78,    79,    85,    87,    91,    95,   101,   103,
     105,   109,   112,   120,   122,   124,   127,   130,   133,   134,
     137,   139,   143,   147,   151,   155,   159,   163,   168,   172,
     177,   179,   181,   183,   187,   191,   195,   199,   203,   205,
     209,   213,   224,   226,   228,   235,   237,   242,   244,   246,
     247,   250,   253,   255,   259,   260,   265,   267,   271,   273
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      59,     0,    -1,    60,    -1,    -1,    60,    61,    29,    -1,
      62,    -1,    63,    -1,    66,    -1,     3,     4,     9,    31,
      75,    32,    -1,     5,     4,     9,    64,    -1,    65,    -1,
      64,    28,    65,    -1,    42,    33,    76,    -1,    43,    33,
      76,    -1,    44,    33,     9,    -1,    56,    33,    76,    -1,
       5,    33,    76,    -1,    42,    18,     9,    78,     9,    -1,
      42,    18,     9,    -1,    44,    18,     9,    -1,    44,    18,
       9,    78,     9,    -1,    56,    55,     9,    -1,    -1,     6,
      67,     7,    68,    71,    -1,    81,    -1,    81,    34,     9,
      -1,    67,    28,    81,    -1,    67,    28,    81,    34,     9,
      -1,    10,    -1,    82,    -1,    68,    28,    82,    -1,    68,
      69,    -1,    70,    36,    82,    35,    81,    45,    81,    -1,
       1,    -1,    37,    -1,    39,    38,    -1,    40,    38,    -1,
      41,    38,    -1,    -1,     8,    72,    -1,    73,    -1,    72,
      54,    73,    -1,    72,    53,    73,    -1,    31,    72,    32,
      -1,    81,    45,    74,    -1,    81,    46,    74,    -1,    81,
      51,    74,    -1,    81,    51,    45,    74,    -1,    81,    52,
      74,    -1,    81,    52,    45,    74,    -1,    81,    -1,    57,
      -1,    13,    -1,    74,    47,    74,    -1,    74,    48,    74,
      -1,    74,    49,    74,    -1,    74,    50,    74,    -1,    31,
      74,    32,    -1,    76,    -1,    75,    28,    76,    -1,     9,
      77,    78,    -1,    21,    22,    31,     9,    32,    25,     9,
      31,     9,    32,    -1,     1,    -1,    11,    -1,    16,    31,
      57,    28,    57,    32,    -1,    17,    -1,    14,    31,    57,
      32,    -1,    15,    -1,     1,    -1,    -1,    78,    79,    -1,
      20,    22,    -1,    26,    -1,    79,    19,     9,    -1,    -1,
      27,    80,    23,    24,    -1,     9,    -1,     9,    30,     9,
      -1,     9,    -1,     9,     9,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    82,    82,    87,    89,    98,    99,   100,   105,   117,
     125,   126,   131,   136,   140,   144,   148,   154,   158,   162,
     166,   170,   178,   180,   188,   191,   194,   197,   200,   204,
     205,   206,   211,   212,   220,   221,   222,   223,   228,   229,
     234,   235,   238,   241,   248,   251,   254,   257,   260,   263,
     270,   271,   276,   279,   282,   285,   288,   291,   298,   299,
     304,   309,   314,   324,   325,   326,   327,   333,   334,   343,
     344,   349,   353,   357,   362,   361,   372,   377,   385,   387
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CREATE", "TABLE", "ALTER", "SELECT",
  "FROM", "WHERE", "ID", "STAR", "INT", "FLOAT", "STRING", "VARCHAR",
  "CHAR", "DECIMAL", "DATE", "CONSTRAINT", "DEFAULT", "PRIMARY", "FOREIGN",
  "KEY", "NOT", "NULL_", "REFERENCES", "UNIQUE", "AUTO_INCREMENT", "COMMA",
  "SEMICOLON", "DOT", "LPAREN", "RPAREN", "COLUMN", "AS", "ON", "JOIN",
  "INNER", "OUTER", "LEFT", "RIGHT", "FULL", "ADD", "MODIFY", "DROP",
  "EQUAL", "NOT_EQUAL", "PLUS", "MINUS", "MULTIPLY", "DIVIDE", "LESS",
  "GREATER", "AND", "OR", "TO", "RENAME", "NUM", "$accept", "start",
  "statement_list", "statement", "create_table_state", "alter_table_state",
  "alter_action_list", "alter_action", "select_statement", "select_list",
  "table_references", "join_clause", "join_type", "where_clause",
  "condition", "comparison_expr", "expr", "column_defs", "column_def",
  "type", "constraint_list", "constraint", "$@1", "ID_DOT_ID", "ID_ID", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    60,    60,    61,    61,    61,    62,    63,
      64,    64,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    66,    66,    67,    67,    67,    67,    67,    68,
      68,    68,    69,    69,    70,    70,    70,    70,    71,    71,
      72,    72,    72,    72,    73,    73,    73,    73,    73,    73,
      74,    74,    74,    74,    74,    74,    74,    74,    75,    75,
      76,    76,    76,    77,    77,    77,    77,    77,    77,    78,
      78,    79,    79,    79,    80,    79,    81,    81,    82,    82
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     3,     1,     1,     1,     6,     4,
       1,     3,     3,     3,     3,     3,     3,     5,     3,     3,
       5,     3,     0,     5,     1,     3,     3,     5,     1,     1,
       3,     2,     7,     1,     1,     2,     2,     2,     0,     2,
       1,     3,     3,     3,     3,     3,     3,     4,     3,     4,
       1,     1,     1,     3,     3,     3,     3,     3,     1,     3,
       3,    10,     1,     1,     6,     1,     4,     1,     1,     0,
       2,     2,     1,     3,     0,     4,     1,     3,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     2,     1,     0,     0,     0,     0,     5,     6,
       7,     0,     0,    76,    28,     0,    24,     4,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       9,    10,    77,    78,     0,    29,    26,    25,    62,     0,
       0,     0,    58,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    79,    33,     0,     0,    34,     0,     0,     0,
      31,     0,    23,     0,    68,    63,     0,    67,     0,    65,
      69,     0,     0,     8,    16,    69,    12,    13,    69,    14,
      15,    21,    11,     0,    39,    40,     0,    30,    35,    36,
      37,     0,    27,     0,     0,    60,     0,    59,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    72,    74,    70,     0,    17,    20,    43,    42,    41,
      52,     0,    51,    44,    50,    45,     0,    46,     0,    48,
       0,    66,     0,    71,     0,     0,     0,     0,     0,     0,
       0,     0,    47,    49,     0,     0,     0,    73,     0,    57,
      53,    54,    55,    56,     0,    64,    75,     0,    32,     0,
       0,    61
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     7,     8,     9,    30,    31,    10,    15,
      34,    60,    61,    62,    84,    85,   123,    41,    42,    70,
      95,   113,   134,   124,    35
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -74
static const yytype_int16 yypact[] =
{
     -74,    14,    17,   -74,    15,    23,    49,     2,   -74,   -74,
     -74,    38,    41,    30,   -74,    25,    37,   -74,    63,    -4,
      94,    97,   100,   105,    48,    90,    18,    98,    58,   -20,
     104,   -74,   -74,   124,    33,   -74,   102,   -74,   -74,   101,
     112,     5,   -74,    48,   126,    48,    48,   128,   129,    48,
     130,    -4,   -74,   -74,    -5,    97,   -74,   103,   106,   107,
     -74,   110,   -74,   131,   -74,   -74,   111,   -74,   116,   -74,
     -74,   118,    48,   -74,   -74,    39,   -74,   -74,    50,   -74,
     -74,   -74,   -74,    -5,    35,   -74,    59,   -74,   -74,   -74,
     -74,    97,   -74,    86,    95,    93,   141,   -74,    66,    81,
     -29,   100,   100,    -1,    -1,    -3,    -2,   119,   121,   123,
     133,   -74,   -74,   137,   125,   -74,   -74,   -74,   -74,   -74,
     -74,    -1,   -74,    78,   -74,    78,    -1,    78,    -1,    78,
     100,   -74,   108,   -74,   135,   150,   136,    34,    -1,    -1,
      -1,    -1,    78,    78,   115,   132,   138,   -74,   154,   -74,
      72,    72,   -74,   -74,   100,   -74,   -74,   139,   -74,   157,
     140,   -74
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   117,   -74,   -74,
     -74,   -74,   -74,   -74,    84,    28,   -41,   -74,   -28,   -74,
     -73,   -74,   -74,    -6,   -46
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -39
static const yytype_int16 yytable[] =
{
      16,    25,    98,   117,    13,    99,    13,    13,    13,    87,
     120,   120,   120,    49,     3,    74,    36,    76,    77,    11,
       4,    80,     5,     6,   101,   102,    83,    12,   121,   121,
     121,    17,    21,    72,    53,    50,    44,    73,    26,    27,
      28,    54,   126,   128,    97,   107,   -22,    18,    86,    38,
      19,    45,    29,    22,   122,   122,   122,    39,    13,    14,
      20,    55,   -38,   125,   127,   129,   149,   -18,   -18,    40,
      56,    23,    57,    58,    59,   115,    47,    86,   -19,   -19,
     137,   138,   139,   140,   141,   142,   110,   143,   101,   102,
     116,    48,   111,   112,    24,    86,    86,   150,   151,   152,
     153,   110,    64,    32,   103,   104,    33,   111,   112,    13,
     105,   106,    65,   110,    37,    66,    67,    68,    69,   111,
     112,   140,   141,    43,   144,   138,   139,   140,   141,   118,
     119,    46,    51,    52,    71,    75,    63,    78,    79,    81,
      92,    88,    93,   108,    89,    90,    91,    94,   158,    96,
     114,   132,   109,   131,   130,   133,   135,   136,   146,   147,
     154,   148,   156,   157,   155,   145,   160,   100,    82,     0,
     159,     0,   161
};

static const yytype_int16 yycheck[] =
{
       6,     5,    75,    32,     9,    78,     9,     9,     9,    55,
      13,    13,    13,    33,     0,    43,    22,    45,    46,     4,
       3,    49,     5,     6,    53,    54,    31,     4,    31,    31,
      31,    29,     7,    28,     1,    55,    18,    32,    42,    43,
      44,     8,    45,    45,    72,    91,    29,     9,    54,     1,
       9,    33,    56,    28,    57,    57,    57,     9,     9,    10,
      30,    28,    29,   104,   105,   106,    32,    28,    29,    21,
      37,    34,    39,    40,    41,     9,    18,    83,    28,    29,
     121,    47,    48,    49,    50,   126,    20,   128,    53,    54,
       9,    33,    26,    27,    31,   101,   102,   138,   139,   140,
     141,    20,     1,     9,    45,    46,     9,    26,    27,     9,
      51,    52,    11,    20,     9,    14,    15,    16,    17,    26,
      27,    49,    50,    33,   130,    47,    48,    49,    50,   101,
     102,    33,    28,     9,    22,     9,    34,     9,     9,     9,
       9,    38,    31,    57,    38,    38,    36,    31,   154,    31,
       9,    28,    57,    32,    35,    22,    19,    32,    23,     9,
      45,    25,    24,     9,    32,    57,     9,    83,    51,    -1,
      31,    -1,    32
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    59,    60,     0,     3,     5,     6,    61,    62,    63,
      66,     4,     4,     9,    10,    67,    81,    29,     9,     9,
      30,     7,    28,    34,    31,     5,    42,    43,    44,    56,
      64,    65,     9,     9,    68,    82,    81,     9,     1,     9,
      21,    75,    76,    33,    18,    33,    33,    18,    33,    33,
      55,    28,     9,     1,     8,    28,    37,    39,    40,    41,
      69,    70,    71,    34,     1,    11,    14,    15,    16,    17,
      77,    22,    28,    32,    76,     9,    76,    76,     9,     9,
      76,     9,    65,    31,    72,    73,    81,    82,    38,    38,
      38,    36,     9,    31,    31,    78,    31,    76,    78,    78,
      72,    53,    54,    45,    46,    51,    52,    82,    57,    57,
      20,    26,    27,    79,     9,     9,     9,    32,    73,    73,
      13,    31,    57,    74,    81,    74,    45,    74,    45,    74,
      35,    32,    28,    22,    80,    19,    32,    74,    47,    48,
      49,    50,    74,    74,    81,    57,    23,     9,    25,    32,
      74,    74,    74,    74,    45,    32,    24,     9,    81,    31,
       9,    32
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:

/* Line 1455 of yacc.c  */
#line 89 "parser.y"
    {
                    if (order_completed) { printf("Parsing successful\n");}
                    else {printf("Parsing Failed\n");}
                    order_completed = 0;
                    ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 105 "parser.y"
    {
                    printf("Create table statement for table %s\n", (yyvsp[(3) - (6)].str));
                    if (column_count > 0){ 
                            order_completed = 1; // Set the flag to indicate order completion
                    }
                    column_count = 0;

                    ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 117 "parser.y"
    {
                        printf("*(Alter table statement for table %s)*\n", (yyvsp[(3) - (4)].str));
                        order_completed = 1; // Set the flag to indicate order completion
                    ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 132 "parser.y"
    {
                        printf("Add column to table\n");
                        column_count++;
                    ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 137 "parser.y"
    {
                        printf("Modify column in table\n");
                    ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 141 "parser.y"
    {
                        printf("Drop column from table\n");
                    ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 145 "parser.y"
    {
                        printf("Rename column from table\n");
                    ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 149 "parser.y"
    {
                        printf("Alter column from table");
                    ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 155 "parser.y"
    {
                        printf("Add constraint in table\n");
                    ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 159 "parser.y"
    {
                        printf("Add constraint in table\n");
                    ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 163 "parser.y"
    {
                        printf("Drop constraint from table\n");
                    ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 167 "parser.y"
    {
                        printf("Drop constraint from table\n");
                    ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 171 "parser.y"
    {
                        printf("Rename column from table\n");
                    ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 180 "parser.y"
    {
                        printf("*(Select statement)*\n");
                        order_completed = 1; // Set the flag to indicate order completion
                    ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 188 "parser.y"
    {
                        printf("Selection\n");
                    ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 191 "parser.y"
    {
                        printf("Selection\n");
                    ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 194 "parser.y"
    {
                        printf("Selection\n");
                    ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 197 "parser.y"
    {
                        printf("Selection\n");
                    ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 200 "parser.y"
    { printf("Whole Selection\n");;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 213 "parser.y"
    {
                        return(0);
                    ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 235 "parser.y"
    {
                            printf(" OR\n");
                        ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 238 "parser.y"
    {
                            printf(" AND\n");
                        ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 241 "parser.y"
    {
                            printf("(\n");
                        ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 248 "parser.y"
    {
                    printf(" where\n");
                    ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 251 "parser.y"
    {
                        printf(" where <> \n");
                    ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 254 "parser.y"
    {
                        printf(" where < \n");
                    ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 257 "parser.y"
    {
                        printf(" where <=\n");
                    ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 260 "parser.y"
    {
                        printf(" where >\n");
                    ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 263 "parser.y"
    {
                        printf(" where >=\n");
                    ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 271 "parser.y"
    {
                    char num_str[20]; // Adjust the size as per your requirements
                    sprintf(num_str, "%d", (yyvsp[(1) - (1)].num)); // Assuming $1 is the integer value
                    printf("%s\n", num_str);
                    ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 276 "parser.y"
    {
                        printf("%s\n", (yyvsp[(1) - (1)].str));
                    ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 279 "parser.y"
    {
                        printf(" + \n");
                    ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 282 "parser.y"
    {
                        printf(" - \n");
                    ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 285 "parser.y"
    {
                        printf(" * \n");
                    ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 288 "parser.y"
    {
                        printf(" / \n");
                    ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 291 "parser.y"
    {
                        printf("()\n");
                    ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 305 "parser.y"
    {
                        printf("Column %s of type %s\n", (yyvsp[(1) - (3)].str), type_v);
                        column_count++;
                    ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 310 "parser.y"
    {
                        printf("Foreign key constraint\n");
	                    column_count++;
                    ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 315 "parser.y"
    {
                        yyerror("Syntax error in column definition");
                        column_count--;
                        return(0);
                    ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 324 "parser.y"
    {type_v = "INT";;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 325 "parser.y"
    {type_v = "DECIMAL";;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 326 "parser.y"
    {type_v = "DATE";;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 327 "parser.y"
    {
                    char buffer[100]; // Assuming a maximum size for the buffer
                    snprintf(buffer, sizeof(buffer), "VARCHAR(%d)", (yyvsp[(3) - (4)].num)); // Convert NUM to string
                    type_v = strdup(buffer); // Store the type as a string
                    ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 333 "parser.y"
    {type_v = "CHAR";;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 335 "parser.y"
    {
                    yyerror("Invalid column type");
                    return(0);
                    ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 350 "parser.y"
    {
                        printf("Primary key constraint\n");
                    ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 354 "parser.y"
    {
                        printf("Unique constraint\n");
                    ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 358 "parser.y"
    {
                        printf("Default constraint with value %s\n", (yyvsp[(3) - (3)].str));
                    ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 362 "parser.y"
    {
                        printf("Auto increment constraint\n");
                    ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 365 "parser.y"
    {
                        printf("Not Null constraint\n");
                    ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 373 "parser.y"
    {
                        printf("%s\n", (yyvsp[(1) - (1)].str));
                    ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 378 "parser.y"
    {
                        printf("%s from %s\n", (yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));    
                    ;}
    break;



/* Line 1455 of yacc.c  */
#line 2017 "parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 389 "parser.y"




int yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
    printf("Parsing Failed\n");
    return 0;
}

int main() {
    while (yyparse()) {
        
    }

    return 0;
}
