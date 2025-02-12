/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "compilador.y"


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "list.h"
#include "bytecode.h"

extern int yylex();
extern int yyparse();
extern FILE* yyin;
extern list *v;


void yyerror(const char* s);

#line 89 "compilador.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_COMPILADOR_TAB_H_INCLUDED
# define YY_YY_COMPILADOR_TAB_H_INCLUDED
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
    T_INT = 258,
    T_REAL = 259,
    T_VAR = 260,
    T_TINTEIRO = 261,
    T_TREAL = 262,
    T_TBOOLEANO = 263,
    T_TRUE = 264,
    T_FALSE = 265,
    T_LEFT = 266,
    T_RIGHT = 267,
    T_CE = 268,
    T_CD = 269,
    T_OR = 270,
    T_AND = 271,
    T_NOT = 272,
    T_EQUAL = 273,
    T_DIF = 274,
    T_MENORE = 275,
    T_MAIORE = 276,
    T_MAIOR = 277,
    T_MENOR = 278,
    T_ATRIB = 279,
    T_PV = 280,
    T_2P = 281,
    T_QUIT = 282,
    T_PLUS = 283,
    T_MINUS = 284,
    T_MULTIPLY = 285,
    T_DIVIDE = 286,
    T_MOD = 287,
    T_PP = 288,
    T_MM = 289,
    T_VOID = 290,
    T_IF = 291,
    T_ELSE = 292,
    T_DO = 293,
    T_WHILE = 294,
    T_FOR = 295,
    T_SWITCH = 296,
    T_CASE = 297,
    T_DEFAULT = 298,
    T_BREAK = 299,
    T_INRANGE = 300,
    T_SCAN = 301,
    T_PRINT = 302,
    T_RETURN = 303
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 20 "compilador.y"

	int ival;
	float fval;
	char *sval;

#line 196 "compilador.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_COMPILADOR_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   223

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  100
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  200

#define YYUNDEFTOK  2
#define YYMAXUTOK   303


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      45,    46,    47,    48
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    50,    50,    50,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    67,    68,    69,    73,
      74,    75,    76,    77,    78,    79,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     116,   117,   118,   119,   120,   121,   123,   124,   125,   126,
     127,   128,   130,   131,   132,   133,   134,   135,   137,   138,
     139,   140,   143,   144,   145,   148,   151,   152,   155,   156,
     157,   160,   163,   166,   169,   172,   173,   174,   177,   180,
     181,   184,   187,   188,   190,   190,   191,   195,   196,   199,
     202
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_INT", "T_REAL", "T_VAR", "T_TINTEIRO",
  "T_TREAL", "T_TBOOLEANO", "T_TRUE", "T_FALSE", "T_LEFT", "T_RIGHT",
  "T_CE", "T_CD", "T_OR", "T_AND", "T_NOT", "T_EQUAL", "T_DIF", "T_MENORE",
  "T_MAIORE", "T_MAIOR", "T_MENOR", "T_ATRIB", "T_PV", "T_2P", "T_QUIT",
  "T_PLUS", "T_MINUS", "T_MULTIPLY", "T_DIVIDE", "T_MOD", "T_PP", "T_MM",
  "T_VOID", "T_IF", "T_ELSE", "T_DO", "T_WHILE", "T_FOR", "T_SWITCH",
  "T_CASE", "T_DEFAULT", "T_BREAK", "T_INRANGE", "T_SCAN", "T_PRINT",
  "T_RETURN", "$accept", "comp", "$@1", "start", "declaracao",
  "atribuicao", "exprINT", "exprREAL", "relacional", "oplogica", "bloco",
  "return", "return_tipo", "entrada", "saida", "cond", "if", "else",
  "switch", "switchBloq", "case", "default", "while", "$@2", "for", "plus",
  "minus", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303
};
# endif

#define YYPACT_NINF (-100)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-95)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -100,    14,    97,  -100,    25,    29,    51,    55,  -100,    54,
      49,    67,    66,   105,   111,  -100,    97,    97,    97,    97,
      97,    52,    97,    97,    73,    97,    97,    97,    17,  -100,
    -100,   115,   141,   143,   120,    97,   129,   134,   181,   190,
     191,  -100,  -100,  -100,  -100,  -100,    10,  -100,  -100,  -100,
     186,  -100,  -100,  -100,  -100,  -100,   101,    65,   145,   159,
     161,    65,     8,   162,    32,   150,   188,    30,   189,   192,
     193,  -100,  -100,   120,   161,   161,   161,   161,   101,    -4,
      78,    65,    65,    65,    65,    65,    65,    65,    65,   161,
     163,   145,   159,  -100,  -100,   137,   146,   110,   123,   149,
     158,   120,   120,   194,    70,   195,   120,    49,    49,   187,
    -100,  -100,    32,    80,    80,  -100,  -100,  -100,  -100,   128,
     140,   128,   140,  -100,  -100,  -100,  -100,   128,   140,   128,
     140,  -100,  -100,  -100,  -100,    89,   161,   161,   161,   161,
     101,  -100,  -100,   145,   159,   101,  -100,  -100,   145,   159,
     101,   145,   159,   101,   145,   159,   101,   145,   159,   101,
     145,   159,    32,    32,    49,  -100,  -100,  -100,  -100,  -100,
      32,  -100,  -100,   160,   196,    80,    80,  -100,  -100,  -100,
    -100,  -100,   198,   200,   164,   160,    49,  -100,   185,   197,
     199,  -100,  -100,    97,    97,  -100,   168,   170,  -100,  -100
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     4,     1,     0,     0,     0,     0,     5,     0,
       0,     0,     0,     0,     0,     3,     4,     4,     4,     4,
       4,    85,     4,     4,     0,     4,     4,     4,     0,    99,
     100,    16,    17,    18,     0,     4,     0,     0,     0,     0,
       0,     6,     7,     8,     9,    15,     0,    83,    11,    10,
       0,    12,    13,    14,    26,    36,    25,     0,    23,    24,
       0,     0,     0,     0,    72,    76,     0,     0,     0,     0,
       0,    87,    86,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      19,     0,    20,    21,    22,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      81,    82,    72,    32,    33,    34,    35,    31,    41,    27,
      42,    28,    43,    29,    44,    30,    45,    46,    37,    47,
      38,    48,    39,    49,    40,     0,     0,     0,     0,     0,
      66,    69,    68,    54,    60,    67,    70,    71,    55,    61,
      65,    53,    59,    64,    52,    58,    62,    50,    56,    63,
      51,    57,    72,    72,     0,    78,    79,    80,    77,    75,
      72,    98,    97,     0,     0,    27,    28,    29,    30,    74,
      73,    84,     0,     0,    92,    90,     0,    96,     0,     0,
       0,    89,    95,     4,     4,    88,     0,     0,    91,    93
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -100,  -100,  -100,   -16,  -100,  -100,   -45,     0,   -28,   -99,
     -41,  -100,  -100,  -100,  -100,   169,  -100,  -100,  -100,    31,
    -100,  -100,  -100,  -100,  -100,  -100,  -100
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    15,    16,    17,    58,    59,    64,   103,
      36,   105,   168,    18,    19,    20,    21,    47,    22,   184,
     185,   190,    23,    24,    25,    26,    27
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      41,    42,    43,    44,    45,    71,    48,    49,   117,    51,
      52,    53,    79,   174,     3,    90,    91,    93,    94,    65,
      54,    55,    56,    35,    81,    82,    83,    84,    57,   113,
     114,   115,   116,   107,    31,   108,   119,   121,   123,   125,
     127,   129,   131,   133,   135,   112,     9,   101,   102,    28,
     143,   148,   151,   154,   157,   160,    32,    80,    29,    30,
      33,    92,    35,   179,   180,    34,   171,   172,    54,    55,
      78,   182,    37,   162,   163,   165,    57,    38,   170,   166,
     167,   120,   122,   124,   126,   128,   130,   132,   134,    46,
     118,   175,   176,   177,   178,   144,   149,   152,   155,   158,
     161,   117,     4,     5,     6,     7,    85,    86,    87,    88,
     138,   139,    50,    54,    55,   150,    39,   136,   137,   138,
     139,    57,    40,   181,     8,    63,    54,    55,   153,    74,
      75,    76,    77,     9,    57,    10,   -94,    11,    12,    60,
      54,    55,   140,    13,    14,   192,   141,   142,    57,    54,
      55,   145,    54,    55,   156,   146,   147,    57,    83,    84,
      57,    54,    55,   159,    54,    61,    78,    62,    66,    57,
      87,    88,    89,    81,    82,    83,    84,   196,   197,    67,
      95,    96,    97,    98,    99,   100,    68,    85,    86,    87,
      88,   136,   137,   138,   139,    69,    70,    73,   104,   106,
     173,   109,   183,   188,   110,   111,   164,   189,   186,   169,
     187,   193,   198,   195,   199,    72,   191,     0,     0,     0,
       0,     0,     0,   194
};

static const yytype_int16 yycheck[] =
{
      16,    17,    18,    19,    20,    46,    22,    23,    12,    25,
      26,    27,    57,   112,     0,    60,    61,     9,    10,    35,
       3,     4,     5,    13,    28,    29,    30,    31,    11,    74,
      75,    76,    77,     3,     5,     5,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    73,    36,    15,    16,    24,
      95,    96,    97,    98,    99,   100,     5,    57,    33,    34,
       5,    61,    13,   162,   163,    11,   107,   108,     3,     4,
       5,   170,     5,   101,   102,     5,    11,    11,   106,     9,
      10,    81,    82,    83,    84,    85,    86,    87,    88,    37,
      12,   136,   137,   138,   139,    95,    96,    97,    98,    99,
     100,    12,     5,     6,     7,     8,    28,    29,    30,    31,
      30,    31,    39,     3,     4,     5,    11,    28,    29,    30,
      31,    11,    11,   164,    27,     5,     3,     4,     5,    28,
      29,    30,    31,    36,    11,    38,    39,    40,    41,    24,
       3,     4,     5,    46,    47,   186,     9,    10,    11,     3,
       4,     5,     3,     4,     5,     9,    10,    11,    30,    31,
      11,     3,     4,     5,     3,    24,     5,    24,    39,    11,
      30,    31,    11,    28,    29,    30,    31,   193,   194,    45,
      18,    19,    20,    21,    22,    23,     5,    28,    29,    30,
      31,    28,    29,    30,    31,     5,     5,    11,    48,    11,
      13,    12,    42,     3,    12,    12,    12,    43,    12,    14,
      12,    26,    44,    14,    44,    46,   185,    -1,    -1,    -1,
      -1,    -1,    -1,    26
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    50,    51,     0,     5,     6,     7,     8,    27,    36,
      38,    40,    41,    46,    47,    52,    53,    54,    62,    63,
      64,    65,    67,    71,    72,    73,    74,    75,    24,    33,
      34,     5,     5,     5,    11,    13,    59,     5,    11,    11,
      11,    52,    52,    52,    52,    52,    37,    66,    52,    52,
      39,    52,    52,    52,     3,     4,     5,    11,    55,    56,
      24,    24,    24,     5,    57,    52,    39,    45,     5,     5,
       5,    59,    64,    11,    28,    29,    30,    31,     5,    55,
      56,    28,    29,    30,    31,    28,    29,    30,    31,    11,
      55,    55,    56,     9,    10,    18,    19,    20,    21,    22,
      23,    15,    16,    58,    48,    60,    11,     3,     5,    12,
      12,    12,    57,    55,    55,    55,    55,    12,    12,    55,
      56,    55,    56,    55,    56,    55,    56,    55,    56,    55,
      56,    55,    56,    55,    56,    55,    28,    29,    30,    31,
       5,     9,    10,    55,    56,     5,     9,    10,    55,    56,
       5,    55,    56,     5,    55,    56,     5,    55,    56,     5,
      55,    56,    57,    57,    12,     5,     9,    10,    61,    14,
      57,    59,    59,    13,    58,    55,    55,    55,    55,    58,
      58,    59,    58,    42,    68,    69,    12,    12,     3,    43,
      70,    68,    59,    26,    26,    14,    52,    52,    44,    44
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    49,    51,    50,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    53,    53,    53,    54,
      54,    54,    54,    54,    54,    54,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    56,    56,    56,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    58,    58,    58,    59,    60,    60,    61,    61,
      61,    62,    63,    64,    65,    66,    66,    66,    67,    68,
      68,    69,    70,    70,    72,    71,    71,    73,    73,    74,
      75
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     0,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     4,
       4,     4,     4,     3,     3,     3,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     0,     3,     3,     4,     0,     2,     1,     1,
       1,     4,     4,     2,     6,     0,     2,     2,     8,     2,
       1,     5,     0,     4,     0,     7,     7,     5,     5,     2,
       2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
#line 50 "compilador.y"
      {header();}
#line 1512 "compilador.tab.c"
    break;

  case 5:
#line 54 "compilador.y"
                                        { final();list_delete(v); exit(0); }
#line 1518 "compilador.tab.c"
    break;

  case 16:
#line 67 "compilador.y"
                                                                { setTipo(v,(yyvsp[-1].sval),(yyvsp[0].sval));printf("%s",(yyvsp[0].sval));}
#line 1524 "compilador.tab.c"
    break;

  case 17:
#line 68 "compilador.y"
                                                                                { setTipo(v,(yyvsp[-1].sval),(yyvsp[0].sval));}
#line 1530 "compilador.tab.c"
    break;

  case 18:
#line 69 "compilador.y"
                                                                        { setTipo(v,(yyvsp[-1].sval),(yyvsp[0].sval));}
#line 1536 "compilador.tab.c"
    break;

  case 19:
#line 73 "compilador.y"
                                                { setTipo(v,(yyvsp[-3].sval),(yyvsp[-2].sval));setVali(v,(yyvsp[0].ival),(yyvsp[-2].sval)); istore(v,(yyvsp[-2].sval));}
#line 1542 "compilador.tab.c"
    break;

  case 20:
#line 74 "compilador.y"
                                                                { setTipo(v,(yyvsp[-3].sval),(yyvsp[-2].sval));setValf(v,(yyvsp[0].fval),(yyvsp[-2].sval)); istore(v,(yyvsp[-2].sval));}
#line 1548 "compilador.tab.c"
    break;

  case 21:
#line 75 "compilador.y"
                                                                { setTipo(v,(yyvsp[-3].sval),(yyvsp[-2].sval));setValv(v,(yyvsp[0].sval),(yyvsp[-2].sval));}
#line 1554 "compilador.tab.c"
    break;

  case 22:
#line 76 "compilador.y"
                                                                { setTipo(v,(yyvsp[-3].sval),(yyvsp[-2].sval));setValv(v,(yyvsp[0].sval),(yyvsp[-2].sval));}
#line 1560 "compilador.tab.c"
    break;

  case 23:
#line 77 "compilador.y"
                                                                        { setVali(v,(yyvsp[0].ival),(yyvsp[-2].sval));istore(v,(yyvsp[-2].sval));}
#line 1566 "compilador.tab.c"
    break;

  case 24:
#line 78 "compilador.y"
                                                                        { setValf(v,(yyvsp[0].fval),(yyvsp[-2].sval));istore(v,(yyvsp[-2].sval));}
#line 1572 "compilador.tab.c"
    break;

  case 25:
#line 79 "compilador.y"
                                                                        { setValv(v,(yyvsp[0].sval),(yyvsp[-2].sval));atribV(v,(yyvsp[-2].sval),(yyvsp[0].sval));}
#line 1578 "compilador.tab.c"
    break;

  case 26:
#line 84 "compilador.y"
                                                                                {bipush((yyvsp[0].ival));}
#line 1584 "compilador.tab.c"
    break;

  case 27:
#line 85 "compilador.y"
                                                                        {(yyval.ival)=(yyvsp[-2].ival)+(yyvsp[0].ival); iadd();}
#line 1590 "compilador.tab.c"
    break;

  case 28:
#line 86 "compilador.y"
                                                                        {(yyval.ival)=(yyvsp[-2].ival)-(yyvsp[0].ival); isub();}
#line 1596 "compilador.tab.c"
    break;

  case 29:
#line 87 "compilador.y"
                                                                {(yyval.ival)=(yyvsp[-2].ival)*(yyvsp[0].ival); imul();}
#line 1602 "compilador.tab.c"
    break;

  case 30:
#line 88 "compilador.y"
                                                                        {(yyval.ival)=(yyvsp[-2].ival)/(yyvsp[0].ival); idiv();}
#line 1608 "compilador.tab.c"
    break;

  case 31:
#line 89 "compilador.y"
                                                                        {(yyval.ival)=(yyvsp[-1].ival);}
#line 1614 "compilador.tab.c"
    break;

  case 32:
#line 90 "compilador.y"
                                                                        {iload(v,(yyvsp[-2].sval));(yyval.ival)=atoi(getValVar(v,(yyvsp[-2].sval)))+(yyvsp[0].ival);iadd();}
#line 1620 "compilador.tab.c"
    break;

  case 33:
#line 91 "compilador.y"
                                                                        {iload(v,(yyvsp[-2].sval));(yyval.ival)=atoi(getValVar(v,(yyvsp[-2].sval)))-(yyvsp[0].ival);isub();}
#line 1626 "compilador.tab.c"
    break;

  case 34:
#line 92 "compilador.y"
                                                                        {iload(v,(yyvsp[-2].sval));(yyval.ival)=atoi(getValVar(v,(yyvsp[-2].sval)))*(yyvsp[0].ival);imul();}
#line 1632 "compilador.tab.c"
    break;

  case 35:
#line 93 "compilador.y"
                                                                        {iload(v,(yyvsp[-2].sval));(yyval.ival)=atoi(getValVar(v,(yyvsp[-2].sval)))*(yyvsp[0].ival);idiv();}
#line 1638 "compilador.tab.c"
    break;

  case 36:
#line 96 "compilador.y"
                                                                {ldcf((yyvsp[0].fval));}
#line 1644 "compilador.tab.c"
    break;

  case 37:
#line 97 "compilador.y"
                                                        {(yyval.fval)=(yyvsp[-2].fval)+(yyvsp[0].fval);fadd();}
#line 1650 "compilador.tab.c"
    break;

  case 38:
#line 98 "compilador.y"
                                                {(yyval.fval)=(yyvsp[-2].fval)-(yyvsp[0].fval);fsub();}
#line 1656 "compilador.tab.c"
    break;

  case 39:
#line 99 "compilador.y"
                                                {(yyval.fval)=(yyvsp[-2].fval)*(yyvsp[0].fval);fmul();}
#line 1662 "compilador.tab.c"
    break;

  case 40:
#line 100 "compilador.y"
                                                {(yyval.fval)=(yyvsp[-2].fval)/(yyvsp[0].fval);fdiv();}
#line 1668 "compilador.tab.c"
    break;

  case 41:
#line 101 "compilador.y"
                                                        {(yyval.fval)=(yyvsp[-1].fval);}
#line 1674 "compilador.tab.c"
    break;

  case 42:
#line 102 "compilador.y"
                                                        {(yyval.fval)=(yyvsp[-2].ival)+(yyvsp[0].fval);fadd();}
#line 1680 "compilador.tab.c"
    break;

  case 43:
#line 103 "compilador.y"
                                                        {(yyval.fval)=(yyvsp[-2].ival)-(yyvsp[0].fval);fsub();}
#line 1686 "compilador.tab.c"
    break;

  case 44:
#line 104 "compilador.y"
                                                {(yyval.fval)=(yyvsp[-2].ival)*(yyvsp[0].fval);fmul();}
#line 1692 "compilador.tab.c"
    break;

  case 45:
#line 105 "compilador.y"
                                                        {(yyval.fval)=(yyvsp[-2].ival)/(yyvsp[0].fval);fdiv();}
#line 1698 "compilador.tab.c"
    break;

  case 46:
#line 106 "compilador.y"
                                                        {(yyval.fval)=(yyvsp[-2].fval)+(yyvsp[0].ival);fadd();}
#line 1704 "compilador.tab.c"
    break;

  case 47:
#line 107 "compilador.y"
                                                        {(yyval.fval)=(yyvsp[-2].fval)-(yyvsp[0].ival);fsub();}
#line 1710 "compilador.tab.c"
    break;

  case 48:
#line 108 "compilador.y"
                                                {(yyval.fval)=(yyvsp[-2].fval)*(yyvsp[0].ival);fmul();}
#line 1716 "compilador.tab.c"
    break;

  case 49:
#line 109 "compilador.y"
                                                        {(yyval.fval)=(yyvsp[-2].fval)/(yyvsp[0].ival);fdiv();}
#line 1722 "compilador.tab.c"
    break;

  case 50:
#line 116 "compilador.y"
                                  {ifiti(v,(yyvsp[-2].sval),(yyvsp[0].ival));}
#line 1728 "compilador.tab.c"
    break;

  case 51:
#line 117 "compilador.y"
                                {ifgti(v,(yyvsp[-2].sval),(yyvsp[0].ival));}
#line 1734 "compilador.tab.c"
    break;

  case 52:
#line 118 "compilador.y"
                                 {ifiei(v,(yyvsp[-2].sval),(yyvsp[0].ival));}
#line 1740 "compilador.tab.c"
    break;

  case 53:
#line 119 "compilador.y"
                                 {ifgei(v,(yyvsp[-2].sval),(yyvsp[0].ival));}
#line 1746 "compilador.tab.c"
    break;

  case 54:
#line 120 "compilador.y"
                                {ifnei(v,(yyvsp[-2].sval),(yyvsp[0].ival));}
#line 1752 "compilador.tab.c"
    break;

  case 55:
#line 121 "compilador.y"
                              {ifeqi(v,(yyvsp[-2].sval),(yyvsp[0].ival));}
#line 1758 "compilador.tab.c"
    break;

  case 56:
#line 123 "compilador.y"
                                {ifitf(v,(yyvsp[-2].sval),(yyvsp[0].fval));}
#line 1764 "compilador.tab.c"
    break;

  case 57:
#line 124 "compilador.y"
                                 {ifgtf(v,(yyvsp[-2].sval),(yyvsp[0].fval));}
#line 1770 "compilador.tab.c"
    break;

  case 58:
#line 125 "compilador.y"
                                  {ifief(v,(yyvsp[-2].sval),(yyvsp[0].fval));}
#line 1776 "compilador.tab.c"
    break;

  case 59:
#line 126 "compilador.y"
                                  {ifgef(v,(yyvsp[-2].sval),(yyvsp[0].fval));}
#line 1782 "compilador.tab.c"
    break;

  case 60:
#line 127 "compilador.y"
                                 {ifnef(v,(yyvsp[-2].sval),(yyvsp[0].fval));}
#line 1788 "compilador.tab.c"
    break;

  case 61:
#line 128 "compilador.y"
                               {ifeqf(v,(yyvsp[-2].sval),(yyvsp[0].fval));}
#line 1794 "compilador.tab.c"
    break;

  case 62:
#line 130 "compilador.y"
                             {ifitv(v,(yyvsp[-2].sval),(yyvsp[0].sval));}
#line 1800 "compilador.tab.c"
    break;

  case 63:
#line 131 "compilador.y"
                               {ifgtv(v,(yyvsp[-2].sval),(yyvsp[0].sval));}
#line 1806 "compilador.tab.c"
    break;

  case 64:
#line 132 "compilador.y"
                               {ifiev(v,(yyvsp[-2].sval),(yyvsp[0].sval));}
#line 1812 "compilador.tab.c"
    break;

  case 65:
#line 133 "compilador.y"
                               {ifgev(v,(yyvsp[-2].sval),(yyvsp[0].sval));}
#line 1818 "compilador.tab.c"
    break;

  case 66:
#line 134 "compilador.y"
                              {ifnev(v,(yyvsp[-2].sval),(yyvsp[0].sval));}
#line 1824 "compilador.tab.c"
    break;

  case 67:
#line 135 "compilador.y"
                            {ifeqv(v,(yyvsp[-2].sval),(yyvsp[0].sval));}
#line 1830 "compilador.tab.c"
    break;

  case 68:
#line 137 "compilador.y"
                               { }
#line 1836 "compilador.tab.c"
    break;

  case 69:
#line 138 "compilador.y"
                              { }
#line 1842 "compilador.tab.c"
    break;

  case 70:
#line 139 "compilador.y"
                            { }
#line 1848 "compilador.tab.c"
    break;

  case 71:
#line 140 "compilador.y"
                             { }
#line 1854 "compilador.tab.c"
    break;

  case 78:
#line 155 "compilador.y"
                   {printf("RETURN VARIAVEL \n"); }
#line 1860 "compilador.tab.c"
    break;

  case 79:
#line 156 "compilador.y"
                 {printf("RETURN TRUE\n"); }
#line 1866 "compilador.tab.c"
    break;

  case 80:
#line 157 "compilador.y"
                  {printf("RETURN FALSE\n"); }
#line 1872 "compilador.tab.c"
    break;

  case 81:
#line 160 "compilador.y"
                                     {printf("SCAN LIDO\n"); }
#line 1878 "compilador.tab.c"
    break;

  case 82:
#line 163 "compilador.y"
                                         {printf("PRINT LIDO\n"); }
#line 1884 "compilador.tab.c"
    break;

  case 84:
#line 169 "compilador.y"
                                                  {gotol(); printLabelInvertido(); }
#line 1890 "compilador.tab.c"
    break;

  case 86:
#line 173 "compilador.y"
                       {printf("ELSE LIDO\n"); }
#line 1896 "compilador.tab.c"
    break;

  case 87:
#line 174 "compilador.y"
                        {printf("ELSE LIDO\n");}
#line 1902 "compilador.tab.c"
    break;

  case 88:
#line 177 "compilador.y"
                                                                   {printf("SWITCH LIDO\n");}
#line 1908 "compilador.tab.c"
    break;

  case 91:
#line 184 "compilador.y"
                                      {printf("CASE LIDO\n");}
#line 1914 "compilador.tab.c"
    break;

  case 93:
#line 188 "compilador.y"
                                       {printf("DEFAULT LIDO\n");}
#line 1920 "compilador.tab.c"
    break;

  case 94:
#line 190 "compilador.y"
       {printLabelWhile();}
#line 1926 "compilador.tab.c"
    break;

  case 95:
#line 190 "compilador.y"
                                                                             {gotolW();printLabel();}
#line 1932 "compilador.tab.c"
    break;

  case 96:
#line 191 "compilador.y"
                                                                {printf("DO-WHILE LIDO\n");}
#line 1938 "compilador.tab.c"
    break;

  case 97:
#line 195 "compilador.y"
                                       {printf("FOR LIDO\n");}
#line 1944 "compilador.tab.c"
    break;

  case 98:
#line 196 "compilador.y"
                                            {printf("FOR LIDO\n");}
#line 1950 "compilador.tab.c"
    break;

  case 99:
#line 199 "compilador.y"
                  {plusplus(v,(yyvsp[-1].sval));}
#line 1956 "compilador.tab.c"
    break;

  case 100:
#line 202 "compilador.y"
                  {printf("VAR-- LIDO\n"); }
#line 1962 "compilador.tab.c"
    break;


#line 1966 "compilador.tab.c"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 205 "compilador.y"




int main(argc, argv) 
	int argc;
	char **argv;
{
	v = list_create();
	++argv, --argc;

	if(argc >0)
		yyin = fopen(argv[0],"r");
	else
		yyin = stdin;

	do {
		yyparse();
	} while(!feof(yyin));

	list_delete(v);

	return 0;
}

void yyerror(const char* s) {
	fprintf(stderr, "Erro de análise (sintática): %s\n", s);
	exit(1);
}
