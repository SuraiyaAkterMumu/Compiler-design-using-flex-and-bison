
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUMBER = 258,
     VARIABLE = 259,
     INT = 260,
     FLOAT = 261,
     CHARACTER = 262,
     IF = 263,
     EF = 264,
     FOR = 265,
     PF = 266,
     ENDED = 267,
     COLON = 268,
     SWITCH = 269,
     DEFAULT = 270,
     VALUE = 271,
     ASSIGN = 272,
     INC = 273,
     DEC = 274,
     LT = 275,
     GT = 276,
     EQ = 277,
     BSIEQ = 278,
     KOMEQ = 279,
     START = 280,
     UP = 281,
     DOWN = 282,
     CASE = 283,
     WHILE = 284,
     STRING = 285,
     DOUBLE = 286,
     DEF = 287,
     HEADER = 288,
     IMPORT = 289,
     SIN = 290,
     COS = 291,
     TAN = 292,
     LN = 293,
     LOG10 = 294,
     ODDEVEN = 295,
     FACT = 296,
     IFX = 297,
     ELSE = 298
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 86 "hi.y"

    char *ch;
	char c;
    int dim;
    int me;
	double floating;



/* Line 1676 of yacc.c  */
#line 105 "hi.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


