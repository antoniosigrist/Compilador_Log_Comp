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
#define YYLAST   2232

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  102
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  79
/* YYNRULES -- Number of rules.  */
#define YYNRULES  270
/* YYNRULES -- Number of states.  */
#define YYNSTATES  456

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
     458,   463,   467,   471,   473,   475,   479,   482,   485,   487,
     491,   494,   497,   499,   507,   513,   519,   522,   524,   527,
     529,   537,   539,   541,   543,   545,   547,   549,   551,   553,
     555,   557,   559,   561,   563,   565,   570,   576,   579,   581,
     583,   585,   588,   591,   595,   597,   599,   603,   606,   610,
     612,   615,   617,   619,   622,   624,   626,   628,   630,   632,
     635,   637,   639,   641,   643,   645,   647,   649,   651,   653,
     655,   657,   659,   661,   663,   665,   667,   669,   671,   673,
     675,   677,   679,   681,   683,   685,   689,   691,   693,   698,
     702,   707,   711,   715,   718,   721,   728,   736,   738,   741,
     744,   747,   750,   755,   760,   762,   767,   769,   773,   777,
     781,   783,   787,   791,   793,   797,   801,   803,   807,   811,
     815,   819,   821,   825,   829,   831,   835,   837,   841,   843,
     847,   849,   853,   855,   859,   861,   867,   869,   873,   875,
     877
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
      -1,    47,    20,    -1,     3,    97,   148,    -1,    37,   179,
      97,   148,    -1,    38,    97,   148,    -1,   142,    91,    79,
      -1,   142,    -1,   143,    -1,   142,    91,   143,    -1,   115,
     114,    -1,   115,   104,    -1,   115,    -1,    23,   160,   144,
      -1,    23,   160,    -1,    23,   144,    -1,    23,    -1,    39,
     180,     3,   148,    40,   148,     3,    -1,    39,   180,     3,
     148,     3,    -1,    41,    89,   180,    90,   148,    -1,   161,
     146,    -1,   161,    -1,   159,   146,    -1,   159,    -1,    87,
      89,   179,    91,     6,    90,    20,    -1,   140,    -1,   111,
      -1,   127,    -1,   145,    -1,   138,    -1,   139,    -1,     6,
      -1,     7,    -1,    67,    -1,    68,    -1,    69,    -1,    88,
      -1,    70,    -1,    71,    -1,   152,    92,   153,    93,    -1,
     152,     3,    92,   153,    93,    -1,   152,     3,    -1,    76,
      -1,    77,    -1,   154,    -1,   153,   154,    -1,   146,    20,
      -1,   146,   155,    20,    -1,   147,    -1,   156,    -1,   155,
      91,   156,    -1,    97,   179,    -1,   114,    97,   179,    -1,
     114,    -1,   146,   104,    -1,   146,    -1,   126,    -1,   158,
     126,    -1,    73,    -1,    74,    -1,    75,    -1,    84,    -1,
     159,    -1,   160,   159,    -1,    19,    -1,    11,    -1,    12,
      -1,    13,    -1,    14,    -1,    17,    -1,    18,    -1,    15,
      -1,    16,    -1,    10,    -1,    80,    -1,    81,    -1,   108,
      -1,   151,    -1,   123,    -1,    65,    -1,    31,    -1,    23,
      -1,    22,    -1,    24,    -1,    99,    -1,   100,    -1,     3,
      -1,   112,    -1,   149,    -1,    89,   180,    90,    -1,   130,
      -1,   163,    -1,   164,    94,   180,    95,    -1,   164,    89,
      90,    -1,   164,    89,   106,    90,    -1,   164,    96,     3,
      -1,   164,    49,     3,    -1,   164,    50,    -1,   164,    51,
      -1,    89,   157,    90,    92,   135,    93,    -1,    89,   157,
      90,    92,   135,    91,    93,    -1,   164,    -1,    50,   165,
      -1,    51,   165,    -1,   162,   166,    -1,     8,   165,    -1,
       8,    89,   157,    90,    -1,    83,    89,   157,    90,    -1,
     165,    -1,    89,   157,    90,   166,    -1,   166,    -1,   167,
      23,   166,    -1,   167,    25,   166,    -1,   167,    26,   166,
      -1,   167,    -1,   168,    22,   167,    -1,   168,    24,   167,
      -1,   168,    -1,   169,    52,   168,    -1,   169,    53,   168,
      -1,   169,    -1,   170,    34,   169,    -1,   170,    36,   169,
      -1,   170,    33,   169,    -1,   170,    35,   169,    -1,   170,
      -1,   171,    32,   170,    -1,   171,    54,   170,    -1,   171,
      -1,   172,    31,   171,    -1,   172,    -1,   173,    28,   172,
      -1,   173,    -1,   174,    30,   173,    -1,   174,    -1,   175,
      27,   174,    -1,   175,    -1,   176,    29,   175,    -1,   176,
      -1,   176,   101,   180,    97,   177,    -1,   177,    -1,   165,
     107,   178,    -1,   177,    -1,   178,    -1,   180,    91,   178,
      -1
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
     386,   394,   399,   405,   406,   410,   414,   415,   416,   421,
     422,   423,   429,   434,   439,   440,   447,   452,   453,   457,
     458,   459,   460,   464,   468,   472,   477,   478,   479,   480,
     484,   488,   489,   490,   491,   492,   493,   497,   498,   502,
     503,   504,   505,   506,   507,   511,   512,   513,   517,   518,
     522,   524,   527,   528,   529,   534,   535,   539,   540,   541,
     546,   547,   551,   552,   556,   557,   558,   559,   563,   564,
     569,   570,   571,   572,   573,   574,   575,   576,   577,   578,
     579,   580,   581,   582,   583,   584,   588,   589,   590,   591,
     592,   593,   598,   599,   600,   601,   602,   606,   607,   608,
     609,   610,   611,   612,   615,   618,   619,   623,   624,   627,
     630,   642,   643,   644,   648,   649,   653,   654,   655,   656,
     660,   661,   662,   666,   667,   668,   672,   673,   674,   675,
     676,   680,   681,   683,   688,   689,   693,   694,   698,   699,
     702,   703,   707,   708,   712,   713,   717,   718,   726,   730,
     731
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
     135,   136,   136,   137,   137,   138,   139,   139,   139,   140,
     140,   140,   141,   141,   142,   142,   143,   143,   143,   144,
     144,   144,   144,   145,   145,   145,   146,   146,   146,   146,
     147,   148,   148,   148,   148,   148,   148,   149,   149,   150,
     150,   150,   150,   150,   150,   151,   151,   151,   152,   152,
     153,   153,   154,   154,   154,   155,   155,   156,   156,   156,
     157,   157,   158,   158,   159,   159,   159,   159,   160,   160,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   162,   162,   162,   162,
     162,   162,   163,   163,   163,   163,   163,   164,   164,   164,
     164,   164,   164,   164,   164,   164,   164,   165,   165,   165,
     165,   165,   165,   165,   166,   166,   167,   167,   167,   167,
     168,   168,   168,   169,   169,   169,   170,   170,   170,   170,
     170,   171,   171,   171,   172,   172,   173,   173,   174,   174,
     175,   175,   176,   176,   177,   177,   178,   178,   179,   180,
     180
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
       3,     3,     1,     1,     3,     5,     3,     2,     2,     3,
       4,     3,     3,     1,     1,     3,     2,     2,     1,     3,
       2,     2,     1,     7,     5,     5,     2,     1,     2,     1,
       7,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     5,     2,     1,     1,
       1,     2,     2,     3,     1,     1,     3,     2,     3,     1,
       2,     1,     1,     2,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     4,     3,
       4,     3,     3,     2,     2,     6,     7,     1,     2,     2,
       2,     2,     4,     4,     1,     4,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     5,     1,     3,     1,     1,
       3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   199,   191,   192,   193,   194,   197,   198,   195,   196,
     190,   205,   159,   160,   161,   163,   164,   105,   184,   185,
     186,   168,   169,     0,   200,   201,     0,   187,   106,     0,
     162,     0,    46,   202,   100,     0,   204,   182,    99,    44,
      34,    38,   203,     0,     2,    42,    40,    94,     0,     0,
       0,     0,     1,    45,    49,    32,   142,     0,   122,    36,
     123,     0,     0,    43,    37,   167,     0,   183,    41,    39,
       0,    89,    98,     0,    95,   212,    28,    29,   157,   158,
       0,    30,   208,   207,   209,   206,     0,     0,    31,     0,
       0,     0,   210,   211,   213,   216,   181,   214,     0,   149,
     147,     0,   217,   227,   234,   236,   240,   243,   246,   251,
     254,   256,   258,   260,   262,   264,   268,     0,     0,     0,
     187,   141,   188,   140,     0,     0,     0,   104,    47,     0,
       0,     0,     0,    33,     0,    35,     0,     0,   174,     0,
     170,     0,     0,     0,    90,     0,   231,     0,   228,   229,
       0,     0,     0,   234,   266,   269,     0,     0,     0,   180,
       5,     4,     6,   148,   146,   230,     0,   223,   224,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     7,    21,     0,   139,   189,    50,     0,   121,   116,
     212,   101,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,    22,   152,    24,   153,   155,   156,   151,   154,
      25,     0,   122,   103,    48,   112,    61,   138,     0,     0,
     133,   134,   207,     0,    51,     0,     0,   124,     0,   172,
       0,   179,     0,   175,   165,   171,     0,    92,    97,    91,
      96,     0,     0,     0,     0,     0,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,     0,   215,     0,
      85,     0,     0,   207,     0,    69,     0,     0,     0,     0,
       3,   222,   219,     0,     8,     0,   221,   237,   238,   239,
     241,   242,   244,   245,   249,   247,   250,   248,   252,   253,
     255,   257,   259,   261,   263,     0,     0,     0,     0,     0,
       0,    64,   118,     0,     0,     0,     0,     0,     0,     0,
       0,   127,   128,    27,    23,   102,     0,     0,   137,   136,
       4,    62,    60,     0,    52,     0,     0,   207,     0,    58,
       0,    59,   166,   177,     0,   173,     0,    93,   232,     0,
     233,     0,     0,   235,   267,   270,    68,    86,    70,     0,
       0,     0,    75,     0,    76,    87,     0,   207,     0,    77,
       0,     0,   220,     0,   218,     0,     0,     0,    67,   117,
      63,    65,     0,   114,   129,     0,   131,     0,     0,     0,
     126,   113,   132,   135,     0,    54,    55,     0,    57,   178,
     176,     0,     0,   108,     0,     0,     0,    72,     0,    74,
      88,    78,     0,     0,     0,    83,     0,    84,     9,   265,
     150,    66,   115,     0,   120,   130,     0,     0,     0,    53,
      56,     0,   107,     0,     0,     0,   225,    71,    73,     0,
      80,     0,    81,   119,   144,     0,   145,   125,   111,   109,
     110,   226,    79,    82,     0,   143
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    31,   271,    32,   283,   267,    33,   211,   212,   213,
      94,    34,   124,   227,   130,    59,   309,   310,   311,   160,
      72,    36,    73,    74,    37,   215,    38,    39,    95,   402,
     403,   228,   312,   313,    60,    61,   216,   217,   218,   272,
     230,   231,    62,   219,    96,    40,   220,    97,    41,    42,
      43,   139,   140,   242,   243,   404,    44,    45,   123,    46,
     101,   102,   103,   153,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   154,   155,   117,   221
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -351
static const yytype_int16 yypact[] =
{
    1937,  -351,  -351,  -351,  -351,  -351,  -351,  -351,  -351,  -351,
    -351,  -351,  -351,  -351,  -351,  -351,  -351,  -351,  -351,  -351,
    -351,  -351,  -351,    24,  -351,  -351,   -71,   -59,  -351,   -56,
    -351,    45,  2038,  -351,  -351,    37,  -351,  -351,  -351,  2038,
    -351,  2038,  -351,    36,  1937,  2038,  2038,   -44,    58,   673,
    2148,  1433,  -351,  -351,  -351,  -351,   210,    66,  1804,   -53,
    -351,   176,   154,  -351,  -351,    99,  2056,  -351,  -351,  -351,
      58,  -351,   221,    -5,  -351,  -351,  -351,  -351,  -351,  -351,
    1469,  -351,  -351,  -351,  -351,  -351,  1505,  1505,  -351,   110,
     129,   673,  -351,  -351,  -351,  -351,   164,  -351,   134,  2148,
    2148,  1433,  -351,   158,  -351,  -351,   203,   212,   186,   181,
      -1,   218,   229,   242,   248,    -6,  -351,   201,   208,   209,
    -351,  -351,  -351,   210,   213,  1294,   477,  -351,  -351,    37,
    1830,  1596,   335,  -351,    66,   -53,  2056,   151,  -351,  1699,
    -351,   153,  1433,    21,  -351,   673,  -351,   673,  -351,  -351,
    2148,  1433,   214,   312,  -351,  -351,   165,  1677,   811,  -351,
     -27,   117,  -351,  -351,  -351,  -351,   296,  -351,  -351,  1345,
    1433,   304,  1433,  1433,  1433,  1433,  1433,  1433,  1433,  1433,
    1433,  1433,  1433,  1433,  1433,  1433,  1433,  1433,  1433,  1433,
    1433,  -351,  -351,   303,  -351,  -351,  -351,  1243,  -351,  -351,
     215,  -351,  1433,   219,  1433,   226,  1433,   314,   302,   305,
    -351,   575,  -351,  -351,  -351,  -351,  -351,  -351,  -351,  -351,
    -351,   178,   306,  -351,  -351,   230,  -351,    81,   239,   240,
     243,  -351,   236,  1086,  -351,   866,   250,  -351,  1720,  -351,
    1433,   238,   183,  -351,  -351,  -351,    25,  -351,  -351,  -351,
    -351,   247,   256,   257,   258,  1396,  -351,  -351,  -351,  -351,
    -351,  -351,  -351,  -351,  -351,  -351,  -351,  1433,  -351,  1433,
    -351,   260,   261,   253,  1086,  -351,   921,   259,  1913,   976,
     -27,  -351,  -351,   175,  -351,   -32,  -351,  -351,  -351,  -351,
     203,   203,   212,   212,   186,   186,   186,   186,   181,   181,
      -1,   218,   229,   242,   248,   -62,   262,  1433,   352,  1294,
     141,  -351,  -351,   170,   760,   263,   760,    61,  1433,    62,
     336,  -351,  -351,  -351,  -351,  -351,   358,  1562,  -351,  -351,
      67,  -351,  -351,  2016,  -351,  1086,   267,   269,  1433,  -351,
     270,  -351,  -351,  -351,  1433,  -351,   162,  -351,   285,   285,
    -351,  2134,  1243,  -351,  -351,  -351,  -351,  -351,  -351,  1086,
     283,  1433,  -351,   286,  -351,  -351,   290,   288,  1086,  -351,
    1031,   292,  -351,  1433,  -351,  1433,   369,   295,  -351,  -351,
    -351,  -351,  1141,  -351,  -351,   760,  -351,   760,   191,   760,
    -351,  -351,  -351,  -351,   297,  -351,  -351,   298,  -351,  -351,
    -351,   294,   197,  -351,   300,   185,   299,  -351,   307,  -351,
    -351,  -351,  1086,   311,  1433,  -351,   316,  -351,  -351,  -351,
    -351,  -351,  -351,  1294,  -351,  -351,    16,   760,   392,  -351,
    -351,  1433,  -351,  2134,  1433,  1192,  -351,  -351,  -351,   318,
    -351,   320,  -351,  -351,  -351,   760,  -351,  -351,  -351,  -351,
    -351,  -351,  -351,  -351,   395,  -351
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -351,  -351,   -76,  -351,  -351,  -351,  -351,  -351,   188,   130,
    -351,   -33,   -22,    34,  -351,   -60,  -350,  -351,    90,  -158,
    -351,  -351,   337,  -121,   372,  -351,  -351,  -351,  -351,  -351,
     -12,    96,  -109,    71,   291,  -351,  -351,  -351,  -351,  -120,
    -351,    94,   -47,  -351,   -28,   -19,  -195,  -351,  -351,  -351,
    -351,   293,  -125,  -351,    82,    32,  -351,   -49,  -106,   -45,
    -351,  -351,  -351,   -43,   -24,   114,   115,    41,   113,   246,
     251,   245,   252,   244,  -351,   -39,    44,   -36,   -23
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      99,    99,   135,   280,   100,   100,   104,   122,   104,   121,
     116,   229,   116,    58,   245,   119,   198,    99,    49,   444,
     159,   100,   250,   189,    71,   128,   235,    47,    71,   269,
      50,   183,   423,    51,    35,   375,   131,   146,   137,    65,
      54,   132,    99,   148,   149,    52,   100,   138,    70,   161,
      99,    99,   276,   184,   100,   100,   445,    55,   104,   269,
      56,    71,   278,   374,   387,   389,    53,   279,   156,    54,
      54,   163,   164,    63,   195,    64,   194,   165,    35,    68,
      69,    98,   118,   122,    54,   423,   143,    99,   144,    56,
      99,   100,   129,   214,   100,   190,    99,   224,    99,   104,
     100,    99,   100,   116,    56,   100,   248,   222,   137,   122,
     161,   137,   222,   245,   249,   241,    48,   138,   347,   384,
     138,   386,   156,   152,   156,   250,    57,   335,    66,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   285,   287,   288,
     289,   328,   269,   269,    54,    57,   327,    54,   366,   104,
     129,   158,   380,   116,   129,    54,   315,   305,   359,   199,
     327,   239,   280,   370,    56,   158,   236,   251,   214,   252,
     330,   317,   253,   319,   122,    56,   195,    56,   127,    99,
     425,   136,   426,   100,   428,   254,   133,   104,   325,   150,
     379,   116,   277,   345,   343,   329,   157,   166,   167,   168,
     137,   158,   104,   284,   179,   180,   181,   182,   151,   138,
     294,   295,   296,   297,   162,   122,   172,   195,   173,   174,
     122,   353,   446,    56,   175,   307,   176,   308,   177,   178,
      57,   199,   142,    57,   246,   129,   247,   169,   240,   185,
     454,    57,   170,   157,   171,   268,   269,   186,   158,   240,
     223,   382,   412,   383,   104,   372,   373,   134,   116,   269,
     135,   377,   187,   424,   346,   188,   435,   336,   436,   340,
     330,   427,   269,    18,    19,    20,   195,   432,   433,   290,
     291,   191,   292,   293,   120,   388,   298,   299,   192,   281,
     193,   104,    99,   196,   255,   116,   100,   286,   399,   306,
     195,   354,   314,   355,   443,   318,   316,   320,   360,   122,
     363,   195,   321,   371,   241,   322,   424,   125,   326,   331,
     332,   334,   104,   256,   333,   344,   419,   348,    75,    76,
      77,    78,    79,    80,    81,   341,   349,   350,   358,   351,
     356,   357,   376,   199,   364,   378,   390,    82,   232,    84,
     385,   225,   395,   195,   396,   398,    85,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   352,   407,   394,
     410,   409,   397,   411,    99,    86,    87,   417,   100,   420,
     421,   431,   429,   430,   437,   447,   199,   434,   455,   324,
     381,    88,   438,   406,   233,   408,   440,   141,    18,    19,
      20,   442,   413,   452,   416,   453,    67,   418,    89,   120,
      90,   449,   391,   405,    91,   237,   199,   393,   400,   238,
     234,   300,   302,   304,    92,    93,     0,   301,     0,     0,
     303,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   439,     0,   441,     0,
       0,     0,     0,     0,     0,     0,     0,   199,     0,     0,
       0,     0,     0,     0,     0,   448,     0,     0,   450,   199,
     200,    76,    77,    78,    79,    80,    81,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,   201,     0,    82,
      83,    84,     0,     0,     0,     0,     0,     0,    85,     0,
       0,     0,     0,     0,   202,   203,   204,     0,   205,   206,
       0,     0,   207,   208,   209,     0,     0,    86,    87,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,    88,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,    25,    26,
      89,    27,    90,    28,    29,    30,    91,     0,     0,   126,
     210,     0,     0,     0,     0,     0,    92,    93,   200,    76,
      77,    78,    79,    80,    81,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,   201,     0,    82,    83,    84,
       0,     0,     0,     0,     0,     0,    85,     0,     0,     0,
       0,     0,   202,   203,   204,     0,   205,   206,     0,     0,
     207,   208,   209,     0,     0,    86,    87,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,    88,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,    24,    25,    26,    89,    27,
      90,    28,    29,    30,    91,     0,     0,   126,   323,     0,
       0,     0,     0,     0,    92,    93,    75,    76,    77,    78,
      79,    80,    81,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,     0,     0,    82,    83,    84,     0,     0,
       0,     0,     0,     0,    85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    86,    87,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    88,
       0,     0,     0,     0,     0,     0,    18,    19,    20,    21,
      22,    23,     0,    24,    25,     0,    89,    27,    90,     0,
       0,     0,    91,   200,    76,    77,    78,    79,    80,    81,
       0,     0,    92,    93,     0,     0,     0,     0,     0,     0,
     201,     0,    82,    83,    84,     0,     0,     0,     0,     0,
       0,    85,     0,     0,     0,     0,     0,   202,   203,   204,
       0,   205,   206,     0,     0,   207,   208,   209,     0,     0,
      86,    87,     0,     0,    75,    76,    77,    78,    79,    80,
      81,     0,     0,     0,     0,     0,    88,     0,     0,     0,
       0,     0,     0,    82,   273,    84,     0,     0,     0,     0,
       0,     0,    85,    89,     0,    90,     0,     0,     0,    91,
       0,     0,   126,     0,     0,     0,     0,     0,     0,    92,
      93,    86,    87,     0,     0,     0,     0,     0,     0,    75,
      76,    77,    78,    79,    80,    81,     0,    88,     0,     0,
     274,     0,     0,     0,    18,    19,    20,     0,    82,   337,
      84,     0,     0,     0,    89,   120,    90,    85,     0,     0,
      91,     0,     0,     0,     0,     0,   275,     0,     0,     0,
      92,    93,     0,     0,     0,     0,    86,    87,     0,     0,
       0,     0,     0,     0,    75,    76,    77,    78,    79,    80,
      81,     0,    88,     0,     0,   338,     0,     0,     0,    18,
      19,    20,     0,    82,    83,    84,     0,     0,     0,    89,
     120,    90,    85,     0,     0,    91,     0,     0,     0,     0,
       0,   339,     0,     0,     0,    92,    93,     0,     0,     0,
       0,    86,    87,     0,     0,     0,     0,     0,     0,    75,
      76,    77,    78,    79,    80,    81,     0,    88,     0,     0,
     361,     0,     0,     0,    18,    19,    20,     0,    82,   367,
      84,     0,     0,     0,    89,   120,    90,    85,     0,     0,
      91,     0,     0,     0,     0,     0,   362,     0,     0,     0,
      92,    93,     0,     0,     0,     0,    86,    87,     0,     0,
       0,     0,     0,     0,    75,    76,    77,    78,    79,    80,
      81,     0,    88,     0,     0,   368,     0,     0,     0,    18,
      19,    20,     0,    82,    83,    84,     0,     0,     0,    89,
     120,    90,    85,     0,     0,    91,     0,     0,     0,     0,
       0,   369,     0,     0,     0,    92,    93,     0,     0,     0,
       0,    86,    87,     0,     0,     0,     0,     0,     0,    75,
      76,    77,    78,    79,    80,    81,     0,    88,     0,     0,
     414,     0,     0,     0,    18,    19,    20,     0,    82,    83,
      84,     0,     0,     0,    89,   120,    90,    85,     0,     0,
      91,     0,     0,     0,     0,     0,   415,     0,     0,     0,
      92,    93,     0,     0,     0,     0,    86,    87,     0,     0,
       0,     0,     0,     0,    75,    76,    77,    78,    79,    80,
      81,     0,    88,     0,     0,     0,     0,     0,     0,    18,
      19,    20,     0,    82,    83,    84,     0,     0,     0,    89,
     120,    90,    85,     0,     0,    91,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,    93,     0,     0,     0,
       0,    86,    87,     0,     0,    75,    76,    77,    78,    79,
      80,    81,     0,     0,     0,     0,     0,    88,     0,     0,
       0,     0,     0,     0,    82,    83,    84,     0,     0,     0,
       0,     0,     0,    85,    89,     0,    90,     0,     0,     0,
      91,     0,     0,   197,   422,   307,     0,   308,     0,     0,
      92,    93,    86,    87,     0,     0,    75,    76,    77,    78,
      79,    80,    81,     0,     0,     0,     0,     0,    88,     0,
       0,     0,     0,     0,     0,    82,    83,    84,     0,     0,
       0,     0,     0,     0,    85,    89,     0,    90,     0,     0,
       0,    91,     0,     0,   197,   451,   307,     0,   308,     0,
       0,    92,    93,    86,    87,     0,     0,    75,    76,    77,
      78,    79,    80,    81,     0,     0,     0,     0,     0,    88,
       0,     0,     0,     0,     0,     0,    82,    83,    84,     0,
       0,     0,     0,     0,     0,    85,    89,     0,    90,     0,
       0,     0,    91,     0,     0,   197,     0,   307,     0,   308,
       0,     0,    92,    93,    86,    87,     0,     0,    75,    76,
      77,    78,    79,    80,    81,     0,     0,     0,     0,     0,
      88,     0,     0,     0,     0,     0,     0,    82,    83,    84,
       0,     0,     0,     0,     0,     0,    85,    89,     0,    90,
       0,     0,     0,    91,     0,     0,   197,     0,     0,     0,
       0,     0,     0,    92,    93,    86,    87,     0,     0,    75,
      76,    77,    78,    79,    80,    81,     0,     0,     0,     0,
       0,    88,     0,     0,     0,     0,     0,     0,    82,    83,
      84,     0,     0,     0,     0,     0,     0,    85,    89,     0,
      90,     0,     0,     0,    91,   282,    75,    76,    77,    78,
      79,    80,    81,     0,    92,    93,    86,    87,     0,     0,
       0,     0,     0,     0,     0,    82,    83,    84,     0,     0,
       0,     0,    88,     0,    85,     0,     0,     0,     0,     0,
       0,     0,    75,    76,    77,    78,    79,    80,    81,    89,
       0,    90,     0,    86,    87,    91,     0,     0,   352,     0,
       0,    82,    83,    84,     0,    92,    93,     0,     0,    88,
      85,     0,     0,     0,     0,     0,     0,     0,    75,    76,
      77,    78,    79,    80,    81,     0,    89,     0,    90,    86,
      87,     0,    91,     0,     0,     0,     0,    82,    83,    84,
       0,     0,    92,    93,     0,    88,    85,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    89,     0,    90,    86,    87,     0,   145,     0,
       0,     0,     0,     0,     0,    54,     0,     0,    92,    93,
       0,    88,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,     0,     0,     0,    56,     0,     0,    89,     0,
      90,     0,     0,     0,   147,     0,     0,     0,     0,   225,
       0,     0,     0,     0,    92,    93,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,     0,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    24,    25,    26,     0,    27,     0,    28,     0,
      30,   327,   270,     0,     0,     0,   158,     0,     0,     0,
       0,    11,     0,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,    26,     0,
      27,     0,    28,     0,    30,     0,   226,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,     0,     0,     0,
      56,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       2,     3,     4,     5,     6,     7,     8,     9,    10,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
       0,     0,    11,     0,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,    25,    26,
       0,    27,     0,    28,    11,    30,   157,   270,     0,     0,
       0,   158,    18,    19,    20,    21,    22,    23,     0,    24,
      25,     0,     0,    27,     0,    11,    29,     0,     0,     0,
       0,     0,   244,    18,    19,    20,    21,    22,    23,     0,
      24,    25,     0,     0,    27,     0,     0,    29,     0,     0,
       0,     0,     0,   342,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,     0,   125,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
       0,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     0,    24,    25,    26,     0,    27,     0,
      28,    29,    30,     0,     0,    11,   126,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
      24,    25,    26,     0,    27,     0,    28,    29,    30,     0,
       0,     0,   126,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,     0,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,    25,    26,     0,    27,     0,    28,
       0,    30,    11,   365,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,    25,    26,
       0,    27,     0,    28,    29,    30,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,     0,     0,
       0,     0,     0,     0,     0,     0,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,     0,     0,     0,     0,
       0,    11,     0,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,   392,    24,    25,    26,     0,
      27,     0,    28,    11,    30,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,    24,    25,
      26,    11,    27,     0,    28,     0,    30,     0,     0,    18,
      19,    20,    21,    22,    23,     0,    24,    25,     0,     0,
      27,     0,     0,    29,     1,     2,     3,     4,     5,     6,
       7,     8,     9,    10,     0,     0,     0,     0,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,     0,     0,
       0,     0,   401,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
       0,     0,     0,     0,     0,     0,     0,    18,    19,    20,
      21,    22,    23,    11,    24,    25,     0,     0,    27,     0,
       0,    18,    19,    20,    21,    22,    23,     0,    24,    25,
       0,     0,    27
};

static const yytype_int16 yycheck[] =
{
      49,    50,    62,   161,    49,    50,    49,    56,    51,    56,
      49,   131,    51,    35,   139,    51,   125,    66,    89,     3,
      96,    66,   143,    29,     3,    58,   132,     3,     3,    91,
      89,    32,   382,    89,     0,    97,    89,    80,    66,     3,
       3,    94,    91,    86,    87,     0,    91,    66,    92,    96,
      99,   100,   158,    54,    99,   100,    40,    20,   101,    91,
      23,     3,    89,    95,     3,     3,    32,    94,    91,     3,
       3,    99,   100,    39,   123,    41,   123,   101,    44,    45,
      46,    49,    50,   132,     3,   435,    91,   136,    93,    23,
     139,   136,    58,   126,   139,   101,   145,   130,   147,   142,
     145,   150,   147,   142,    23,   150,   142,   129,   136,   158,
     157,   139,   134,   238,    93,   137,    92,   136,    93,   314,
     139,   316,   145,    91,   147,   246,    89,   233,    92,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   170,   172,   173,
     174,   227,    91,    91,     3,    89,    89,     3,   278,   202,
     126,    94,    21,   202,   130,     3,   202,   190,   274,   125,
      89,    20,   330,   279,    23,    94,   132,   145,   211,   147,
     227,   204,   150,   206,   233,    23,   235,    23,    58,   238,
     385,    92,   387,   238,   389,   151,    20,   240,    20,    89,
     309,   240,   158,    20,   240,   227,    89,    49,    50,    51,
     238,    94,   255,   169,    33,    34,    35,    36,    89,   238,
     179,   180,   181,   182,    90,   274,    23,   276,    25,    26,
     279,   255,   427,    23,    22,    94,    24,    96,    52,    53,
      89,   197,    21,    89,    91,   211,    93,    89,    97,    31,
     445,    89,    94,    89,    96,    90,    91,    28,    94,    97,
     130,    91,   368,    93,   307,    90,    91,    91,   307,    91,
     330,   307,    30,   382,    91,    27,    91,   233,    93,   235,
     327,    90,    91,    73,    74,    75,   335,    90,    91,   175,
     176,    90,   177,   178,    84,   318,   183,   184,    90,     3,
      91,   344,   351,    90,    90,   344,   351,     3,   344,     6,
     359,   267,    97,   269,   423,    89,    97,     3,   274,   368,
     276,   370,    20,   279,   346,    20,   435,    21,    98,    90,
      90,    95,   375,    21,    91,    97,   375,    90,     3,     4,
       5,     6,     7,     8,     9,    95,    90,    90,    95,    91,
      90,    90,    90,   309,    95,     3,    20,    22,    23,    24,
      97,     3,    95,   412,    95,    95,    31,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    92,    95,   335,
      90,    95,   338,    95,   433,    50,    51,    95,   433,    20,
      95,    97,    95,    95,    95,     3,   352,    97,     3,   211,
     310,    66,    95,   359,    69,   361,    95,    70,    73,    74,
      75,    95,   368,    95,   370,    95,    44,   373,    83,    84,
      85,   433,   326,   352,    89,   134,   382,   333,   346,   136,
      95,   185,   187,   189,    99,   100,    -1,   186,    -1,    -1,
     188,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   412,    -1,   414,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   423,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   431,    -1,    -1,   434,   435,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    22,
      23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    37,    38,    39,    -1,    41,    42,
      -1,    -1,    45,    46,    47,    -1,    -1,    50,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    -1,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    -1,    -1,    92,
      93,    -1,    -1,    -1,    -1,    -1,    99,   100,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    22,    23,    24,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    37,    38,    39,    -1,    41,    42,    -1,    -1,
      45,    46,    47,    -1,    -1,    50,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    -1,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    -1,    -1,    92,    93,    -1,
      -1,    -1,    -1,    -1,    99,   100,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    22,    23,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,    76,
      77,    78,    -1,    80,    81,    -1,    83,    84,    85,    -1,
      -1,    -1,    89,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    99,   100,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    -1,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    37,    38,    39,
      -1,    41,    42,    -1,    -1,    45,    46,    47,    -1,    -1,
      50,    51,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    83,    -1,    85,    -1,    -1,    -1,    89,
      -1,    -1,    92,    -1,    -1,    -1,    -1,    -1,    -1,    99,
     100,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    66,    -1,    -1,
      69,    -1,    -1,    -1,    73,    74,    75,    -1,    22,    23,
      24,    -1,    -1,    -1,    83,    84,    85,    31,    -1,    -1,
      89,    -1,    -1,    -1,    -1,    -1,    95,    -1,    -1,    -1,
      99,   100,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    -1,    66,    -1,    -1,    69,    -1,    -1,    -1,    73,
      74,    75,    -1,    22,    23,    24,    -1,    -1,    -1,    83,
      84,    85,    31,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      -1,    95,    -1,    -1,    -1,    99,   100,    -1,    -1,    -1,
      -1,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    66,    -1,    -1,
      69,    -1,    -1,    -1,    73,    74,    75,    -1,    22,    23,
      24,    -1,    -1,    -1,    83,    84,    85,    31,    -1,    -1,
      89,    -1,    -1,    -1,    -1,    -1,    95,    -1,    -1,    -1,
      99,   100,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    -1,    66,    -1,    -1,    69,    -1,    -1,    -1,    73,
      74,    75,    -1,    22,    23,    24,    -1,    -1,    -1,    83,
      84,    85,    31,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      -1,    95,    -1,    -1,    -1,    99,   100,    -1,    -1,    -1,
      -1,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    66,    -1,    -1,
      69,    -1,    -1,    -1,    73,    74,    75,    -1,    22,    23,
      24,    -1,    -1,    -1,    83,    84,    85,    31,    -1,    -1,
      89,    -1,    -1,    -1,    -1,    -1,    95,    -1,    -1,    -1,
      99,   100,    -1,    -1,    -1,    -1,    50,    51,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,    -1,    22,    23,    24,    -1,    -1,    -1,    83,
      84,    85,    31,    -1,    -1,    89,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    99,   100,    -1,    -1,    -1,
      -1,    50,    51,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    -1,    66,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    83,    -1,    85,    -1,    -1,    -1,
      89,    -1,    -1,    92,    93,    94,    -1,    96,    -1,    -1,
      99,   100,    50,    51,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    -1,    66,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    83,    -1,    85,    -1,    -1,
      -1,    89,    -1,    -1,    92,    93,    94,    -1,    96,    -1,
      -1,    99,   100,    50,    51,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,    66,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    83,    -1,    85,    -1,
      -1,    -1,    89,    -1,    -1,    92,    -1,    94,    -1,    96,
      -1,    -1,    99,   100,    50,    51,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,
      66,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    83,    -1,    85,
      -1,    -1,    -1,    89,    -1,    -1,    92,    -1,    -1,    -1,
      -1,    -1,    -1,    99,   100,    50,    51,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    31,    83,    -1,
      85,    -1,    -1,    -1,    89,    90,     3,     4,     5,     6,
       7,     8,     9,    -1,    99,   100,    50,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    -1,    -1,
      -1,    -1,    66,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    83,
      -1,    85,    -1,    50,    51,    89,    -1,    -1,    92,    -1,
      -1,    22,    23,    24,    -1,    99,   100,    -1,    -1,    66,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    83,    -1,    85,    50,
      51,    -1,    89,    -1,    -1,    -1,    -1,    22,    23,    24,
      -1,    -1,    99,   100,    -1,    66,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    -1,    85,    50,    51,    -1,    89,    -1,
      -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    99,   100,
      -1,    66,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    -1,    -1,    -1,    23,    -1,    -1,    83,    -1,
      85,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,     3,
      -1,    -1,    -1,    -1,    99,   100,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    -1,    80,    81,    82,    -1,    84,    -1,    86,    -1,
      88,    89,    90,    -1,    -1,    -1,    94,    -1,    -1,    -1,
      -1,    65,    -1,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    -1,    80,    81,    82,    -1,
      84,    -1,    86,    -1,    88,    -1,    90,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    65,    -1,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    -1,    80,    81,    82,
      -1,    84,    -1,    86,    65,    88,    89,    90,    -1,    -1,
      -1,    94,    73,    74,    75,    76,    77,    78,    -1,    80,
      81,    -1,    -1,    84,    -1,    65,    87,    -1,    -1,    -1,
      -1,    -1,    93,    73,    74,    75,    76,    77,    78,    -1,
      80,    81,    -1,    -1,    84,    -1,    -1,    87,    -1,    -1,
      -1,    -1,    -1,    93,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      -1,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    -1,    80,    81,    82,    -1,    84,    -1,
      86,    87,    88,    -1,    -1,    65,    92,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    -1,
      80,    81,    82,    -1,    84,    -1,    86,    87,    88,    -1,
      -1,    -1,    92,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    -1,    80,    81,    82,    -1,    84,    -1,    86,
      -1,    88,    65,    90,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    -1,    80,    81,    82,
      -1,    84,    -1,    86,    87,    88,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    65,    -1,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    -1,
      84,    -1,    86,    65,    88,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    -1,    80,    81,
      82,    65,    84,    -1,    86,    -1,    88,    -1,    -1,    73,
      74,    75,    76,    77,    78,    -1,    80,    81,    -1,    -1,
      84,    -1,    -1,    87,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    73,    74,    75,
      76,    77,    78,    65,    80,    81,    -1,    -1,    84,    -1,
      -1,    73,    74,    75,    76,    77,    78,    -1,    80,    81,
      -1,    -1,    84
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
      93,   109,   110,   111,   113,   127,   138,   139,   140,   145,
     148,   180,   114,   111,   113,     3,    90,   115,   133,   141,
     142,   143,    23,    69,    95,   160,   178,   136,   153,    20,
      97,   114,   155,   156,    93,   154,    91,    93,   179,    93,
     125,   157,   157,   157,   178,    90,    21,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,   107,    90,    91,
      90,   104,   141,    23,    69,    95,   160,   178,    89,    94,
     121,     3,    90,   106,   178,   180,     3,   166,   166,   166,
     167,   167,   168,   168,   169,   169,   169,   169,   170,   170,
     171,   172,   173,   174,   175,   180,     6,    94,    96,   118,
     119,   120,   134,   135,    97,   179,    97,   180,    89,   180,
       3,    20,    20,    93,   110,    20,    98,    89,   104,   114,
     144,    90,    90,    91,    95,   160,   178,    23,    69,    95,
     178,    95,    93,   179,    97,    20,    91,    93,    90,    90,
      90,    91,    92,   166,   178,   178,    90,    90,    95,   160,
     178,    69,    95,   178,    95,    90,   141,    23,    69,    95,
     160,   178,    90,    91,    95,    97,    90,   179,     3,   134,
      21,   120,    91,    93,   148,    97,   148,     3,   180,     3,
      20,   133,    79,   143,   178,    95,    95,   178,    95,   179,
     156,    38,   131,   132,   157,   135,   178,    95,   178,    95,
      90,    95,   160,   178,    69,    95,   178,    95,   178,   177,
      20,    95,    93,   118,   134,   148,   148,    90,   148,    95,
      95,    97,    90,    91,    97,    91,    93,    95,    95,   178,
      95,   178,    95,   134,     3,    40,   148,     3,   178,   132,
     178,    93,    95,    95,   148,     3
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

  case 132:
#line 429 "c.y"
    {(yyval.identparam) = new NIdentifierParam(*(yyvsp[(1) - (3)].varvec));
		(yyval.identparam)->setEllipsis(true);

		cout<<(yyval.identparam)->arguments.front()->storageType->type->name<<endl;
	;}
    break;

  case 133:
#line 434 "c.y"
    { (yyval.identparam) = new NIdentifierParam(*(yyvsp[(1) - (1)].varvec)); ;}
    break;

  case 134:
#line 439 "c.y"
    { (yyval.varvec) = new VariableList(); (yyval.varvec)->push_back((yyvsp[(1) - (1)].var_decl)); ;}
    break;

  case 135:
#line 440 "c.y"
    { (yyvsp[(1) - (3)].varvec)->push_back((yyvsp[(3) - (3)].var_decl)); ;}
    break;

  case 136:
#line 447 "c.y"
    {
		 (yyval.var_decl) = new VariableDeclaration(*(yyvsp[(1) - (2)].var_stor), *(yyvsp[(2) - (2)].expr));

		cout<<(yyval.var_decl)->storageType->type->name<<endl;
	;}
    break;

  case 137:
#line 452 "c.y"
    {;}
    break;

  case 138:
#line 453 "c.y"
    {;}
    break;

  case 139:
#line 457 "c.y"
    {;}
    break;

  case 140:
#line 458 "c.y"
    {;}
    break;

  case 141:
#line 459 "c.y"
    {;}
    break;

  case 142:
#line 460 "c.y"
    {;}
    break;

  case 143:
#line 464 "c.y"
    {

		(yyval.stmt) = new IfNode((yyvsp[(3) - (7)].string),(yyvsp[(5) - (7)].token),(yyvsp[(7) - (7)].string));
	;}
    break;

  case 144:
#line 468 "c.y"
    {

		(yyval.stmt) = new IfNode((yyvsp[(3) - (5)].string), (yyvsp[(5) - (5)].string));
	;}
    break;

  case 151:
#line 488 "c.y"
    {;}
    break;

  case 152:
#line 489 "c.y"
    {;}
    break;

  case 153:
#line 490 "c.y"
    {;}
    break;

  case 154:
#line 491 "c.y"
    {;}
    break;

  case 155:
#line 492 "c.y"
    {;}
    break;

  case 156:
#line 493 "c.y"
    {;}
    break;

  case 157:
#line 497 "c.y"
    {(yyval.expr) = new StringNode(*(yyvsp[(1) - (1)].string));delete (yyvsp[(1) - (1)].string);;}
    break;

  case 182:
#line 551 "c.y"
    { (yyval.block) = new BlockNode(); (yyval.block)->statements.push_back((yyvsp[(1) - (1)].stmt)); ;}
    break;

  case 183:
#line 552 "c.y"
    { (yyvsp[(1) - (2)].block)->statements.push_back((yyvsp[(2) - (2)].stmt)); ;}
    break;

  case 190:
#line 569 "c.y"
    { (yyval.ident) = new IdentiferNode(*(yyvsp[(1) - (1)].string)); delete (yyvsp[(1) - (1)].string); ;}
    break;

  case 191:
#line 570 "c.y"
    { (yyval.ident) = new IdentiferNode(*(yyvsp[(1) - (1)].string)); delete (yyvsp[(1) - (1)].string); ;}
    break;

  case 192:
#line 571 "c.y"
    { (yyval.ident) = new IdentiferNode(*(yyvsp[(1) - (1)].string)); delete (yyvsp[(1) - (1)].string); ;}
    break;

  case 193:
#line 572 "c.y"
    { (yyval.ident) = new IdentiferNode(*(yyvsp[(1) - (1)].string)); delete (yyvsp[(1) - (1)].string); ;}
    break;

  case 194:
#line 573 "c.y"
    { (yyval.ident) = new IdentiferNode(*(yyvsp[(1) - (1)].string)); delete (yyvsp[(1) - (1)].string); ;}
    break;

  case 195:
#line 574 "c.y"
    { (yyval.ident) = new IdentiferNode(*(yyvsp[(1) - (1)].string)); delete (yyvsp[(1) - (1)].string); ;}
    break;

  case 196:
#line 575 "c.y"
    { (yyval.ident) = new IdentiferNode(*(yyvsp[(1) - (1)].string)); delete (yyvsp[(1) - (1)].string); ;}
    break;

  case 197:
#line 576 "c.y"
    { (yyval.ident) = new IdentiferNode(*(yyvsp[(1) - (1)].string)); delete (yyvsp[(1) - (1)].string); ;}
    break;

  case 198:
#line 577 "c.y"
    { (yyval.ident) = new IdentiferNode(*(yyvsp[(1) - (1)].string)); delete (yyvsp[(1) - (1)].string); ;}
    break;

  case 199:
#line 578 "c.y"
    { (yyval.ident) = new IdentiferNode(*(yyvsp[(1) - (1)].string)); delete (yyvsp[(1) - (1)].string); ;}
    break;

  case 212:
#line 598 "c.y"
    {(yyval.expr) = new IdentiferNode(*(yyvsp[(1) - (1)].string)); delete (yyvsp[(1) - (1)].string); ;}
    break;

  case 213:
#line 599 "c.y"
    {(yyval.expr) = (yyvsp[(1) - (1)].expr); ;}
    break;

  case 214:
#line 600 "c.y"
    {(yyval.expr) = (yyvsp[(1) - (1)].expr);;}
    break;

  case 215:
#line 601 "c.y"
    {(yyval.expr)=(yyvsp[(2) - (3)].expr);;}
    break;

  case 216:
#line 602 "c.y"
    {;}
    break;

  case 217:
#line 606 "c.y"
    {if(debug)cout<<"---- postfix_expression 1"<<endl;;}
    break;

  case 218:
#line 607 "c.y"
    { ;}
    break;

  case 219:
#line 608 "c.y"
    {(yyval.expr) = new FunctionCallNode(*(yyvsp[(1) - (3)].expr));;}
    break;

  case 220:
#line 609 "c.y"
    {(yyval.expr) = new FunctionCallNode(*(yyvsp[(1) - (4)].expr), *(yyvsp[(3) - (4)].exprvec)) ;;}
    break;

  case 221:
#line 610 "c.y"
    { ;}
    break;

  case 222:
#line 611 "c.y"
    { ;}
    break;

  case 223:
#line 612 "c.y"
    {
		(yyval.expr) = new UnaryOperatorNode(*(yyvsp[(1) - (2)].expr), (yyvsp[(2) - (2)].token), false);
		;}
    break;

  case 224:
#line 615 "c.y"
    {
		(yyval.expr) = new UnaryOperatorNode(*(yyvsp[(1) - (2)].expr), (yyvsp[(2) - (2)].token), false);
		 ;}
    break;

  case 225:
#line 618 "c.y"
    { ;}
    break;

  case 226:
#line 619 "c.y"
    { ;}
    break;

  case 227:
#line 623 "c.y"
    {cout<<"---- unary_expression 1"<<endl;;}
    break;

  case 228:
#line 624 "c.y"
    {
		(yyval.expr) = new UnaryOperatorNode(*(yyvsp[(2) - (2)].expr), (yyvsp[(1) - (2)].token), true);
		;}
    break;

  case 229:
#line 627 "c.y"
    {
		(yyval.expr) = new UnaryOperatorNode(*(yyvsp[(2) - (2)].expr), (yyvsp[(1) - (2)].token), true);
		;}
    break;

  case 230:
#line 630 "c.y"
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

  case 231:
#line 642 "c.y"
    {;}
    break;

  case 232:
#line 643 "c.y"
    {;}
    break;

  case 233:
#line 644 "c.y"
    {;}
    break;

  case 235:
#line 649 "c.y"
    {;}
    break;

  case 236:
#line 653 "c.y"
    {cout<<"---- mult_expression 1"<<endl;;}
    break;

  case 237:
#line 654 "c.y"
    {(yyval.expr) = new BinaryOperatorNode(*(yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].token), *(yyvsp[(3) - (3)].expr));;}
    break;

  case 238:
#line 655 "c.y"
    {(yyval.expr) = new BinaryOperatorNode(*(yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].token), *(yyvsp[(3) - (3)].expr));;}
    break;

  case 239:
#line 656 "c.y"
    {(yyval.expr) = new BinaryOperatorNode(*(yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].token), *(yyvsp[(3) - (3)].expr));;}
    break;

  case 240:
#line 660 "c.y"
    {;}
    break;

  case 241:
#line 661 "c.y"
    {(yyval.expr) = new BinaryOperatorNode(*(yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].token), *(yyvsp[(3) - (3)].expr));;}
    break;

  case 242:
#line 662 "c.y"
    {(yyval.expr) = new BinaryOperatorNode(*(yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].token), *(yyvsp[(3) - (3)].expr));;}
    break;

  case 243:
#line 666 "c.y"
    {;}
    break;

  case 244:
#line 667 "c.y"
    {;}
    break;

  case 245:
#line 668 "c.y"
    {;}
    break;

  case 246:
#line 672 "c.y"
    {;}
    break;

  case 247:
#line 673 "c.y"
    {(yyval.expr) = new BinaryOperatorNode(*(yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].token), *(yyvsp[(3) - (3)].expr));;}
    break;

  case 248:
#line 674 "c.y"
    {(yyval.expr) = new BinaryOperatorNode(*(yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].token), *(yyvsp[(3) - (3)].expr));;}
    break;

  case 249:
#line 675 "c.y"
    {(yyval.expr) = new BinaryOperatorNode(*(yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].token), *(yyvsp[(3) - (3)].expr));;}
    break;

  case 250:
#line 676 "c.y"
    {(yyval.expr) = new BinaryOperatorNode(*(yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].token), *(yyvsp[(3) - (3)].expr));;}
    break;

  case 251:
#line 680 "c.y"
    {;}
    break;

  case 252:
#line 681 "c.y"
    {(yyval.expr) = new ExprBoolNode( (yyvsp[(2) - (3)].token), (yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));
		;}
    break;

  case 253:
#line 683 "c.y"
    {(yyval.expr) = new ExprBoolNode((yyvsp[(2) - (3)].token), (yyvsp[(1) - (3)].expr) , (yyvsp[(3) - (3)].expr));
		;}
    break;

  case 255:
#line 689 "c.y"
    {(yyval.expr) = new BinaryOperatorNode(*(yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].token), *(yyvsp[(3) - (3)].expr));;}
    break;

  case 257:
#line 694 "c.y"
    {(yyval.expr) = new BinaryOperatorNode(*(yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].token), *(yyvsp[(3) - (3)].expr));;}
    break;

  case 259:
#line 699 "c.y"
    {(yyval.expr) = new BinaryOperatorNode(*(yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].token), *(yyvsp[(3) - (3)].expr));;}
    break;

  case 261:
#line 703 "c.y"
    {(yyval.expr) = new BinaryOperatorNode(*(yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].token), *(yyvsp[(3) - (3)].expr));;}
    break;

  case 263:
#line 708 "c.y"
    {(yyval.expr) = new BinaryOperatorNode(*(yyvsp[(1) - (3)].expr), (yyvsp[(2) - (3)].token), *(yyvsp[(3) - (3)].expr));;}
    break;

  case 265:
#line 713 "c.y"
    {;}
    break;

  case 266:
#line 717 "c.y"
    {cout<<"---- assignment_expression 1"<<endl;;}
    break;

  case 267:
#line 718 "c.y"
    {
		cout<<"---- assignment_expression 2"<<endl;
		(yyval.expr) = new AssignmentNode(*(yyvsp[(1) - (3)].expr), (yyvsp[(3) - (3)].expr));
		((AssignmentNode *)(yyval.expr))->setOp((yyvsp[(2) - (3)].token));
	;}
    break;

  case 268:
#line 726 "c.y"
    {;}
    break;

  case 269:
#line 730 "c.y"
    {;}
    break;

  case 270:
#line 731 "c.y"
    {;}
    break;


/* Line 1267 of yacc.c.  */
#line 3152 "c.tab.c"
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


#line 736 "c.y"

#include <stdio.h>

void yyerror(const char *s)
{
	//fflush(stdout);
	printf("*** %s\n", s);
}

