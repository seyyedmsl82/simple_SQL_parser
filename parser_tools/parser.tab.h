
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

/* Line 1676 of yacc.c  */
#line 71 "parser.y"

    char *str;
    int num;



/* Line 1676 of yacc.c  */
#line 116 "parser.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


