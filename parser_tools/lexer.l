%{
#include "parser.tab.h"
#include <string.h>
%}

%option noyywrap

%%

[ \t\n]                             ;/* Skip whitespace and newline characters */
INT                                 {return INT; }
FLOAT                               {return FLOAT; }
VARCHAR                             {return VARCHAR; }
CHAR                                {return CHAR; }
DECIMAL                             {return DECIMAL;}
DATE                                {return DATE;}
CREATE		                        {return CREATE;}
SELECT		                        {return SELECT;}
ALTER		                        {return ALTER;}
TABLE		                        {return TABLE;}
FROM		                        {return FROM;}
WHERE		                        {return WHERE;}
CONSTRAINT	                        {return CONSTRAINT;}
DEFAULT		                        {return DEFAULT;}
PRIMARY                             {return PRIMARY;}
FOREIGN                             {return FOREIGN;}
KEY	 	                            {return KEY;}
NOT		                            {return NOT;}
NULL                                {return NULL_;}
UNIQUE                              {return UNIQUE;}
TO                                  {return TO;}
REFERENCES                          {return REFERENCES;}
RENAME                              {return RENAME;}
AUTO_INCREMENT                      {return AUTO_INCREMENT; }
","                                 {return COMMA; }
";"                                 {return SEMICOLON; }
"("                                 {return LPAREN; }
")"                                 {return RPAREN; }
"="                                 {return EQUAL;}
"<>"                                {return NOT_EQUAL;}
"+"                                 {return PLUS;}
"-"                                 {return MINUS;}
"*"                                 {return MULTIPLY;}
"/"                                 {return DIVIDE;}
"<"                                 {return LESS;}
">"                                 {return GREATER;}
"STAR"                              {return STAR;}
"AND"                               {return AND;}
"OR"                                {return OR;}
"."                                 {return DOT;}
AS		                            {return AS;}
ON		                            {return ON;}
JOIN	                        	{return JOIN;}
INNER		                        {return INNER;}
OUTER		                        {return OUTER;}
LEFT		                        {return LEFT;}
RIGHT		                        {return RIGHT;}
FULL		                        {return FULL;}
ADD		                            {return ADD;}
MODIFY		                        {return MODIFY;}
DROP		                        {return DROP;}
COLUMN                              {return COLUMN;}
[a-zA-Z][a-zA-Z0-9_]*               {yylval.str = strdup(yytext); return ID; }
-?[0-9]+	                        {yylval.num = atoi(yytext); return NUM; } 
\"[^\"\n]*\"                        {return STRING; }
\'[^\"\n]*\'                        {return STRING; }

.                                   {/* Ignore other characters */ }

%%

//gcc -o sql_parser lex.yy.c parser.tab.c