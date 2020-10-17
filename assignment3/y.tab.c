/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFIER = 258,
     TYPE_IDENTIFIER = 259,
     FLOAT_CONSTANT = 260,
     INTEGER_CONSTANT = 261,
     CHARACTER_CONSTANT = 262,
     STRING_LITERAL = 263,
     AUTO_SYM = 264,
     STATIC_SYM = 265,
     TYPEDEF_SYM = 266,
     STRUCT_SYM = 267,
     ENUM_SYM = 268,
     SIZEOF_SYM = 269,
     UNION_SYM = 270,
     IF_SYM = 271,
     ELSE_SYM = 272,
     WHILE_SYM = 273,
     DO_SYM = 274,
     FOR_SYM = 275,
     CONTINUE_SYM = 276,
     BREAK_SYM = 277,
     RETURN_SYM = 278,
     SWITCH_SYM = 279,
     CASE_SYM = 280,
     DEFAULT_SYM = 281,
     PLUS = 282,
     MINUS = 283,
     PLUSPLUS = 284,
     MINUSMINUS = 285,
     BAR = 286,
     AMP = 287,
     BARBAR = 288,
     AMPAMP = 289,
     STAR = 290,
     SLASH = 291,
     PERCENT = 292,
     ASSIGN = 293,
     ARROW = 294,
     COLON = 295,
     SEMICOLON = 296,
     DOTDOTDOT = 297,
     PERIOD = 298,
     COMMA = 299,
     EXCL = 300,
     LSS = 301,
     GTR = 302,
     LEQ = 303,
     GEQ = 304,
     EQL = 305,
     NEQ = 306,
     LP = 307,
     RP = 308,
     LB = 309,
     RB = 310,
     LR = 311,
     RR = 312
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define TYPE_IDENTIFIER 259
#define FLOAT_CONSTANT 260
#define INTEGER_CONSTANT 261
#define CHARACTER_CONSTANT 262
#define STRING_LITERAL 263
#define AUTO_SYM 264
#define STATIC_SYM 265
#define TYPEDEF_SYM 266
#define STRUCT_SYM 267
#define ENUM_SYM 268
#define SIZEOF_SYM 269
#define UNION_SYM 270
#define IF_SYM 271
#define ELSE_SYM 272
#define WHILE_SYM 273
#define DO_SYM 274
#define FOR_SYM 275
#define CONTINUE_SYM 276
#define BREAK_SYM 277
#define RETURN_SYM 278
#define SWITCH_SYM 279
#define CASE_SYM 280
#define DEFAULT_SYM 281
#define PLUS 282
#define MINUS 283
#define PLUSPLUS 284
#define MINUSMINUS 285
#define BAR 286
#define AMP 287
#define BARBAR 288
#define AMPAMP 289
#define STAR 290
#define SLASH 291
#define PERCENT 292
#define ASSIGN 293
#define ARROW 294
#define COLON 295
#define SEMICOLON 296
#define DOTDOTDOT 297
#define PERIOD 298
#define COMMA 299
#define EXCL 300
#define LSS 301
#define GTR 302
#define LEQ 303
#define GEQ 304
#define EQL 305
#define NEQ 306
#define LP 307
#define RP 308
#define LB 309
#define RB 310
#define LR 311
#define RR 312




/* Copy the first part of user declarations.  */
#line 1 "kim.y"

#include <stdio.h>
	extern int line_no;
	extern char *yytext;
	extern int yylex();


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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 227 "y.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   555

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  58
/* YYNRULES -- Number of rules.  */
#define YYNRULES  153
/* YYNRULES -- Number of states.  */
#define YYNSTATES  271

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
       0,     0,     3,     5,     7,    10,    12,    14,    18,    21,
      24,    28,    30,    32,    35,    38,    40,    42,    44,    46,
      50,    52,    56,    58,    60,    62,    68,    73,    76,    78,
      80,    82,    85,    89,    91,    95,    97,   103,   108,   111,
     113,   117,   119,   123,   126,   128,   130,   133,   135,   139,
     144,   149,   150,   152,   153,   155,   157,   161,   163,   167,
     170,   173,   175,   177,   179,   182,   186,   190,   194,   199,
     204,   206,   210,   212,   216,   218,   220,   222,   224,   226,
     228,   233,   237,   241,   246,   247,   250,   251,   254,   256,
     259,   265,   273,   279,   285,   293,   303,   304,   306,   310,
     313,   316,   318,   320,   322,   324,   326,   330,   332,   337,
     342,   346,   350,   353,   356,   357,   359,   361,   365,   367,
     370,   373,   376,   379,   382,   385,   388,   391,   396,   398,
     403,   405,   408,   410,   414,   418,   422,   424,   428,   432,
     434,   438,   442,   446,   450,   452,   454,   458,   462,   464,
     468,   470,   474,   476
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      59,     0,    -1,    60,    -1,    61,    -1,    60,    61,    -1,
      62,    -1,    63,    -1,    64,    78,    92,    -1,    78,    92,
      -1,    64,    41,    -1,    64,    66,    41,    -1,    68,    -1,
      65,    -1,    68,    64,    -1,    65,    64,    -1,     9,    -1,
      10,    -1,    11,    -1,    67,    -1,    66,    44,    67,    -1,
      78,    -1,    78,    38,    88,    -1,    69,    -1,    75,    -1,
       4,    -1,    70,     3,    56,    71,    57,    -1,    70,    56,
      71,    57,    -1,    70,     3,    -1,    12,    -1,    15,    -1,
      72,    -1,    71,    72,    -1,    68,    73,    41,    -1,    74,
      -1,    73,    44,    74,    -1,    78,    -1,    13,     3,    56,
      76,    57,    -1,    13,    56,    76,    57,    -1,    13,     3,
      -1,    77,    -1,    76,    44,    77,    -1,     3,    -1,     3,
      38,   114,    -1,    79,    80,    -1,    80,    -1,    35,    -1,
      35,    79,    -1,     3,    -1,    52,    78,    53,    -1,    80,
      54,    81,    55,    -1,    80,    52,    81,    53,    -1,    -1,
     114,    -1,    -1,    83,    -1,    84,    -1,    84,    44,    42,
      -1,    85,    -1,    84,    44,    85,    -1,    64,    78,    -1,
      64,    86,    -1,    64,    -1,    79,    -1,    87,    -1,    79,
      87,    -1,    52,    86,    53,    -1,    54,    81,    55,    -1,
      52,    82,    53,    -1,    87,    54,    81,    55,    -1,    87,
      52,    82,    53,    -1,   114,    -1,    56,    89,    57,    -1,
      88,    -1,    89,    44,    88,    -1,    91,    -1,    92,    -1,
      95,    -1,    96,    -1,    97,    -1,    99,    -1,    25,   114,
      40,    90,    -1,    26,    40,    90,    -1,     3,    40,    90,
      -1,    56,    93,    94,    57,    -1,    -1,    93,    63,    -1,
      -1,    94,    90,    -1,    41,    -1,   115,    41,    -1,    16,
      52,   115,    53,    90,    -1,    16,    52,   115,    53,    90,
      17,    90,    -1,    24,    52,   115,    53,    90,    -1,    18,
      52,   115,    53,    90,    -1,    19,    90,    18,    52,   115,
      53,    41,    -1,    20,    52,    98,    41,    98,    41,    98,
      53,    90,    -1,    -1,   115,    -1,    23,    98,    41,    -1,
      21,    41,    -1,    22,    41,    -1,     3,    -1,     6,    -1,
       5,    -1,     7,    -1,     8,    -1,    52,   115,    53,    -1,
     100,    -1,   101,    54,   115,    55,    -1,   101,    52,   102,
      52,    -1,   101,    43,     3,    -1,   101,    39,     3,    -1,
     101,    29,    -1,   101,    30,    -1,    -1,   103,    -1,   113,
      -1,   103,    44,   113,    -1,   101,    -1,    29,   104,    -1,
      30,   104,    -1,    32,   105,    -1,    35,   105,    -1,    45,
     105,    -1,    28,   105,    -1,    27,   105,    -1,    14,   104,
      -1,    14,    52,   106,    53,    -1,   104,    -1,    52,   106,
      53,   105,    -1,    64,    -1,    64,    86,    -1,   105,    -1,
     107,    35,   105,    -1,   107,    36,   105,    -1,   107,    37,
     105,    -1,   107,    -1,   108,    27,   107,    -1,   108,    28,
     107,    -1,   108,    -1,   109,    46,   110,    -1,   109,    47,
     110,    -1,   109,    48,   110,    -1,   109,    49,   110,    -1,
     108,    -1,   109,    -1,   111,    50,   109,    -1,   111,    51,
     109,    -1,   111,    -1,   112,    33,   112,    -1,   112,    -1,
     104,    38,   113,    -1,   115,    -1,   113,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    21,    21,    25,    26,    30,    31,    35,    36,    40,
      41,    45,    46,    47,    48,    52,    53,    54,    58,    59,
      63,    64,    68,    69,    70,    73,    74,    75,    78,    79,
      83,    84,    88,    92,    93,    97,   101,   102,   103,   107,
     108,   112,   113,   117,   118,   122,   123,   127,   128,   129,
     130,   133,   135,   138,   140,   144,   145,   149,   150,   154,
     155,   156,   160,   161,   162,   166,   167,   168,   169,   170,
     174,   175,   179,   180,   184,   185,   186,   187,   188,   189,
     193,   194,   195,   199,   202,   204,   207,   209,   212,   213,
     217,   218,   219,   223,   224,   225,   228,   230,   234,   235,
     236,   240,   241,   242,   243,   244,   245,   249,   250,   251,
     252,   253,   254,   255,   258,   260,   264,   265,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   278,   282,   283,
     287,   288,   292,   293,   294,   295,   299,   300,   301,   305,
     306,   307,   308,   309,   313,   317,   318,   319,   328,   329,
     333,   334,   338,   342
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "TYPE_IDENTIFIER",
  "FLOAT_CONSTANT", "INTEGER_CONSTANT", "CHARACTER_CONSTANT",
  "STRING_LITERAL", "AUTO_SYM", "STATIC_SYM", "TYPEDEF_SYM", "STRUCT_SYM",
  "ENUM_SYM", "SIZEOF_SYM", "UNION_SYM", "IF_SYM", "ELSE_SYM", "WHILE_SYM",
  "DO_SYM", "FOR_SYM", "CONTINUE_SYM", "BREAK_SYM", "RETURN_SYM",
  "SWITCH_SYM", "CASE_SYM", "DEFAULT_SYM", "PLUS", "MINUS", "PLUSPLUS",
  "MINUSMINUS", "BAR", "AMP", "BARBAR", "AMPAMP", "STAR", "SLASH",
  "PERCENT", "ASSIGN", "ARROW", "COLON", "SEMICOLON", "DOTDOTDOT",
  "PERIOD", "COMMA", "EXCL", "LSS", "GTR", "LEQ", "GEQ", "EQL", "NEQ",
  "LP", "RP", "LB", "RB", "LR", "RR", "$accept", "program",
  "translation_unit", "external_declaration", "function_definition",
  "declaration", "declaration_specifiers", "storage_class_specifier",
  "init_declarator_list", "init_declarator", "type_specifier",
  "struct_specifier", "struct_or_union", "struct_declaration_list",
  "struct_declaration", "struct_declarator_list", "struct_declarator",
  "enum_specifier", "enumerator_list", "enumerator", "declarator",
  "pointer", "direct_declarator", "constant_expression_opt",
  "parameter_type_list_opt", "parameter_type_list", "parameter_list",
  "parameter_declaration", "abstract_declarator",
  "direct_abstract_declarator", "initializer", "initializer_list",
  "statement", "labeled_statement", "compound_statement",
  "declaration_list", "statement_list", "expression_statement",
  "selection_statement", "iteration_statement", "expression_opt",
  "jump_statement", "primary_expression", "postfix_expression",
  "arg_expression_list_opt", "arg_expression_list", "unary_expression",
  "cast_expression", "type_name", "multiplicative_expression",
  "additive_expression", "relational_expression", "shift_expression",
  "equality_expression", "logical_or_expression", "assignment_expression",
  "constant_expression", "expression", 0
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
       0,    58,    59,    60,    60,    61,    61,    62,    62,    63,
      63,    64,    64,    64,    64,    65,    65,    65,    66,    66,
      67,    67,    68,    68,    68,    69,    69,    69,    70,    70,
      71,    71,    72,    73,    73,    74,    75,    75,    75,    76,
      76,    77,    77,    78,    78,    79,    79,    80,    80,    80,
      80,    81,    81,    82,    82,    83,    83,    84,    84,    85,
      85,    85,    86,    86,    86,    87,    87,    87,    87,    87,
      88,    88,    89,    89,    90,    90,    90,    90,    90,    90,
      91,    91,    91,    92,    93,    93,    94,    94,    95,    95,
      96,    96,    96,    97,    97,    97,    98,    98,    99,    99,
      99,   100,   100,   100,   100,   100,   100,   101,   101,   101,
     101,   101,   101,   101,   102,   102,   103,   103,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   105,   105,
     106,   106,   107,   107,   107,   107,   108,   108,   108,   109,
     109,   109,   109,   109,   110,   111,   111,   111,   112,   112,
     113,   113,   114,   115
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     3,     2,     2,
       3,     1,     1,     2,     2,     1,     1,     1,     1,     3,
       1,     3,     1,     1,     1,     5,     4,     2,     1,     1,
       1,     2,     3,     1,     3,     1,     5,     4,     2,     1,
       3,     1,     3,     2,     1,     1,     2,     1,     3,     4,
       4,     0,     1,     0,     1,     1,     3,     1,     3,     2,
       2,     1,     1,     1,     2,     3,     3,     3,     4,     4,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       4,     3,     3,     4,     0,     2,     0,     2,     1,     2,
       5,     7,     5,     5,     7,     9,     0,     1,     3,     2,
       2,     1,     1,     1,     1,     1,     3,     1,     4,     4,
       3,     3,     2,     2,     0,     1,     1,     3,     1,     2,
       2,     2,     2,     2,     2,     2,     2,     4,     1,     4,
       1,     2,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     1,     3,     3,     1,     3,
       1,     3,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    47,    24,    15,    16,    17,    28,     0,    29,    45,
       0,     0,     2,     3,     5,     6,     0,    12,    11,    22,
       0,    23,     0,     0,    44,    38,     0,    46,     0,     1,
       4,     9,     0,    18,    20,    14,    13,    27,     0,    84,
       8,    43,    51,    51,     0,    41,     0,    39,    48,    10,
       0,     0,     7,     0,     0,     0,    30,    86,   101,   103,
     102,   104,   105,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   107,   118,   128,   132,   136,   139,   145,
     148,   150,   153,    52,   152,     0,     0,     0,     0,    37,
      19,    20,     0,    21,    70,     0,     0,    33,    35,    26,
      31,    85,     0,     0,     0,   126,   128,   125,   124,     0,
     119,   120,   121,   122,   123,   130,     0,     0,    50,   112,
     113,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    49,    36,
      42,    40,    72,     0,    25,    32,     0,   101,     0,     0,
       0,     0,     0,     0,    96,     0,     0,     0,    88,    83,
      87,    74,    75,    76,    77,    78,    79,     0,     0,    53,
      51,    62,   131,    63,     0,   106,   111,   110,     0,   115,
     116,     0,   151,   133,   134,   135,   137,   138,   144,   140,
     141,   142,   143,   146,   147,   149,     0,    71,    34,     0,
       0,     0,     0,    96,    99,   100,     0,    97,     0,     0,
       0,    89,   127,    61,     0,    54,    55,    57,     0,     0,
      64,    53,    51,   129,   109,     0,   108,    73,    82,     0,
       0,     0,     0,    98,     0,     0,    81,    53,    59,    62,
      60,    67,     0,    65,    66,     0,     0,   117,     0,     0,
       0,    96,     0,    80,    56,    58,    69,    68,    90,    93,
       0,     0,    92,     0,     0,    96,    91,    94,     0,     0,
      95
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    14,    15,   213,    17,    32,    33,
      18,    19,    20,    55,    56,    96,    97,    21,    46,    47,
      22,    23,    24,    72,   214,   215,   216,   217,   218,   173,
      93,   143,   160,   161,   162,    57,   103,   163,   164,   165,
     206,   166,    73,    74,   178,   179,    75,    76,   116,    77,
      78,    79,   189,    80,    81,    82,    83,   167
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -166
static const yytype_int16 yypact[] =
{
     503,  -166,  -166,  -166,  -166,  -166,  -166,    31,  -166,   -18,
      64,    47,   503,  -166,  -166,  -166,   150,   243,   243,  -166,
      41,  -166,    12,    49,     7,    32,    95,  -166,    50,  -166,
    -166,  -166,   -15,  -166,    -5,  -166,  -166,    56,   177,  -166,
    -166,     7,   399,   399,    95,    86,   -17,  -166,  -166,  -166,
      64,   312,  -166,   177,    64,    45,  -166,   243,  -166,  -166,
    -166,  -166,  -166,   432,   399,   399,   465,   465,   399,   399,
     399,   366,   105,  -166,   360,   125,  -166,    93,   128,    87,
     101,   137,  -166,  -166,  -166,   127,    66,   399,    95,  -166,
    -166,   148,   312,  -166,  -166,    80,   -13,  -166,  -166,  -166,
    -166,  -166,   150,   216,   366,  -166,  -166,  -166,  -166,   399,
    -166,  -166,  -166,  -166,  -166,   -11,   135,   145,  -166,  -166,
    -166,   200,   203,   399,   399,   399,   399,   399,   399,   399,
     399,   399,   399,   399,   399,   399,   399,   399,  -166,  -166,
    -166,  -166,  -166,    69,  -166,  -166,    64,   167,   156,   157,
     271,   158,   172,   174,   399,   166,   399,   180,  -166,  -166,
    -166,  -166,  -166,  -166,  -166,  -166,  -166,   184,   178,   298,
     399,    17,  -166,    55,   399,  -166,  -166,  -166,   175,   189,
    -166,   194,  -166,  -166,  -166,  -166,    93,    93,   128,  -166,
    -166,  -166,  -166,    87,    87,   137,   312,  -166,  -166,   271,
     399,   399,   232,   399,  -166,  -166,   218,  -166,   399,   220,
     271,  -166,  -166,   124,   209,  -166,   219,  -166,   211,   210,
      55,   243,   399,  -166,  -166,   399,  -166,  -166,  -166,   213,
     214,   217,   229,  -166,   222,   271,  -166,   162,  -166,    10,
    -166,  -166,   350,  -166,  -166,   227,   226,  -166,   271,   271,
     399,   399,   271,  -166,  -166,  -166,  -166,  -166,   254,  -166,
     230,   241,  -166,   271,   245,   399,  -166,  -166,   231,   271,
    -166
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -166,  -166,  -166,   276,  -166,   247,    18,  -166,  -166,   255,
       1,  -166,  -166,   261,   -32,  -166,   176,  -166,   277,   236,
      -8,    -9,   -22,   -38,   104,  -166,  -166,    88,   -95,  -149,
     -85,  -166,  -144,  -166,     3,  -166,  -166,  -166,  -166,  -166,
    -165,  -166,  -166,  -166,  -166,  -166,    13,   -54,   224,    38,
      62,    44,    67,  -166,   192,  -104,   -42,   -39
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      27,    41,    28,    84,    84,    85,   202,   142,    34,    94,
     107,   108,    84,     1,   112,   113,   114,     9,    16,   180,
     172,   182,   220,   100,     9,    40,    49,    88,   145,    50,
      16,   146,   117,    51,    25,    35,    36,    52,   232,    54,
      89,   169,    91,   170,    37,   140,    98,    29,    84,     2,
      94,    39,     1,    84,    54,   228,    54,     6,     7,    42,
       8,    43,   237,   100,   170,   117,   236,     1,    39,   169,
     117,   170,   183,   184,   185,   102,   105,   106,   106,   110,
     111,   106,   106,   106,     2,   181,   261,    26,    44,   115,
     220,   253,     6,     7,    91,     8,    54,    38,    45,     9,
     268,    10,    99,    48,   258,   259,   171,   221,   262,   222,
      88,   227,    53,   196,   209,   207,    10,    84,   240,   266,
     223,   247,   115,   139,    87,   270,   197,     1,   126,   127,
     128,    84,   219,   131,   132,   133,   134,   144,    98,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   135,   136,     1,    94,   129,   130,    84,   118,     9,
     171,   229,   230,   125,   207,     1,     2,   186,   187,   234,
     137,     3,     4,     5,     6,     7,   237,     8,   170,   193,
     194,     2,   138,    84,   246,     9,    51,   106,   174,     6,
       7,    31,     8,   188,   188,   188,   188,     9,   175,   190,
     191,   192,    10,   176,   239,   238,   177,   199,   200,   201,
     203,   260,   207,   204,   237,   205,   170,    41,   208,   147,
     210,    59,    60,    61,    62,   211,   207,   224,   239,    28,
      63,   212,   148,   225,   149,   150,   151,   152,   153,   154,
     155,   156,   157,    64,    65,    66,    67,     2,    68,   226,
     231,    69,     3,     4,     5,     6,     7,   158,     8,   233,
     235,    70,   241,   242,   243,   244,   248,   249,    71,   250,
     251,   263,    39,   159,   147,   252,    59,    60,    61,    62,
     256,   257,   265,   264,   269,    63,   267,   148,    30,   149,
     150,   151,   152,   153,   154,   155,   156,   157,    64,    65,
      66,    67,     2,    68,   101,    90,    69,     3,     4,     5,
       6,     7,   158,     8,    95,    58,    70,    59,    60,    61,
      62,    86,   198,    71,   141,   245,    63,    39,   168,   195,
     255,     0,     0,     9,     0,     0,     0,     0,     0,    64,
      65,    66,    67,     0,    68,     0,     0,    69,     0,     0,
     169,     0,   170,     0,     2,     0,     0,    70,     0,     3,
       4,     5,     6,     7,    71,     8,     0,     0,    92,    58,
       2,    59,    60,    61,    62,     3,     4,     5,     6,     7,
      63,     8,     0,     0,     0,     0,     0,     0,     0,   119,
     120,     0,   254,    64,    65,    66,    67,     0,    68,   121,
       0,    69,    58,   122,    59,    60,    61,    62,     0,     0,
       0,    70,   123,    63,   124,     0,     0,     0,    71,     0,
       0,     0,     0,     0,     0,     0,    64,    65,    66,    67,
       0,    68,     0,     0,    69,    58,     0,    59,    60,    61,
      62,     0,     0,     0,    70,     0,    63,     0,     0,     0,
       0,    71,     0,     0,     0,     0,     0,     0,     0,    64,
      65,    66,    67,     0,    68,     0,     0,    69,    58,     0,
      59,    60,    61,    62,     0,     0,     0,    70,     0,    63,
       0,     0,     0,     0,   104,     0,     0,     0,     0,     0,
       0,     0,    64,    65,    66,    67,     0,    68,     0,     0,
      69,     0,     0,     0,     0,     0,     1,     2,     0,     0,
      70,     0,     3,     4,     5,     6,     7,   109,     8,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     9,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10
};

static const yytype_int16 yycheck[] =
{
       9,    23,    10,    42,    43,    43,   150,    92,    16,    51,
      64,    65,    51,     3,    68,    69,    70,    35,     0,   123,
     115,   125,   171,    55,    35,    22,    41,    44,    41,    44,
      12,    44,    71,    38,     3,    17,    18,    34,   203,    38,
      57,    52,    50,    54,     3,    87,    54,     0,    87,     4,
      92,    56,     3,    92,    53,   199,    55,    12,    13,    52,
      15,    54,    52,    95,    54,   104,   210,     3,    56,    52,
     109,    54,   126,   127,   128,    57,    63,    64,    65,    66,
      67,    68,    69,    70,     4,   124,   251,    56,    56,    71,
     239,   235,    12,    13,   102,    15,    95,    56,     3,    35,
     265,    52,    57,    53,   248,   249,   115,    52,   252,    54,
      44,   196,    56,    44,   156,   154,    52,   156,   213,   263,
     174,   225,   104,    57,    38,   269,    57,     3,    35,    36,
      37,   170,   170,    46,    47,    48,    49,    57,   146,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,    50,    51,     3,   196,    27,    28,   196,    53,    35,
     169,   200,   201,    38,   203,     3,     4,   129,   130,   208,
      33,     9,    10,    11,    12,    13,    52,    15,    54,   135,
     136,     4,    55,   222,   222,    35,    38,   174,    53,    12,
      13,    41,    15,   131,   132,   133,   134,    35,    53,   132,
     133,   134,    52,     3,   213,   213,     3,    40,    52,    52,
      52,   250,   251,    41,    52,    41,    54,   239,    52,     3,
      40,     5,     6,     7,     8,    41,   265,    52,   237,   237,
      14,    53,    16,    44,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,     4,    32,    55,
      18,    35,     9,    10,    11,    12,    13,    41,    15,    41,
      40,    45,    53,    44,    53,    55,    53,    53,    52,    52,
      41,    17,    56,    57,     3,    53,     5,     6,     7,     8,
      53,    55,    41,    53,    53,    14,    41,    16,    12,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,     4,    32,    57,    50,    35,     9,    10,    11,
      12,    13,    41,    15,    53,     3,    45,     5,     6,     7,
       8,    44,   146,    52,    88,   221,    14,    56,   104,   137,
     242,    -1,    -1,    35,    -1,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,    -1,    32,    -1,    -1,    35,    -1,    -1,
      52,    -1,    54,    -1,     4,    -1,    -1,    45,    -1,     9,
      10,    11,    12,    13,    52,    15,    -1,    -1,    56,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      30,    -1,    42,    27,    28,    29,    30,    -1,    32,    39,
      -1,    35,     3,    43,     5,     6,     7,     8,    -1,    -1,
      -1,    45,    52,    14,    54,    -1,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    28,    29,    30,
      -1,    32,    -1,    -1,    35,     3,    -1,     5,     6,     7,
       8,    -1,    -1,    -1,    45,    -1,    14,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      28,    29,    30,    -1,    32,    -1,    -1,    35,     3,    -1,
       5,     6,     7,     8,    -1,    -1,    -1,    45,    -1,    14,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    28,    29,    30,    -1,    32,    -1,    -1,
      35,    -1,    -1,    -1,    -1,    -1,     3,     4,    -1,    -1,
      45,    -1,     9,    10,    11,    12,    13,    52,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     9,    10,    11,    12,    13,    15,    35,
      52,    59,    60,    61,    62,    63,    64,    65,    68,    69,
      70,    75,    78,    79,    80,     3,    56,    79,    78,     0,
      61,    41,    66,    67,    78,    64,    64,     3,    56,    56,
      92,    80,    52,    54,    56,     3,    76,    77,    53,    41,
      44,    38,    92,    56,    68,    71,    72,    93,     3,     5,
       6,     7,     8,    14,    27,    28,    29,    30,    32,    35,
      45,    52,    81,   100,   101,   104,   105,   107,   108,   109,
     111,   112,   113,   114,   115,    81,    76,    38,    44,    57,
      67,    78,    56,    88,   114,    71,    73,    74,    78,    57,
      72,    63,    64,    94,    52,   104,   104,   105,   105,    52,
     104,   104,   105,   105,   105,    64,   106,   115,    53,    29,
      30,    39,    43,    52,    54,    38,    35,    36,    37,    27,
      28,    46,    47,    48,    49,    50,    51,    33,    55,    57,
     114,    77,    88,    89,    57,    41,    44,     3,    16,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    41,    57,
      90,    91,    92,    95,    96,    97,    99,   115,   106,    52,
      54,    79,    86,    87,    53,    53,     3,     3,   102,   103,
     113,   115,   113,   105,   105,   105,   107,   107,   108,   110,
     110,   110,   110,   109,   109,   112,    44,    57,    74,    40,
      52,    52,    90,    52,    41,    41,    98,   115,    52,   114,
      40,    41,    53,    64,    82,    83,    84,    85,    86,    81,
      87,    52,    54,   105,    52,    44,    55,    88,    90,   115,
     115,    18,    98,    41,   115,    40,    90,    52,    78,    79,
      86,    53,    44,    53,    55,    82,    81,   113,    53,    53,
      52,    41,    53,    90,    42,    85,    53,    55,    90,    90,
     115,    98,    90,    17,    53,    41,    90,    41,    98,    53,
      90
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
      
/* Line 1267 of yacc.c.  */
#line 1752 "y.tab.c"
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
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
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


#line 345 "kim.y"

yyerror(char *s){
	printf("line %d : %s near %s \n", line_no, s, yytext);
}

int main() {
	int result;
	
	result = yyparse();

	if (result == 0)
		printf("yyparse() Success\n");
	else
		printf("		Error!!\n");
	return 0;
}
