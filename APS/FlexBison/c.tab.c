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
     I_CONSTANT = 259,
     F_CONSTANT = 260,
     STRING_LITERAL = 261,
     FUNC_NAME = 262,
     SIZEOF = 263,
     B_CONSTANT = 264,
     BOOL = 265,
     CHAR = 266,
     SHORT = 267,
     INT = 268,
     LONG = 269,
     SIGNED = 270,
     UNSIGNED = 271,
     FLOAT = 272,
     DOUBLE = 273,
     VOID = 274,
     AND_OP = 275,
     OR_OP = 276,
     EQ_OP = 277,
     LE_OP = 278,
     GE_OP = 279,
     CASE = 280,
     DEFAULT = 281,
     IF = 282,
     ELSE = 283,
     SWITCH = 284,
     WHILE = 285,
     DO = 286,
     FOR = 287,
     GOTO = 288,
     CONTINUE = 289,
     BREAK = 290,
     RETURN = 291,
     PTR_OP = 292,
     INC_OP = 293,
     DEC_OP = 294,
     LEFT_OP = 295,
     RIGHT_OP = 296,
     NE_OP = 297,
     MUL_ASSIGN = 298,
     DIV_ASSIGN = 299,
     MOD_ASSIGN = 300,
     ADD_ASSIGN = 301,
     SUB_ASSIGN = 302,
     LEFT_ASSIGN = 303,
     RIGHT_ASSIGN = 304,
     AND_ASSIGN = 305,
     XOR_ASSIGN = 306,
     OR_ASSIGN = 307,
     TYPEDEF_NAME = 308,
     ENUMERATION_CONSTANT = 309,
     TYPEDEF = 310,
     EXTERN = 311,
     STATIC = 312,
     AUTO = 313,
     REGISTER = 314,
     INLINE = 315,
     CONST = 316,
     RESTRICT = 317,
     VOLATILE = 318,
     STRUCT = 319,
     UNION = 320,
     ENUM = 321,
     ELLIPSIS = 322,
     COMPLEX = 323,
     IMAGINARY = 324,
     ALIGNAS = 325,
     ALIGNOF = 326,
     ATOMIC = 327,
     GENERIC = 328,
     NORETURN = 329,
     STATIC_ASSERT = 330,
     THREAD_LOCAL = 331
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define I_CONSTANT 259
#define F_CONSTANT 260
#define STRING_LITERAL 261
#define FUNC_NAME 262
#define SIZEOF 263
#define B_CONSTANT 264
#define BOOL 265
#define CHAR 266
#define SHORT 267
#define INT 268
#define LONG 269
#define SIGNED 270
#define UNSIGNED 271
#define FLOAT 272
#define DOUBLE 273
#define VOID 274
#define AND_OP 275
#define OR_OP 276
#define EQ_OP 277
#define LE_OP 278
#define GE_OP 279
#define CASE 280
#define DEFAULT 281
#define IF 282
#define ELSE 283
#define SWITCH 284
#define WHILE 285
#define DO 286
#define FOR 287
#define GOTO 288
#define CONTINUE 289
#define BREAK 290
#define RETURN 291
#define PTR_OP 292
#define INC_OP 293
#define DEC_OP 294
#define LEFT_OP 295
#define RIGHT_OP 296
#define NE_OP 297
#define MUL_ASSIGN 298
#define DIV_ASSIGN 299
#define MOD_ASSIGN 300
#define ADD_ASSIGN 301
#define SUB_ASSIGN 302
#define LEFT_ASSIGN 303
#define RIGHT_ASSIGN 304
#define AND_ASSIGN 305
#define XOR_ASSIGN 306
#define OR_ASSIGN 307
#define TYPEDEF_NAME 308
#define ENUMERATION_CONSTANT 309
#define TYPEDEF 310
#define EXTERN 311
#define STATIC 312
#define AUTO 313
#define REGISTER 314
#define INLINE 315
#define CONST 316
#define RESTRICT 317
#define VOLATILE 318
#define STRUCT 319
#define UNION 320
#define ENUM 321
#define ELLIPSIS 322
#define COMPLEX 323
#define IMAGINARY 324
#define ALIGNAS 325
#define ALIGNOF 326
#define ATOMIC 327
#define GENERIC 328
#define NORETURN 329
#define STATIC_ASSERT 330
#define THREAD_LOCAL 331




/* Copy the first part of user declarations.  */
#line 4 "c.y"

#include "node.h"
#include <cstdio>
#include <cstdlib>

BlockNode *programBlock; /* the top level root node of our final AST */

using namespace std;

extern "C" int yylex();
int yyparse();
extern "C" FILE *yyin;
void yyerror(const char *s);
bool debug = false;


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
typedef union YYSTYPE
#line 20 "c.y"
{
	BlockNode *block;
	ExprNode *expr;
	StmtNode *stmt;
	IdentiferNode *ident;
	NIdentifierParam *identparam;
	VariableDeclaration *var_decl;
	AssignmentNode *var_init;
	QualStorageTypeNode *var_stor;
	std::vector<ExprNode*> *exprvec;
	std::vector<VariableDeclaration*> *varvec;
	std::string *string;
	int token;
	CommonDeclarationNode *common_dec;
}
/* Line 193 of yacc.c.  */
#line 280 "c.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 293 "c.tab.c"

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
#define YYFINAL  52
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2251

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  102
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  79
/* YYNRULES -- Number of rules.  */
#define YYNRULES  272
/* YYNRULES -- Number of states.  */
#define YYNSTATES  460

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   331

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   100,     2,     2,     2,    26,    31,     2,
      89,    90,    23,    22,    91,    24,    96,    25,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    97,    20,
      34,    21,    36,   101,     2,    98,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    94,     2,    95,    28,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    92,    30,    93,    99,     2,     2,     2,
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
      15,    16,    17,    18,    19,    27,    29,    32,    33,    35,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    17,    22,    24,
      28,    30,    32,    34,    36,    38,    40,    42,    44,    46,
      48,    50,    55,    57,    60,    62,    64,    67,    71,    73,
      75,    77,    79,    82,    86,    88,    91,    93,    96,    98,
     101,   103,   106,   108,   111,   113,   116,   118,   120,   123,
     125,   129,   133,   138,   145,   151,   157,   164,   170,   175,
     180,   185,   189,   194,   197,   199,   202,   206,   209,   213,
     216,   220,   226,   231,   237,   242,   246,   250,   254,   259,
     266,   272,   278,   285,   290,   295,   298,   302,   306,   311,
     313,   318,   324,   330,   337,   340,   342,   346,   350,   352,
     354,   356,   358,   361,   366,   370,   372,   374,   381,   383,
     387,   391,   395,   397,   401,   405,   410,   412,   415,   417,
     422,   426,   430,   432,   434,   438,   444,   448,   451,   454,
     457,   461,   465,   470,   474,   478,   480,   482,   486,   489,
     492,   494,   498,   501,   504,   506,   514,   520,   526,   529,
     531,   534,   536,   544,   546,   548,   550,   552,   554,   556,
     558,   560,   562,   564,   566,   568,   570,   572,   577,   583,
     586,   588,   590,   592,   595,   598,   602,   604,   606,   610,
     613,   617,   619,   622,   624,   626,   629,   631,   633,   635,
     637,   639,   642,   644,   646,   648,   650,   652,   654,   656,
     658,   660,   662,   664,   666,   668,   670,   672,   674,   676,
     678,   680,   682,   684,   686,   688,   690,   692,   696,   698,
     700,   705,   709,   714,   718,   722,   725,   728,   735,   743,
     745,   748,   751,   754,   757,   762,   767,   769,   774,   776,
     780,   784,   788,   790,   794,   798,   800,   804,   808,   810,
     814,   818,   822,   826,   828,   832,   836,   838,   842,   844,
     848,   850,   854,   856,   860,   862,   866,   868,   874,   876,
     880,   882,   884
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     103,     0,    -1,   158,    -1,   144,   121,    -1,   144,    -1,
     121,    -1,    82,    89,   157,    90,    -1,    82,    89,   179,
      90,    -1,   178,    -1,   106,    91,   178,    -1,    21,    -1,
      55,    -1,    56,    -1,    57,    -1,    58,    -1,    59,    -1,
      60,    -1,    61,    -1,    62,    -1,    63,    -1,    64,    -1,
      84,    89,   157,    90,    -1,   110,    -1,   109,   110,    -1,
     113,    -1,   148,    -1,    92,    93,    -1,    92,   109,    93,
      -1,     4,    -1,     5,    -1,     9,    -1,    66,    -1,   115,
      20,    -1,   115,   137,    20,    -1,   147,    -1,   144,   117,
      -1,   117,    -1,   150,   115,    -1,   150,    -1,   161,   115,
      -1,   161,    -1,   159,   115,    -1,   159,    -1,   129,   115,
      -1,   129,    -1,   105,   115,    -1,   105,    -1,   113,    -1,
     116,   113,    -1,     3,    -1,    89,   114,    90,    -1,   117,
      94,    95,    -1,   117,    94,    23,    95,    -1,   117,    94,
      69,   160,   178,    95,    -1,   117,    94,    69,   178,    95,
      -1,   117,    94,   160,    23,    95,    -1,   117,    94,   160,
      69,   178,    95,    -1,   117,    94,   160,   178,    95,    -1,
     117,    94,   160,    95,    -1,   117,    94,   178,    95,    -1,
     117,    89,   141,    90,    -1,   117,    89,    90,    -1,   117,
      89,   133,    90,    -1,   119,    21,    -1,   120,    -1,   119,
     120,    -1,    94,   179,    95,    -1,    96,     3,    -1,    89,
     104,    90,    -1,    94,    95,    -1,    94,    23,    95,    -1,
      94,    69,   160,   178,    95,    -1,    94,    69,   178,    95,
      -1,    94,   160,    69,   178,    95,    -1,    94,   160,   178,
      95,    -1,    94,   160,    95,    -1,    94,   178,    95,    -1,
     121,    94,    95,    -1,   121,    94,    23,    95,    -1,   121,
      94,    69,   160,   178,    95,    -1,   121,    94,    69,   178,
      95,    -1,   121,    94,   160,   178,    95,    -1,   121,    94,
     160,    69,   178,    95,    -1,   121,    94,   160,    95,    -1,
     121,    94,   178,    95,    -1,    89,    90,    -1,    89,   141,
      90,    -1,   121,    89,    90,    -1,   121,    89,   141,    90,
      -1,     3,    -1,    78,    92,   124,    93,    -1,    78,    92,
     124,    91,    93,    -1,    78,     3,    92,   124,    93,    -1,
      78,     3,    92,   124,    91,    93,    -1,    78,     3,    -1,
     125,    -1,   124,    91,   125,    -1,   122,    21,   179,    -1,
     122,    -1,   128,    -1,   113,    -1,    20,    -1,   180,    20,
      -1,   115,   114,   116,   111,    -1,   115,   114,   111,    -1,
      72,    -1,    86,    -1,    85,    89,   178,    91,   131,    90,
      -1,   132,    -1,   131,    91,   132,    -1,   157,    97,   178,
      -1,    38,    97,   178,    -1,     3,    -1,     3,    98,   133,
      -1,    92,   135,    93,    -1,    92,   135,    91,    93,    -1,
     178,    -1,   118,   134,    -1,   134,    -1,   135,    91,   118,
     134,    -1,   135,    91,   134,    -1,   114,    21,   134,    -1,
     114,    -1,   136,    -1,   137,    91,   136,    -1,    42,   180,
       3,   148,     3,    -1,    45,     3,    20,    -1,    46,    20,
      -1,    47,    20,    -1,    48,    20,    -1,    48,   180,    20,
      -1,     3,    97,   148,    -1,    37,   179,    97,   148,    -1,
      38,    97,   148,    -1,   142,    91,    79,    -1,   142,    -1,
     143,    -1,   142,    91,   143,    -1,   115,   114,    -1,   115,
     104,    -1,   115,    -1,    23,   160,   144,    -1,    23,   160,
      -1,    23,   144,    -1,    23,    -1,    39,   180,     3,   148,
      40,   148,     3,    -1,    39,   180,     3,   148,     3,    -1,
      41,    89,   180,    90,   148,    -1,   161,   146,    -1,   161,
      -1,   159,   146,    -1,   159,    -1,    87,    89,   179,    91,
       6,    90,    20,    -1,   140,    -1,   111,    -1,   127,    -1,
     145,    -1,   138,    -1,   139,    -1,     6,    -1,     7,    -1,
      67,    -1,    68,    -1,    69,    -1,    88,    -1,    70,    -1,
      71,    -1,   152,    92,   153,    93,    -1,   152,     3,    92,
     153,    93,    -1,   152,     3,    -1,    76,    -1,    77,    -1,
     154,    -1,   153,   154,    -1,   146,    20,    -1,   146,   155,
      20,    -1,   147,    -1,   156,    -1,   155,    91,   156,    -1,
      97,   179,    -1,   114,    97,   179,    -1,   114,    -1,   146,
     104,    -1,   146,    -1,   126,    -1,   158,   126,    -1,    73,
      -1,    74,    -1,    75,    -1,    84,    -1,   159,    -1,   160,
     159,    -1,    19,    -1,    11,    -1,    12,    -1,    13,    -1,
      14,    -1,    17,    -1,    18,    -1,    15,    -1,    16,    -1,
      10,    -1,    80,    -1,    81,    -1,   108,    -1,   151,    -1,
     123,    -1,    65,    -1,    31,    -1,    23,    -1,    22,    -1,
      24,    -1,    99,    -1,   100,    -1,     3,    -1,   112,    -1,
     149,    -1,    89,   180,    90,    -1,   130,    -1,   163,    -1,
     164,    94,   180,    95,    -1,   164,    89,    90,    -1,   164,
      89,   106,    90,    -1,   164,    96,     3,    -1,   164,    49,
       3,    -1,   164,    50,    -1,   164,    51,    -1,    89,   157,
      90,    92,   135,    93,    -1,    89,   157,    90,    92,   135,
      91,    93,    -1,   164,    -1,    50,   165,    -1,    51,   165,
      -1,   162,   166,    -1,     8,   165,    -1,     8,    89,   157,
      90,    -1,    83,    89,   157,    90,    -1,   165,    -1,    89,
     157,    90,   166,    -1,   166,    -1,   167,    23,   166,    -1,
     167,    25,   166,    -1,   167,    26,   166,    -1,   167,    -1,
     168,    22,   167,    -1,   168,    24,   167,    -1,   168,    -1,
     169,    52,   168,    -1,   169,    53,   168,    -1,   169,    -1,
     170,    34,   169,    -1,   170,    36,   169,    -1,   170,    33,
     169,    -1,   170,    35,   169,    -1,   170,    -1,   171,    32,
     170,    -1,   171,    54,   170,    -1,   171,    -1,   172,    31,
     171,    -1,   172,    -1,   173,    28,   172,    -1,   173,    -1,
     174,    30,   173,    -1,   174,    -1,   175,    27,   174,    -1,
     175,    -1,   176,    29,   175,    -1,   176,    -1,   176,   101,
     180,    97,   177,    -1,   177,    -1,   165,   107,   178,    -1,
     177,    -1,   178,    -1,   180,    91,   178,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    92,    92,    96,    97,    98,   104,   105,   110,   111,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   130,   134,   135,   139,   140,   144,   145,   149,   163,
     164,   165,   171,   172,   179,   189,   194,   199,   204,   209,
     215,   220,   224,   229,   232,   233,   234,   238,   239,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   262,   263,   267,   271,   272,   276,   277,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   306,
     310,   311,   312,   313,   314,   318,   319,   323,   324,   330,
     331,   336,   337,   342,   343,   351,   352,   357,   361,   362,
     366,   367,   371,   372,   377,   378,   379,   383,   384,   385,
     386,   394,   399,   405,   406,   410,   414,   415,   416,   417,
     418,   422,   423,   424,   430,   435,   440,   441,   448,   453,
     454,   458,   459,   460,   461,   465,   469,   473,   478,   479,
     480,   481,   485,   489,   490,   491,   492,   493,   494,   498,
     499,   503,   504,   505,   506,   507,   508,   512,   513,   514,
     518,   519,   523,   525,   528,   529,   530,   535,   536,   540,
     541,   542,   547,   548,   552,   553,   557,   558,   559,   560,
     564,   565,   570,   571,   572,   573,   574,   575,   576,   577,
     578,   579,   580,   581,   582,   583,   584,   585,   589,   590,
     591,   592,   593,   594,   599,   600,   601,   602,   603,   607,
     608,   609,   610,   611,   612,   613,   616,   619,   620,   624,
     625,   628,   631,   643,   644,   645,   649,   650,   654,   655,
     656,   657,   661,   662,   663,   667,   668,   669,   673,   674,
     675,   676,   677,   681,   682,   684,   689,   690,   694,   695,
     699,   700,   703,   704,   708,   709,   713,   714,   718,   719,
     727,   731,   732
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "I_CONSTANT", "F_CONSTANT",
  "STRING_LITERAL", "FUNC_NAME", "SIZEOF", "B_CONSTANT", "BOOL", "CHAR",
  "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "VOID",
  "';'", "'='", "'+'", "'*'", "'-'", "'/'", "'%'", "AND_OP", "'^'",
  "OR_OP", "'|'", "'&'", "EQ_OP", "LE_OP", "'<'", "GE_OP", "'>'", "CASE",
  "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO",
  "CONTINUE", "BREAK", "RETURN", "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP",
  "RIGHT_OP", "NE_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN",
  "XOR_ASSIGN", "OR_ASSIGN", "TYPEDEF_NAME", "ENUMERATION_CONSTANT",
  "TYPEDEF", "EXTERN", "STATIC", "AUTO", "REGISTER", "INLINE", "CONST",
  "RESTRICT", "VOLATILE", "STRUCT", "UNION", "ENUM", "ELLIPSIS", "COMPLEX",
  "IMAGINARY", "ALIGNAS", "ALIGNOF", "ATOMIC", "GENERIC", "NORETURN",
  "STATIC_ASSERT", "THREAD_LOCAL", "'('", "')'", "','", "'{'", "'}'",
  "'['", "']'", "'.'", "':'", "'AS'", "'~'", "'!'", "'?'", "$accept",
  "program", "abstract_declarator", "alignment_specifier",
  "argument_expression_list", "assignment_operator",
  "atomic_type_specifier", "block_item_list", "block_item",
  "compound_statement", "constant", "declaration", "declarator",
  "declaration_specifiers", "declaration_list", "direct_declarator",
  "designation", "designator_list", "designator",
  "direct_abstract_declarator", "enumeration_constant", "enum_specifier",
  "enumerator_list", "enumerator", "external_declaration",
  "expression_statement", "function_definition", "function_specifier",
  "generic_selection", "generic_assoc_list", "generic_association",
  "identifier_list", "initializer", "initializer_list", "init_declarator",
  "init_declarator_list", "iteration_statement", "jump_statement",
  "labeled_statement", "parameter_type_list", "parameter_list",
  "parameter_declaration", "pointer", "selection_statement",
  "specifier_qualifier_list", "static_assert_declaration", "statement",
  "string", "storage_class_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "struct_declarator_list", "struct_declarator", "type_name",
  "translation_unit", "type_qualifier", "type_qualifier_list",
  "type_specifier", "unary_operator", "primary_expression",
  "postfix_expression", "unary_expression", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "constant_expression",
  "expression", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
      59,    61,    43,    42,    45,    47,    37,   275,    94,   276,
     124,    38,   277,   278,    60,   279,    62,   280,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,    40,
      41,    44,   123,   125,    91,    93,    46,    58,    65,   126,
      33,    63
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   102,   103,   104,   104,   104,   105,   105,   106,   106,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   108,   109,   109,   110,   110,   111,   111,   112,   112,
     112,   112,   113,   113,   113,   114,   114,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   116,   116,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   118,   119,   119,   120,   120,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   122,
     123,   123,   123,   123,   123,   124,   124,   125,   125,   126,
     126,   127,   127,   128,   128,   129,   129,   130,   131,   131,
     132,   132,   133,   133,   134,   134,   134,   135,   135,   135,
     135,   136,   136,   137,   137,   138,   139,   139,   139,   139,
     139,   140,   140,   140,   141,   141,   142,   142,   143,   143,
     143,   144,   144,   144,   144,   145,   145,   145,   146,   146,
     146,   146,   147,   148,   148,   148,   148,   148,   148,   149,
     149,   150,   150,   150,   150,   150,   150,   151,   151,   151,
     152,   152,   153,   153,   154,   154,   154,   155,   155,   156,
     156,   156,   157,   157,   158,   158,   159,   159,   159,   159,
     160,   160,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   162,   162,
     162,   162,   162,   162,   163,   163,   163,   163,   163,   164,
     164,   164,   164,   164,   164,   164,   164,   164,   164,   165,
     165,   165,   165,   165,   165,   165,   166,   166,   167,   167,
     167,   167,   168,   168,   168,   169,   169,   169,   170,   170,
     170,   170,   170,   171,   171,   171,   172,   172,   173,   173,
     174,   174,   175,   175,   176,   176,   177,   177,   178,   178,
     179,   180,   180
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     4,     4,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     2,     1,     1,     2,     3,     1,     1,
       1,     1,     2,     3,     1,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     1,     2,     1,     1,     2,     1,
       3,     3,     4,     6,     5,     5,     6,     5,     4,     4,
       4,     3,     4,     2,     1,     2,     3,     2,     3,     2,
       3,     5,     4,     5,     4,     3,     3,     3,     4,     6,
       5,     5,     6,     4,     4,     2,     3,     3,     4,     1,
       4,     5,     5,     6,     2,     1,     3,     3,     1,     1,
       1,     1,     2,     4,     3,     1,     1,     6,     1,     3,
       3,     3,     1,     3,     3,     4,     1,     2,     1,     4,
       3,     3,     1,     1,     3,     5,     3,     2,     2,     2,
       3,     3,     4,     3,     3,     1,     1,     3,     2,     2,
       1,     3,     2,     2,     1,     7,     5,     5,     2,     1,
       2,     1,     7,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     5,     2,
       1,     1,     1,     2,     2,     3,     1,     1,     3,     2,
       3,     1,     2,     1,     1,     2,     1,     1,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       4,     3,     4,     3,     3,     2,     2,     6,     7,     1,
       2,     2,     2,     2,     4,     4,     1,     4,     1,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     5,     1,     3,
       1,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   201,   193,   194,   195,   196,   199,   200,   197,   198,
     192,   207,   161,   162,   163,   165,   166,   105,   186,   187,
     188,   170,   171,     0,   202,   203,     0,   189,   106,     0,
     164,     0,    46,   204,   100,     0,   206,   184,    99,    44,
      34,    38,   205,     0,     2,    42,    40,    94,     0,     0,
       0,     0,     1,    45,    49,    32,   144,     0,   122,    36,
     123,     0,     0,    43,    37,   169,     0,   185,    41,    39,
       0,    89,    98,     0,    95,   214,    28,    29,   159,   160,
       0,    30,   210,   209,   211,   208,     0,     0,    31,     0,
       0,     0,   212,   213,   215,   218,   183,   216,     0,   151,
     149,     0,   219,   229,   236,   238,   242,   245,   248,   253,
     256,   258,   260,   262,   264,   266,   270,     0,     0,     0,
     189,   143,   190,   142,     0,     0,     0,   104,    47,     0,
       0,     0,     0,    33,     0,    35,     0,     0,   176,     0,
     172,     0,     0,     0,    90,     0,   233,     0,   230,   231,
       0,     0,     0,   236,   268,   271,     0,     0,     0,   182,
       5,     4,     6,   150,   148,   232,     0,   225,   226,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     7,    21,     0,   141,   191,    50,     0,   121,   116,
     214,   101,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,     0,    22,   154,    24,   155,   157,   158,   153,
     156,    25,     0,   122,   103,    48,   112,    61,   140,     0,
       0,   135,   136,   209,     0,    51,     0,     0,   124,     0,
     174,     0,   181,     0,   177,   167,   173,     0,    92,    97,
      91,    96,     0,     0,     0,     0,     0,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,     0,   217,
       0,    85,     0,     0,   209,     0,    69,     0,     0,     0,
       0,     3,   224,   221,     0,     8,     0,   223,   239,   240,
     241,   243,   244,   246,   247,   251,   249,   252,   250,   254,
     255,   257,   259,   261,   263,   265,     0,     0,     0,     0,
       0,     0,    64,   118,     0,     0,     0,     0,     0,     0,
       0,     0,   127,   128,   129,     0,    27,    23,   102,     0,
       0,   139,   138,     4,    62,    60,     0,    52,     0,     0,
     209,     0,    58,     0,    59,   168,   179,     0,   175,     0,
      93,   234,     0,   235,     0,     0,   237,   269,   272,    68,
      86,    70,     0,     0,     0,    75,     0,    76,    87,     0,
     209,     0,    77,     0,     0,   222,     0,   220,     0,     0,
       0,    67,   117,    63,    65,     0,   114,   131,     0,   133,
       0,     0,     0,   126,   130,   113,   134,   137,     0,    54,
      55,     0,    57,   180,   178,     0,     0,   108,     0,     0,
       0,    72,     0,    74,    88,    78,     0,     0,     0,    83,
       0,    84,     9,   267,   152,    66,   115,     0,   120,   132,
       0,     0,     0,    53,    56,     0,   107,     0,     0,     0,
     227,    71,    73,     0,    80,     0,    81,   119,   146,     0,
     147,   125,   111,   109,   110,   228,    79,    82,     0,   145
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    31,   272,    32,   284,   268,    33,   212,   213,   214,
      94,    34,   124,   228,   130,    59,   310,   311,   312,   160,
      72,    36,    73,    74,    37,   216,    38,    39,    95,   406,
     407,   229,   313,   314,    60,    61,   217,   218,   219,   273,
     231,   232,    62,   220,    96,    40,   221,    97,    41,    42,
      43,   139,   140,   243,   244,   408,    44,    45,   123,    46,
     101,   102,   103,   153,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   154,   155,   117,   222
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -355
static const yytype_int16 yypact[] =
{
    1956,  -355,  -355,  -355,  -355,  -355,  -355,  -355,  -355,  -355,
    -355,  -355,  -355,  -355,  -355,  -355,  -355,  -355,  -355,  -355,
    -355,  -355,  -355,    21,  -355,  -355,   -59,   -27,  -355,   -24,
    -355,    27,  2057,  -355,  -355,   198,  -355,  -355,  -355,  2057,
    -355,  2057,  -355,    36,  1956,  2057,  2057,   -52,    74,   601,
    2167,  1452,  -355,  -355,  -355,  -355,   207,   186,  1823,   -53,
    -355,   148,    15,  -355,  -355,   -10,  2075,  -355,  -355,  -355,
      74,  -355,   158,   -23,  -355,  -355,  -355,  -355,  -355,  -355,
    1488,  -355,  -355,  -355,  -355,  -355,  1524,  1524,  -355,    83,
      97,   601,  -355,  -355,  -355,  -355,   133,  -355,   114,  2167,
    2167,  1452,  -355,   199,  -355,  -355,    63,   193,   185,   243,
      -7,   183,   192,   178,   197,   159,  -355,   143,   157,   195,
    -355,  -355,  -355,   207,   204,  1277,   405,  -355,  -355,   198,
    1849,  1615,   739,  -355,   186,   -53,  2075,   154,  -355,  1718,
    -355,   132,  1452,    30,  -355,   601,  -355,   601,  -355,  -355,
    2167,  1452,   206,   285,  -355,  -355,   177,  1696,   794,  -355,
     -37,   -33,  -355,  -355,  -355,  -355,   226,  -355,  -355,  1328,
    1452,   238,  1452,  1452,  1452,  1452,  1452,  1452,  1452,  1452,
    1452,  1452,  1452,  1452,  1452,  1452,  1452,  1452,  1452,  1452,
    1452,  -355,  -355,   239,  -355,  -355,  -355,  1226,  -355,  -355,
     201,  -355,  1452,   213,  1452,   214,  1452,   304,   292,   301,
    1379,  -355,   503,  -355,  -355,  -355,  -355,  -355,  -355,  -355,
    -355,  -355,   151,   302,  -355,  -355,   228,  -355,   146,   241,
     246,   247,  -355,   242,  1069,  -355,   849,   255,  -355,  1739,
    -355,  1452,   254,   162,  -355,  -355,  -355,    57,  -355,  -355,
    -355,  -355,   262,   263,   264,   265,  1416,  -355,  -355,  -355,
    -355,  -355,  -355,  -355,  -355,  -355,  -355,  -355,  1452,  -355,
    1452,  -355,   267,   268,   260,  1069,  -355,   904,   266,  1932,
     959,   -37,  -355,  -355,   180,  -355,   -32,  -355,  -355,  -355,
    -355,    63,    63,   193,   193,   185,   185,   185,   185,   243,
     243,    -7,   183,   192,   178,   197,   -62,   269,  1452,   359,
    1277,    -1,  -355,  -355,   141,   688,   271,   688,    61,  1452,
      64,   344,  -355,  -355,  -355,   172,  -355,  -355,  -355,   362,
    1581,  -355,  -355,    25,  -355,  -355,  2035,  -355,  1069,   274,
     275,  1452,  -355,   276,  -355,  -355,  -355,  1452,  -355,   155,
    -355,   280,   280,  -355,  2153,  1226,  -355,  -355,  -355,  -355,
    -355,  -355,  1069,   278,  1452,  -355,   279,  -355,  -355,   286,
     283,  1069,  -355,  1014,   284,  -355,  1452,  -355,  1452,   346,
     287,  -355,  -355,  -355,  -355,  1124,  -355,  -355,   688,  -355,
     688,   194,   688,  -355,  -355,  -355,  -355,  -355,   288,  -355,
    -355,   290,  -355,  -355,  -355,   293,   210,  -355,   294,   173,
     299,  -355,   305,  -355,  -355,  -355,  1069,   306,  1452,  -355,
     307,  -355,  -355,  -355,  -355,  -355,  -355,  1277,  -355,  -355,
      29,   688,   372,  -355,  -355,  1452,  -355,  2153,  1452,  1175,
    -355,  -355,  -355,   308,  -355,   309,  -355,  -355,  -355,   688,
    -355,  -355,  -355,  -355,  -355,  -355,  -355,  -355,   377,  -355
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -355,  -355,   -80,  -355,  -355,  -355,  -355,  -355,   169,   125,
    -355,    -5,   -22,    34,  -355,   -60,  -354,  -355,    76,  -158,
    -355,  -355,   319,  -120,   352,  -355,  -355,  -355,  -355,  -355,
     -40,    70,  -111,    50,   272,  -355,  -355,  -355,  -355,  -112,
    -355,    90,   -47,  -355,   -28,   -55,  -195,  -355,  -355,  -355,
    -355,   295,  -113,  -355,    81,   112,  -355,   -49,  -110,   -45,
    -355,  -355,  -355,   -43,   -56,   139,   152,   138,   150,   248,
     249,   245,   251,   252,  -355,   -39,    22,   -36,     6
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      99,    99,   135,   281,   100,   100,   104,   122,   104,   121,
     116,   138,   116,    58,   198,   119,   159,    99,    54,   230,
     383,   100,   236,   251,    47,   183,   246,    52,    54,   270,
      49,   427,   448,    71,    35,   378,   131,   146,   137,    65,
      70,   132,    99,   148,   149,   165,   100,   184,   277,   161,
      99,    99,   279,   128,   100,   100,   157,   280,   104,   270,
      71,   158,    50,   377,   390,    51,    53,   392,   143,   449,
     144,   163,   164,    63,   195,    64,   194,    71,    35,    68,
      69,   138,   136,   122,   138,   427,   172,    99,   173,   174,
      99,   100,   129,   308,   100,   309,    99,   156,    99,   104,
     100,    99,   100,   116,    57,   100,   249,   223,   137,   122,
     161,   137,   223,    48,   330,   242,   288,   289,   290,   158,
     387,   215,   389,   250,   338,   225,   246,   251,    66,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   199,   331,    54,
     350,   156,   270,   156,   237,   270,    56,    54,    54,   104,
     129,    98,   118,   116,   129,   362,   316,   369,   133,    56,
     373,   328,   150,   255,   240,   281,   286,    56,    56,   142,
     278,   333,   348,   127,   138,   122,   151,   195,   189,    54,
      99,   285,   394,   429,   100,   430,   306,   432,   104,   382,
     356,    54,   116,   152,   162,   346,   332,   215,   187,    56,
     318,   137,   320,   104,   185,   175,   325,   176,    55,   199,
     186,    56,   157,   247,   188,   248,   122,   158,   195,   282,
      56,   122,   385,   191,   386,   330,   450,   177,   178,   134,
     158,   287,   270,    57,    57,   307,   129,   192,   166,   167,
     168,   241,   241,   349,   458,   224,   339,   252,   343,   253,
     190,   416,   254,   270,   439,   104,   440,   269,   270,   116,
     375,   376,   380,   135,   428,    57,   179,   180,   181,   182,
      18,    19,    20,   333,   431,   270,   193,    57,   169,   195,
     357,   120,   358,   170,   196,   171,   256,   363,   315,   366,
     436,   437,   374,   319,   104,    99,   257,   321,   116,   100,
     317,   403,   322,   195,   291,   292,   447,   295,   296,   297,
     298,   323,   122,   125,   195,   391,   329,   242,   428,   293,
     294,   334,   199,   299,   300,   104,   335,   337,   336,   423,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     344,   347,   351,   352,   353,   361,   354,   359,   360,   379,
     398,   367,   381,   401,   393,   226,   424,   195,   388,   399,
     400,   402,   355,   411,   413,   451,   414,   199,   415,   421,
     459,   327,   425,   433,   410,   434,   412,   384,    99,   141,
     435,   438,   100,   417,   441,   420,    67,   453,   422,   395,
     442,   444,   446,   456,   457,   409,   238,   199,   200,    76,
      77,    78,    79,    80,    81,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,   201,   397,    82,    83,    84,
     404,   239,   303,   301,     0,   302,    85,     0,   443,   304,
     445,   305,   202,   203,   204,     0,   205,   206,     0,   199,
     207,   208,   209,   210,     0,    86,    87,   452,     0,     0,
     454,   199,     0,     0,     0,     0,     0,     0,     0,     0,
      11,    88,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,    24,    25,    26,    89,    27,
      90,    28,    29,    30,    91,     0,     0,   126,   211,     0,
       0,     0,     0,     0,    92,    93,   200,    76,    77,    78,
      79,    80,    81,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,   201,     0,    82,    83,    84,     0,     0,
       0,     0,     0,     0,    85,     0,     0,     0,     0,     0,
     202,   203,   204,     0,   205,   206,     0,     0,   207,   208,
     209,   210,     0,    86,    87,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    88,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,    25,    26,    89,    27,    90,    28,
      29,    30,    91,     0,     0,   126,   326,     0,     0,     0,
       0,     0,    92,    93,    75,    76,    77,    78,    79,    80,
      81,     1,     2,     3,     4,     5,     6,     7,     8,     9,
      10,     0,     0,    82,    83,    84,     0,     0,     0,     0,
       0,     0,    85,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    86,    87,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,    88,     0,     0,
       0,     0,     0,     0,    18,    19,    20,    21,    22,    23,
       0,    24,    25,     0,    89,    27,    90,     0,     0,     0,
      91,   200,    76,    77,    78,    79,    80,    81,     0,     0,
      92,    93,     0,     0,     0,     0,     0,     0,   201,     0,
      82,    83,    84,     0,     0,     0,     0,     0,     0,    85,
       0,     0,     0,     0,     0,   202,   203,   204,     0,   205,
     206,     0,     0,   207,   208,   209,   210,     0,    86,    87,
       0,     0,    75,    76,    77,    78,    79,    80,    81,     0,
       0,     0,     0,     0,    88,     0,     0,     0,     0,     0,
       0,    82,   233,    84,     0,     0,     0,     0,     0,     0,
      85,    89,     0,    90,     0,     0,     0,    91,     0,     0,
     126,     0,     0,     0,     0,     0,     0,    92,    93,    86,
      87,     0,     0,     0,     0,     0,     0,    75,    76,    77,
      78,    79,    80,    81,     0,    88,     0,     0,   234,     0,
       0,     0,    18,    19,    20,     0,    82,   274,    84,     0,
       0,     0,    89,   120,    90,    85,     0,     0,    91,     0,
       0,     0,     0,     0,   235,     0,     0,     0,    92,    93,
       0,     0,     0,     0,    86,    87,     0,     0,     0,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    81,     0,
      88,     0,     0,   275,     0,     0,     0,    18,    19,    20,
       0,    82,   340,    84,     0,     0,     0,    89,   120,    90,
      85,     0,     0,    91,     0,     0,     0,     0,     0,   276,
       0,     0,     0,    92,    93,     0,     0,     0,     0,    86,
      87,     0,     0,     0,     0,     0,     0,    75,    76,    77,
      78,    79,    80,    81,     0,    88,     0,     0,   341,     0,
       0,     0,    18,    19,    20,     0,    82,    83,    84,     0,
       0,     0,    89,   120,    90,    85,     0,     0,    91,     0,
       0,     0,     0,     0,   342,     0,     0,     0,    92,    93,
       0,     0,     0,     0,    86,    87,     0,     0,     0,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    81,     0,
      88,     0,     0,   364,     0,     0,     0,    18,    19,    20,
       0,    82,   370,    84,     0,     0,     0,    89,   120,    90,
      85,     0,     0,    91,     0,     0,     0,     0,     0,   365,
       0,     0,     0,    92,    93,     0,     0,     0,     0,    86,
      87,     0,     0,     0,     0,     0,     0,    75,    76,    77,
      78,    79,    80,    81,     0,    88,     0,     0,   371,     0,
       0,     0,    18,    19,    20,     0,    82,    83,    84,     0,
       0,     0,    89,   120,    90,    85,     0,     0,    91,     0,
       0,     0,     0,     0,   372,     0,     0,     0,    92,    93,
       0,     0,     0,     0,    86,    87,     0,     0,     0,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    81,     0,
      88,     0,     0,   418,     0,     0,     0,    18,    19,    20,
       0,    82,    83,    84,     0,     0,     0,    89,   120,    90,
      85,     0,     0,    91,     0,     0,     0,     0,     0,   419,
       0,     0,     0,    92,    93,     0,     0,     0,     0,    86,
      87,     0,     0,     0,     0,     0,     0,    75,    76,    77,
      78,    79,    80,    81,     0,    88,     0,     0,     0,     0,
       0,     0,    18,    19,    20,     0,    82,    83,    84,     0,
       0,     0,    89,   120,    90,    85,     0,     0,    91,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    92,    93,
       0,     0,     0,     0,    86,    87,     0,     0,    75,    76,
      77,    78,    79,    80,    81,     0,     0,     0,     0,     0,
      88,     0,     0,     0,     0,     0,     0,    82,    83,    84,
       0,     0,     0,     0,     0,     0,    85,    89,     0,    90,
       0,     0,     0,    91,     0,     0,   197,   426,   308,     0,
     309,     0,     0,    92,    93,    86,    87,     0,     0,    75,
      76,    77,    78,    79,    80,    81,     0,     0,     0,     0,
       0,    88,     0,     0,     0,     0,     0,     0,    82,    83,
      84,     0,     0,     0,     0,     0,     0,    85,    89,     0,
      90,     0,     0,     0,    91,     0,     0,   197,   455,   308,
       0,   309,     0,     0,    92,    93,    86,    87,     0,     0,
      75,    76,    77,    78,    79,    80,    81,     0,     0,     0,
       0,     0,    88,     0,     0,     0,     0,     0,     0,    82,
      83,    84,     0,     0,     0,     0,     0,     0,    85,    89,
       0,    90,     0,     0,     0,    91,     0,     0,   197,     0,
     308,     0,   309,     0,     0,    92,    93,    86,    87,     0,
       0,    75,    76,    77,    78,    79,    80,    81,     0,     0,
       0,     0,     0,    88,     0,     0,     0,     0,     0,     0,
      82,    83,    84,     0,     0,     0,     0,     0,     0,    85,
      89,     0,    90,     0,     0,     0,    91,     0,     0,   197,
       0,     0,     0,     0,     0,     0,    92,    93,    86,    87,
       0,     0,    75,    76,    77,    78,    79,    80,    81,     0,
       0,     0,     0,     0,    88,     0,     0,     0,     0,   324,
       0,    82,    83,    84,     0,     0,     0,     0,     0,     0,
      85,    89,     0,    90,     0,     0,     0,    91,   283,    75,
      76,    77,    78,    79,    80,    81,     0,    92,    93,    86,
      87,     0,     0,     0,     0,     0,     0,     0,    82,    83,
      84,     0,     0,     0,     0,    88,     0,    85,     0,     0,
       0,     0,     0,     0,     0,    75,    76,    77,    78,    79,
      80,    81,    89,     0,    90,     0,    86,    87,    91,     0,
       0,     0,     0,     0,    82,    83,    84,     0,    92,    93,
       0,     0,    88,    85,     0,     0,     0,     0,     0,     0,
       0,    75,    76,    77,    78,    79,    80,    81,     0,    89,
       0,    90,    86,    87,     0,    91,     0,     0,   355,     0,
      82,    83,    84,     0,     0,    92,    93,     0,    88,    85,
       0,     0,     0,     0,     0,     0,     0,    75,    76,    77,
      78,    79,    80,    81,     0,    89,     0,    90,    86,    87,
       0,    91,     0,     0,     0,     0,    82,    83,    84,     0,
       0,    92,    93,     0,    88,    85,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    89,     0,    90,    86,    87,     0,   145,     0,     0,
       0,     0,     0,     0,    54,     0,     0,    92,    93,     0,
      88,     1,     2,     3,     4,     5,     6,     7,     8,     9,
      10,     0,     0,     0,    56,     0,     0,    89,     0,    90,
       0,     0,     0,   147,     0,     0,     0,     0,   226,     0,
       0,     0,     0,    92,    93,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,     0,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       0,    24,    25,    26,     0,    27,     0,    28,     0,    30,
     330,   271,     0,     0,     0,   158,     0,     0,     0,     0,
      11,     0,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,    24,    25,    26,     0,    27,
       0,    28,     0,    30,     0,   227,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,     0,     0,     0,    56,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       2,     3,     4,     5,     6,     7,     8,     9,    10,     0,
       0,    11,     0,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,    26,     0,
      27,     0,    28,    11,    30,   157,   271,     0,     0,     0,
     158,    18,    19,    20,    21,    22,    23,     0,    24,    25,
       0,     0,    27,     0,    11,    29,     0,     0,     0,     0,
       0,   245,    18,    19,    20,    21,    22,    23,     0,    24,
      25,     0,     0,    27,     0,     0,    29,     0,     0,     0,
       0,     0,   345,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,     0,   125,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       2,     3,     4,     5,     6,     7,     8,     9,    10,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,     0,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,    25,    26,     0,    27,     0,    28,
      29,    30,     0,     0,    11,   126,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
      25,    26,     0,    27,     0,    28,    29,    30,     0,     0,
       0,   126,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,     0,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    24,    25,    26,     0,    27,     0,    28,     0,
      30,    11,   368,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,    26,     0,
      27,     0,    28,    29,    30,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,     0,     0,     0,     0,     0,
      11,     0,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,   396,    24,    25,    26,     0,    27,
       0,    28,    11,    30,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,    25,    26,
      11,    27,     0,    28,     0,    30,     0,     0,    18,    19,
      20,    21,    22,    23,     0,    24,    25,     0,     0,    27,
       0,     0,    29,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,     0,     0,     0,     0,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,     0,     0,     0,
       0,   405,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,     0,
       0,     0,     0,     0,     0,     0,    18,    19,    20,    21,
      22,    23,    11,    24,    25,     0,     0,    27,     0,     0,
      18,    19,    20,    21,    22,    23,     0,    24,    25,     0,
       0,    27
};

static const yytype_int16 yycheck[] =
{
      49,    50,    62,   161,    49,    50,    49,    56,    51,    56,
      49,    66,    51,    35,   125,    51,    96,    66,     3,   131,
      21,    66,   132,   143,     3,    32,   139,     0,     3,    91,
      89,   385,     3,     3,     0,    97,    89,    80,    66,     3,
      92,    94,    91,    86,    87,   101,    91,    54,   158,    96,
      99,   100,    89,    58,    99,   100,    89,    94,   101,    91,
       3,    94,    89,    95,     3,    89,    32,     3,    91,    40,
      93,    99,   100,    39,   123,    41,   123,     3,    44,    45,
      46,   136,    92,   132,   139,   439,    23,   136,    25,    26,
     139,   136,    58,    94,   139,    96,   145,    91,   147,   142,
     145,   150,   147,   142,    89,   150,   142,   129,   136,   158,
     157,   139,   134,    92,    89,   137,   172,   173,   174,    94,
     315,   126,   317,    93,   234,   130,   239,   247,    92,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   125,   228,     3,
      93,   145,    91,   147,   132,    91,    23,     3,     3,   202,
     126,    49,    50,   202,   130,   275,   202,   279,    20,    23,
     280,    20,    89,   151,    20,   333,   170,    23,    23,    21,
     158,   228,    20,    58,   239,   234,    89,   236,    29,     3,
     239,   169,    20,   388,   239,   390,   190,   392,   241,   310,
     256,     3,   241,    91,    90,   241,   228,   212,    30,    23,
     204,   239,   206,   256,    31,    22,   210,    24,    20,   197,
      28,    23,    89,    91,    27,    93,   275,    94,   277,     3,
      23,   280,    91,    90,    93,    89,   431,    52,    53,    91,
      94,     3,    91,    89,    89,     6,   212,    90,    49,    50,
      51,    97,    97,    91,   449,   130,   234,   145,   236,   147,
     101,   371,   150,    91,    91,   308,    93,    90,    91,   308,
      90,    91,   308,   333,   385,    89,    33,    34,    35,    36,
      73,    74,    75,   330,    90,    91,    91,    89,    89,   338,
     268,    84,   270,    94,    90,    96,    90,   275,    97,   277,
      90,    91,   280,    89,   347,   354,    21,     3,   347,   354,
      97,   347,    20,   362,   175,   176,   427,   179,   180,   181,
     182,    20,   371,    21,   373,   319,    98,   349,   439,   177,
     178,    90,   310,   183,   184,   378,    90,    95,    91,   378,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      95,    97,    90,    90,    90,    95,    91,    90,    90,    90,
     338,    95,     3,   341,    20,     3,    20,   416,    97,    95,
      95,    95,    92,    95,    95,     3,    90,   355,    95,    95,
       3,   212,    95,    95,   362,    95,   364,   311,   437,    70,
      97,    97,   437,   371,    95,   373,    44,   437,   376,   329,
      95,    95,    95,    95,    95,   355,   134,   385,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,   336,    22,    23,    24,
     349,   136,   187,   185,    -1,   186,    31,    -1,   416,   188,
     418,   189,    37,    38,    39,    -1,    41,    42,    -1,   427,
      45,    46,    47,    48,    -1,    50,    51,   435,    -1,    -1,
     438,   439,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    -1,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    -1,    -1,    92,    93,    -1,
      -1,    -1,    -1,    -1,    99,   100,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    22,    23,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    38,    39,    -1,    41,    42,    -1,    -1,    45,    46,
      47,    48,    -1,    50,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    -1,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    -1,    -1,    92,    93,    -1,    -1,    -1,
      -1,    -1,    99,   100,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    22,    23,    24,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    66,    -1,    -1,
      -1,    -1,    -1,    -1,    73,    74,    75,    76,    77,    78,
      -1,    80,    81,    -1,    83,    84,    85,    -1,    -1,    -1,
      89,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      99,   100,    -1,    -1,    -1,    -1,    -1,    -1,    20,    -1,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    38,    39,    -1,    41,
      42,    -1,    -1,    45,    46,    47,    48,    -1,    50,    51,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    83,    -1,    85,    -1,    -1,    -1,    89,    -1,    -1,
      92,    -1,    -1,    -1,    -1,    -1,    -1,    99,   100,    50,
      51,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    66,    -1,    -1,    69,    -1,
      -1,    -1,    73,    74,    75,    -1,    22,    23,    24,    -1,
      -1,    -1,    83,    84,    85,    31,    -1,    -1,    89,    -1,
      -1,    -1,    -1,    -1,    95,    -1,    -1,    -1,    99,   100,
      -1,    -1,    -1,    -1,    50,    51,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      66,    -1,    -1,    69,    -1,    -1,    -1,    73,    74,    75,
      -1,    22,    23,    24,    -1,    -1,    -1,    83,    84,    85,
      31,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,    95,
      -1,    -1,    -1,    99,   100,    -1,    -1,    -1,    -1,    50,
      51,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    66,    -1,    -1,    69,    -1,
      -1,    -1,    73,    74,    75,    -1,    22,    23,    24,    -1,
      -1,    -1,    83,    84,    85,    31,    -1,    -1,    89,    -1,
      -1,    -1,    -1,    -1,    95,    -1,    -1,    -1,    99,   100,
      -1,    -1,    -1,    -1,    50,    51,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      66,    -1,    -1,    69,    -1,    -1,    -1,    73,    74,    75,
      -1,    22,    23,    24,    -1,    -1,    -1,    83,    84,    85,
      31,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,    95,
      -1,    -1,    -1,    99,   100,    -1,    -1,    -1,    -1,    50,
      51,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    66,    -1,    -1,    69,    -1,
      -1,    -1,    73,    74,    75,    -1,    22,    23,    24,    -1,
      -1,    -1,    83,    84,    85,    31,    -1,    -1,    89,    -1,
      -1,    -1,    -1,    -1,    95,    -1,    -1,    -1,    99,   100,
      -1,    -1,    -1,    -1,    50,    51,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      66,    -1,    -1,    69,    -1,    -1,    -1,    73,    74,    75,
      -1,    22,    23,    24,    -1,    -1,    -1,    83,    84,    85,
      31,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,    95,
      -1,    -1,    -1,    99,   100,    -1,    -1,    -1,    -1,    50,
      51,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    66,    -1,    -1,    -1,    -1,
      -1,    -1,    73,    74,    75,    -1,    22,    23,    24,    -1,
      -1,    -1,    83,    84,    85,    31,    -1,    -1,    89,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,   100,
      -1,    -1,    -1,    -1,    50,    51,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    83,    -1,    85,
      -1,    -1,    -1,    89,    -1,    -1,    92,    93,    94,    -1,
      96,    -1,    -1,    99,   100,    50,    51,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    31,    83,    -1,
      85,    -1,    -1,    -1,    89,    -1,    -1,    92,    93,    94,
      -1,    96,    -1,    -1,    99,   100,    50,    51,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    31,    83,
      -1,    85,    -1,    -1,    -1,    89,    -1,    -1,    92,    -1,
      94,    -1,    96,    -1,    -1,    99,   100,    50,    51,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      83,    -1,    85,    -1,    -1,    -1,    89,    -1,    -1,    92,
      -1,    -1,    -1,    -1,    -1,    -1,    99,   100,    50,    51,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,    -1,    20,
      -1,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    83,    -1,    85,    -1,    -1,    -1,    89,    90,     3,
       4,     5,     6,     7,     8,     9,    -1,    99,   100,    50,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    -1,    -1,    -1,    -1,    66,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    83,    -1,    85,    -1,    50,    51,    89,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    -1,    99,   100,
      -1,    -1,    66,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    83,
      -1,    85,    50,    51,    -1,    89,    -1,    -1,    92,    -1,
      22,    23,    24,    -1,    -1,    99,   100,    -1,    66,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    83,    -1,    85,    50,    51,
      -1,    89,    -1,    -1,    -1,    -1,    22,    23,    24,    -1,
      -1,    99,   100,    -1,    66,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    85,    50,    51,    -1,    89,    -1,    -1,
      -1,    -1,    -1,    -1,     3,    -1,    -1,    99,   100,    -1,
      66,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    -1,    -1,    -1,    23,    -1,    -1,    83,    -1,    85,
      -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,     3,    -1,
      -1,    -1,    -1,    99,   100,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      -1,    80,    81,    82,    -1,    84,    -1,    86,    -1,    88,
      89,    90,    -1,    -1,    -1,    94,    -1,    -1,    -1,    -1,
      65,    -1,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    -1,    80,    81,    82,    -1,    84,
      -1,    86,    -1,    88,    -1,    90,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    65,    -1,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    -1,    80,    81,    82,    -1,
      84,    -1,    86,    65,    88,    89,    90,    -1,    -1,    -1,
      94,    73,    74,    75,    76,    77,    78,    -1,    80,    81,
      -1,    -1,    84,    -1,    65,    87,    -1,    -1,    -1,    -1,
      -1,    93,    73,    74,    75,    76,    77,    78,    -1,    80,
      81,    -1,    -1,    84,    -1,    -1,    87,    -1,    -1,    -1,
      -1,    -1,    93,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    -1,    80,    81,    82,    -1,    84,    -1,    86,
      87,    88,    -1,    -1,    65,    92,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    -1,    80,
      81,    82,    -1,    84,    -1,    86,    87,    88,    -1,    -1,
      -1,    92,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    -1,    80,    81,    82,    -1,    84,    -1,    86,    -1,
      88,    65,    90,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    -1,    80,    81,    82,    -1,
      84,    -1,    86,    87,    88,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,    -1,
      65,    -1,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    -1,    84,
      -1,    86,    65,    88,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    -1,    80,    81,    82,
      65,    84,    -1,    86,    -1,    88,    -1,    -1,    73,    74,
      75,    76,    77,    78,    -1,    80,    81,    -1,    -1,    84,
      -1,    -1,    87,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,
      77,    78,    65,    80,    81,    -1,    -1,    84,    -1,    -1,
      73,    74,    75,    76,    77,    78,    -1,    80,    81,    -1,
      -1,    84
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    65,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    80,    81,    82,    84,    86,    87,
      88,   103,   105,   108,   113,   115,   123,   126,   128,   129,
     147,   150,   151,   152,   158,   159,   161,     3,    92,    89,
      89,    89,     0,   115,     3,    20,    23,    89,   114,   117,
     136,   137,   144,   115,   115,     3,    92,   126,   115,   115,
      92,     3,   122,   124,   125,     3,     4,     5,     6,     7,
       8,     9,    22,    23,    24,    31,    50,    51,    66,    83,
      85,    89,    99,   100,   112,   130,   146,   149,   157,   159,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   179,   157,   179,
      84,   144,   159,   160,   114,    21,    92,   111,   113,   115,
     116,    89,    94,    20,    91,   117,    92,   146,   147,   153,
     154,   124,    21,    91,    93,    89,   165,    89,   165,   165,
      89,    89,   157,   165,   177,   178,   180,    89,    94,   104,
     121,   144,    90,   146,   146,   166,    49,    50,    51,    89,
      94,    96,    23,    25,    26,    22,    24,    52,    53,    33,
      34,    35,    36,    32,    54,    31,    28,    30,    27,    29,
     101,    90,    90,    91,   144,   159,    90,    92,   134,   178,
       3,    20,    37,    38,    39,    41,    42,    45,    46,    47,
      48,    93,   109,   110,   111,   113,   127,   138,   139,   140,
     145,   148,   180,   114,   111,   113,     3,    90,   115,   133,
     141,   142,   143,    23,    69,    95,   160,   178,   136,   153,
      20,    97,   114,   155,   156,    93,   154,    91,    93,   179,
      93,   125,   157,   157,   157,   178,    90,    21,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,   107,    90,
      91,    90,   104,   141,    23,    69,    95,   160,   178,    89,
      94,   121,     3,    90,   106,   178,   180,     3,   166,   166,
     166,   167,   167,   168,   168,   169,   169,   169,   169,   170,
     170,   171,   172,   173,   174,   175,   180,     6,    94,    96,
     118,   119,   120,   134,   135,    97,   179,    97,   180,    89,
     180,     3,    20,    20,    20,   180,    93,   110,    20,    98,
      89,   104,   114,   144,    90,    90,    91,    95,   160,   178,
      23,    69,    95,   178,    95,    93,   179,    97,    20,    91,
      93,    90,    90,    90,    91,    92,   166,   178,   178,    90,
      90,    95,   160,   178,    69,    95,   178,    95,    90,   141,
      23,    69,    95,   160,   178,    90,    91,    95,    97,    90,
     179,     3,   134,    21,   120,    91,    93,   148,    97,   148,
       3,   180,     3,    20,    20,   133,    79,   143,   178,    95,
      95,   178,    95,   179,   156,    38,   131,   132,   157,   135,
     178,    95,   178,    95,    90,    95,   160,   178,    69,    95,
     178,    95,   178,   177,    20,    95,    93,   118,   134,   148,
     148,    90,   148,    95,    95,    97,    90,    91,    97,    91,
      93,    95,    95,   178,    95,   178,    95,   134,     3,    40,
     148,     3,   178,   132,   178,    93,    95,    95,   148,     3
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
        case 2:
#line 92 "c.y"
    { programBlock = (yyvsp[(1) - (1)].block); ;}
    break;

  case 3:
#line 96 "c.y"
    {;}
    break;

  case 4:
#line 97 "c.y"
    {;}
    break;

  case 5:
#line 98 "c.y"
    {;}
    break;

  case 6:
#line 104 "c.y"
    {;}
    break;

  case 7:
#line 105 "c.y"
    {;}
    break;

  case 8:
#line 110 "c.y"
    { (yyval.exprvec) = new ExpressionList(); (yyval.exprvec)->push_back((yyvsp[(1) - (1)].expr));;}
    break;

  case 9:
#line 111 "c.y"
    { (yyvsp[(1) - (3)].exprvec)->push_back((yyvsp[(3) - (3)].expr));;}
    break;

  case 22:
#line 134 "c.y"
    { (yyval.block) = new BlockNode(); (yyval.block)->statements.push_back((yyvsp[(1) - (1)].stmt)); ;}
    break;

  case 23:
#line 135 "c.y"
    { (yyvsp[(1) - (2)].block)->statements.push_back((yyvsp[(2) - (2)].stmt)); ;}
    break;

  case 24:
#line 139 "c.y"
    {;}
    break;

  case 25:
#line 140 "c.y"
    {;}
    break;

  case 26:
#line 144 "c.y"
    { (yyval.block) = new BlockNode(); ;}
    break;

  case 27:
#line 145 "c.y"
    { (yyval.block)  = (yyvsp[(2) - (3)].block); ;}
    break;

  case 28:
#line 149 "c.y"
    {
		if(isdigit( ((yyvsp[(1) - (1)].string)->c_str())[0] )){
			long val = atol((yyvsp[(1) - (1)].string)->c_str());
			if(val > 2147483647){
				(yyval.expr) = new LongNode(val);
			}else{
		 		(yyval.expr) = new IntNode(atoi((yyvsp[(1) - (1)].string)->c_str()));
	 		}
		  delete (yyvsp[(1) - (1)].string);
		}else{
			(yyval.expr) = new CharNode(((yyvsp[(1) - (1)].string)->c_str())[1]);
		}
			cout<<"Detected as I__CONSTANT\n";
	 ;}
    break;

  case 29:
#line 163 "c.y"
    { (yyval.expr) = new DoubleNode(atof((yyvsp[(1) - (1)].string)->c_str())); delete (yyvsp[(1) - (1)].string);cout<<"Detected as IF__CONSTANT\n";  ;}
    break;

  case 30:
#line 164 "c.y"
    { (yyval.expr) = new BoolNode(*(yyvsp[(1) - (1)].string)); delete (yyvsp[(1) - (1)].string);cout<<"Detected as B__CONSTANT\n" ; ;}
    break;

  case 32:
#line 171 "c.y"
    {;}
    break;

  case 33:
#line 172 "c.y"
    {

		 if((new CHK_TYPE())->isFunc(*(yyvsp[(2) - (3)].var_init)))
		 	(yyval.stmt) = new FunctionDeclarationNode(*(yyvsp[(1) - (3)].var_stor), *(yyvsp[(2) - (3)].var_init));
			else
			(yyval.stmt) = new VariableDeclaration(*(yyvsp[(1) - (3)].var_stor), *(yyvsp[(2) - (3)].var_init));
	 ;}
    break;

  case 35:
#line 189 "c.y"
    {

		(yyvsp[(2) - (2)].common_dec)->setIsPtr(true);
		(yyval.expr) = (yyvsp[(2) - (2)].common_dec);
	;}
    break;

  case 36:
#line 194 "c.y"
    { ;}
    break;

  case 37:
#line 199 "c.y"
    {
		cout<<"----dec_spec 1\n";
		(yyval.var_stor) = new QualStorageTypeNode(NULL, (yyvsp[(1) - (2)].ident), (yyvsp[(2) - (2)].var_stor));

	;}
    break;

  case 38:
#line 204 "c.y"
    {
cout<<"----dec_spec 2\n";
		(yyval.var_stor) = new QualStorageTypeNode();
		(yyval.var_stor)->setStorage((yyvsp[(1) - (1)].ident));
	;}
    break;

  case 39:
#line 209 "c.y"
    {
cout<<"----dec_spec 3\n";
		/* $$ = new QualStorageTypeNode($<var_stor>2); */
		(yyvsp[(2) - (2)].var_stor)->setType((yyvsp[(1) - (2)].ident));
		(yyval.var_stor) = (yyvsp[(2) - (2)].var_stor);
;}
    break;

  case 40:
#line 215 "c.y"
    {
cout<<"----dec_spec 4 (type_specifier)\n";
		 (yyval.var_stor) = new QualStorageTypeNode();
		 (yyval.var_stor)->setType((yyvsp[(1) - (1)].ident));
	 ;}
    break;

  case 41:
#line 220 "c.y"
    {
cout<<"----dec_spec 5\n";
		(yyvsp[(2) - (2)].var_stor)->setQualifier((yyvsp[(1) - (2)].ident));
		(yyval.var_stor) =  (yyvsp[(2) - (2)].var_stor);;}
    break;

  case 42:
#line 224 "c.y"
    {
cout<<"----dec_spec 6\n";
		(yyval.var_stor) = new QualStorageTypeNode();
		(yyval.var_stor)->setQualifier((yyvsp[(1) - (1)].ident));
		;}
    break;

  case 43:
#line 229 "c.y"
    {
		cout<<"----dec_spec 7\n";
	;}
    break;

  case 44:
#line 232 "c.y"
    {cout<<"----dec_spec 8\n";;}
    break;

  case 45:
#line 233 "c.y"
    {cout<<"----dec_spec 9\n";;}
    break;

  case 46:
#line 234 "c.y"
    {cout<<"----dec_spec 10\n";;}
    break;

  case 49:
#line 245 "c.y"
    {(yyval.common_dec) = new AssignmentNode(new IdentiferNode(*(yyvsp[(1) - (1)].string))); delete (yyvsp[(1) - (1)].string);  ;}
    break;

  case 50:
#line 246 "c.y"
    {(yyval.common_dec) = new AssignmentNode(new IdentiferNode(*(yyvsp[(2) - (3)].expr)));cout<<"----dir_dec: \"(declarator)\"(2)"<<endl;;}
    break;

  case 51:
#line 247 "c.y"
    {;}
    break;

  case 52:
#line 248 "c.y"
    {;}
    break;

  case 53:
#line 249 "c.y"
    {;}
    break;

  case 54:
#line 250 "c.y"
    {;}
    break;

  case 55:
#line 251 "c.y"
    {;}
    break;

  case 56:
#line 252 "c.y"
    {;}
    break;

  case 57:
#line 253 "c.y"
    {;}
    break;

  case 58:
#line 254 "c.y"
    {;}
    break;

  case 59:
#line 255 "c.y"
    {;}
    break;

  case 60:
#line 256 "c.y"
    {

		 (yyvsp[(3) - (4)].identparam)->setId((yyvsp[(1) - (4)].common_dec));
		 cout<<(yyvsp[(3) - (4)].identparam)->arguments.front()->storageType->type->name<<endl;
		 (yyval.common_dec) = (yyvsp[(3) - (4)].identparam);
	 ;}
    break;

  case 61:
#line 262 "c.y"
    { (yyval.common_dec) = new NIdentifierParam(*(yyvsp[(1) - (3)].common_dec), true);;}
    break;

  case 62:
#line 263 "c.y"
    {;}
    break;

  case 68:
#line 281 "c.y"
    {{};}
    break;

  case 99:
#line 330 "c.y"
    {cout<<"----ext_dec 1 (func_def)\n";;}
    break;

  case 100:
#line 331 "c.y"
    {cout<<"----ext_dec 2 (dec)";;}
    break;

  case 101:
#line 336 "c.y"
    {;}
    break;

  case 102:
#line 337 "c.y"
    {cout<<"----exp_stmt: expression ;"<<endl;;}
    break;

  case 103:
#line 342 "c.y"
    {cout<<"--func_def 1\n";;}
    break;

  case 104:
#line 343 "c.y"
    {
		cout<<"--func_def 2(dec_spec declarator compound_statement)\n";
		// TODO this can be a struct also
		cout<<"Name: "<<(yyvsp[(1) - (3)].var_stor)->type->name<<endl;
		(yyval.stmt) = new FunctionDefinitionNode(*(yyvsp[(1) - (3)].var_stor), *(yyvsp[(2) - (3)].expr), *(yyvsp[(3) - (3)].block));;}
    break;

  case 114:
#line 377 "c.y"
    {cout<<"----initializer 1"<<endl;;}
    break;

  case 115:
#line 378 "c.y"
    {cout<<"----initializer 2"<<endl;;}
    break;

  case 116:
#line 379 "c.y"
    {cout<<"----initializer 3"<<endl;;}
    break;

  case 117:
#line 383 "c.y"
    {cout<<"----init_list 1"<<endl;;}
    break;

  case 118:
#line 384 "c.y"
    {cout<<"----init_list 2"<<endl;;}
    break;

  case 121:
#line 394 "c.y"
    {
		cout<<"----in_dec 1 (declarator = initializer)"<<endl;
		(yyval.var_init) = new AssignmentNode(*(yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));
		(yyval.var_init)->setOp((yyvsp[(2) - (3)].token));
	;}
    break;

  case 122:
#line 399 "c.y"
    {;}
    break;

  case 123:
#line 405 "c.y"
    {;}
    break;

  case 124:
#line 406 "c.y"
    {;}
    break;

  case 125:
#line 410 "c.y"
    {(yyval.stmt) = new WhileLoopNode((yyvsp[(3) - (5)].string),(yyvsp[(5) - (5)].string));;}
    break;

  case 129:
#line 417 "c.y"
    {(yyval.stmt) = new ReturnStatementNode();;}
    break;

  case 130:
#line 418 "c.y"
    {(yyval.stmt) = new ReturnStatementNode((yyvsp[(2) - (3)].expr));;}
    break;

  case 134:
#line 430 "c.y"
    {(yyval.identparam) = new NIdentifierParam(*(yyvsp[(1) - (3)].varvec));
		(yyval.identparam)->setEllipsis(true);

		cout<<(yyval.identparam)->arguments.front()->storageType->type->name<<endl;
	;}
    break;

  case 135:
#line 435 "c.y"
    { (yyval.identparam) = new NIdentifierParam(*(yyvsp[(1) - (1)].varvec)); ;}
    break;

  case 136:
#line 440 "c.y"
    { (yyval.varvec) = new VariableList(); (yyval.varvec)->push_back((yyvsp[(1) - (1)].var_decl)); ;}
    break;

  case 137:
#line 441 "c.y"
    { (yyvsp[(1) - (3)].varvec)->push_back((yyvsp[(3) - (3)].var_decl)); ;}
    break;

  case 138:
#line 448 "c.y"
    {
		 (yyval.var_decl) = new VariableDeclaration(*(yyvsp[(1) - (2)].var_stor), *(yyvsp[(2) - (2)].expr));

		cout<<(yyval.var_decl)->storageType->type->name<<endl;
	;}
    break;

  case 139:
#line 453 "c.y"
    {;}
    break;

  case 140:
#line 454 "c.y"
    {;}
    break;

  case 141:
#line 458 "c.y"
    {;}
    break;

  case 142:
#line 459 "c.y"
    {;}
    break;

  case 143:
#line 460 "c.y"
    {;}
    break;

  case 144:
#line 461 "c.y"
    {;}
    break;

  case 145:
#line 465 "c.y"
    {

		(yyval.stmt) = new IfNode((yyvsp[(3) - (7)].string),(yyvsp[(5) - (7)].token),(yyvsp[(7) - (7)].string));
	;}
    break;

  case 146:
#line 469 "c.y"
    {

		(yyval.stmt) = new IfNode((yyvsp[(3) - (5)].string), (yyvsp[(5) - (5)].string));
	;}
    break;

  case 153:
#line 489 "c.y"
    {;}
    break;

  case 154:
#line 490 "c.y"
    {;}
    break;

  case 155:
#line 491 "c.y"
    {;}
    break;

  case 156:
#line 492 "c.y"
    {;}
    break;

  case 157:
#line 493 "c.y"
    {;}
    break;

  case 158:
#line 494 "c.y"
    {;}
    break;

  case 159:
#line 498 "c.y"
    {(yyval.expr) = new StringNode(*(yyvsp[(1) - (1)].string));delete (yyvsp[(1) - (1)].string);;}
    break;

  case 184:
#line 552 "c.y"
    { (yyval.block) = new BlockNode(); (yyval.block)->statements.push_back((yyvsp[(1) - (1)].stmt)); ;}
    break;

  case 185:
#line 553 "c.y"
    { (yyvsp[(1) - (2)].block)->statements.push_back((yyvsp[(2) - (2)].stmt)); ;}
    break;

  case 192:
#line 570 "c.y"
    { (yyval.ident) = new IdentiferNode(*(yyvsp[(1) - (1)].string)); delete (yyvsp[(1) - (1)].string); ;}
    break;

  case 193:
#line 571 "c.y"
    { (yyval.ident) = new IdentiferNode(*(yyvsp[(1) - (1)].string)); delete (yyvsp[(1) - (1)].string); ;}
    break;

  case 194:
#line 572 "c.y"
    { (yyval.ident) = new IdentiferNode(*(yyvsp[(1) - (1)].string)); delete (yyvsp[(1) - (1)].string); ;}
    break;

  case 195:
#line 573 "c.y"
    { (yyval.ident) = new IdentiferNode(*(yyvsp[(1) - (1)].string)); delete (yyvsp[(1) - (1)].string); ;}
    break;

  case 196:
#line 574 "c.y"
    { (yyval.ident) = new IdentiferNode(*(yyvsp[(1) - (1)].string)); delete (yyvsp[(1) - (1)].string); ;}
    break;

  case 197:
#line 575 "c.y"
    { (yyval.ident) = new IdentiferNode(*(yyvsp[(1) - (1)].string)); delete (yyvsp[(1) - (1)].string); ;}
    break;

  case 198:
#line 576 "c.y"
    { (yyval.ident) = new IdentiferNode(*(yyvsp[(1) - (1)].string)); delete (yyvsp[(1) - (1)].string); ;}
    break;

  case 199:
#line 577 "c.y"
    { (yyval.ident) = new IdentiferNode(*(yyvsp[(1) - (1)].string)); delete (yyvsp[(1) - (1)].string); ;}
    break;

  case 200:
#line 578 "c.y"
    { (yyval.ident) = new IdentiferNode(*(yyvsp[(1) - (1)].string)); delete (yyvsp[(1) - (1)].string); ;}
    break;

  case 201:
#line 579 "c.y"
    { (yyval.ident) = new IdentiferNode(*(yyvsp[(1) - (1)].string)); delete (yyvsp[(1) - (1)].string); ;}
    break;

  case 214:
#line 599 "c.y"
    {(yyval.expr) = new IdentiferNode(*(yyvsp[(1) - (1)].string)); delete (yyvsp[(1) - (1)].string); ;}
    break;

  case 215:
#line 600 "c.y"
    {(yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 216:
#line 601 "c.y"
    {(yyval.expr) = (yyvsp[(1) - (1)].expr);;}
    break;

  case 217:
#line 602 "c.y"
    {(yyval.expr)=(yyvsp[(2) - (3)].expr);;}
    break;

  case 218:
#line 603 "c.y"
    {;}
    break;

  case 219:
#line 607 "c.y"
    {if(debug)cout<<"---- postfix_expression 1"<<endl;;}
    break;

  case 220:
#line 608 "c.y"
    { ;}
    break;

  case 221:
#line 609 "c.y"
    {(yyval.expr) = new FunctionCallNode(*(yyvsp[(1) - (3)].expr));;}
    break;

  case 222:
#line 610 "c.y"
    {(yyval.expr) = new FunctionCallNode(*(yyvsp[(1) - (4)].expr), *(yyvsp[(3) - (4)].exprvec)) ;;}
    break;

  case 223:
#line 611 "c.y"
    { ;}
    break;

  case 224:
#line 612 "c.y"
    { ;}
    break;

  case 225:
#line 613 "c.y"
    {
		(yyval.expr) = new UnaryOperatorNode(*(yyvsp[(1) - (2)].expr), (yyvsp[(2) - (2)].token), false);
		;}
    break;

  case 226:
#line 616 "c.y"
    {
		(yyval.expr) = new UnaryOperatorNode(*(yyvsp[(1) - (2)].expr), (yyvsp[(2) - (2)].token), false);
		 ;}
    break;

  case 227:
#line 619 "c.y"
    { ;}
    break;

  case 228:
#line 620 "c.y"
    { ;}
    break;

  case 229:
#line 624 "c.y"
    {cout<<"---- unary_expression 1"<<endl;;}
    break;

  case 230:
#line 625 "c.y"
    {
		(yyval.expr) = new UnaryOperatorNode(*(yyvsp[(2) - (2)].expr), (yyvsp[(1) - (2)].token), true);
		;}
    break;

  case 231:
#line 628 "c.y"
    {
		(yyval.expr) = new UnaryOperatorNode(*(yyvsp[(2) - (2)].expr), (yyvsp[(1) - (2)].token), true);
		;}
    break;

  case 232:
#line 631 "c.y"
    {
		if(dynamic_cast<IntNode *>((yyvsp[(2) - (2)].expr))){
		 (yyval.expr) = new IntNode((yyvsp[(1) - (2)].token), (yyvsp[(2) - (2)].expr)) ;
	 }else if(dynamic_cast<DoubleNode *>((yyvsp[(2) - (2)].expr))){
		 (yyval.expr) = new DoubleNode((yyvsp[(1) - (2)].token), (yyvsp[(2) - (2)].expr)) ;
	 }else if(dynamic_cast<LongNode *>((yyvsp[(2) - (2)].expr))){
		 (yyval.expr) = new LongNode((yyvsp[(1) - (2)].token), (yyvsp[(2) - (2)].expr)) ;
	 }else{
		 cout<<"ERRROR Here in parser\n";
	 }
		 cout<<"Single Unary\n";
	 ;}
    break;

  case 233:
#line 643 "c.y"
    {;}
    break;

  case 234:
#line 644 "c.y"
    {;}
    break;

  case 235:
#line 645 "c.y"
    {;}
    break;

  case 237:
#line 650 "c.y"
    {;}
    break;

  case 238:
#line 654 "c.y"
    {cout<<"---- mult_expression 1"<<endl;;}
    break;

  case 239:
#line 655 "c.y"
    {(yyval.expr) = new BinaryOperatorNode(*(yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].token), *(yyvsp[(3) - (3)].expr));;}
    break;

  case 240:
#line 656 "c.y"
    {(yyval.expr) = new BinaryOperatorNode(*(yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].token), *(yyvsp[(3) - (3)].expr));;}
    break;

  case 241:
#line 657 "c.y"
    {(yyval.expr) = new BinaryOperatorNode(*(yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].token), *(yyvsp[(3) - (3)].expr));;}
    break;

  case 242:
#line 661 "c.y"
    {;}
    break;

  case 243:
#line 662 "c.y"
    {(yyval.expr) = new BinaryOperatorNode(*(yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].token), *(yyvsp[(3) - (3)].expr));;}
    break;

  case 244:
#line 663 "c.y"
    {(yyval.expr) = new BinaryOperatorNode(*(yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].token), *(yyvsp[(3) - (3)].expr));;}
    break;

  case 245:
#line 667 "c.y"
    {;}
    break;

  case 246:
#line 668 "c.y"
    {;}
    break;

  case 247:
#line 669 "c.y"
    {;}
    break;

  case 248:
#line 673 "c.y"
    {;}
    break;

  case 249:
#line 674 "c.y"
    {(yyval.expr) = new BinaryOperatorNode(*(yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].token), *(yyvsp[(3) - (3)].expr));;}
    break;

  case 250:
#line 675 "c.y"
    {(yyval.expr) = new BinaryOperatorNode(*(yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].token), *(yyvsp[(3) - (3)].expr));;}
    break;

  case 251:
#line 676 "c.y"
    {(yyval.expr) = new BinaryOperatorNode(*(yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].token), *(yyvsp[(3) - (3)].expr));;}
    break;

  case 252:
#line 677 "c.y"
    {(yyval.expr) = new BinaryOperatorNode(*(yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].token), *(yyvsp[(3) - (3)].expr));;}
    break;

  case 253:
#line 681 "c.y"
    {;}
    break;

  case 254:
#line 682 "c.y"
    {(yyval.expr) = new ExprBoolNode( (yyvsp[(2) - (3)].token), (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));
		;}
    break;

  case 255:
#line 684 "c.y"
    {(yyval.expr) = new ExprBoolNode((yyvsp[(2) - (3)].token), (yyvsp[(1) - (3)].expr) , (yyvsp[(3) - (3)].expr));
		;}
    break;

  case 257:
#line 690 "c.y"
    {(yyval.expr) = new BinaryOperatorNode(*(yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].token), *(yyvsp[(3) - (3)].expr));;}
    break;

  case 259:
#line 695 "c.y"
    {(yyval.expr) = new BinaryOperatorNode(*(yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].token), *(yyvsp[(3) - (3)].expr));;}
    break;

  case 261:
#line 700 "c.y"
    {(yyval.expr) = new BinaryOperatorNode(*(yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].token), *(yyvsp[(3) - (3)].expr));;}
    break;

  case 263:
#line 704 "c.y"
    {(yyval.expr) = new BinaryOperatorNode(*(yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].token), *(yyvsp[(3) - (3)].expr));;}
    break;

  case 265:
#line 709 "c.y"
    {(yyval.expr) = new BinaryOperatorNode(*(yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].token), *(yyvsp[(3) - (3)].expr));;}
    break;

  case 267:
#line 714 "c.y"
    {;}
    break;

  case 268:
#line 718 "c.y"
    {cout<<"---- assignment_expression 1"<<endl;;}
    break;

  case 269:
#line 719 "c.y"
    {
		cout<<"---- assignment_expression 2"<<endl;
		(yyval.expr) = new AssignmentNode(*(yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));
		((AssignmentNode *)(yyval.expr))->setOp((yyvsp[(2) - (3)].token));
	;}
    break;

  case 270:
#line 727 "c.y"
    {;}
    break;

  case 271:
#line 731 "c.y"
    {;}
    break;

  case 272:
#line 732 "c.y"
    {;}
    break;


/* Line 1267 of yacc.c.  */
#line 3166 "c.tab.c"
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


#line 737 "c.y"

#include <stdio.h>

void yyerror(const char *s)
{
	//fflush(stdout);
	printf("*** %s\n", s);
}

