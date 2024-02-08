
%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern int yylex();
extern int yyparse();

int yyerror(const char *s);
int column_count = 0; // Global variable to count column definitions
char *type_v;
int order_completed = 0; // Flag to indicate if the order is completed
%}

%token <str> CREATE TABLE
%token <str> ALTER
%token <str> SELECT
%token <str> FROM
%token <str> WHERE
%token <str> ID
%token <str> STAR
%token <str> INT
%token <str> FLOAT
%token <str> STRING
%token <str> VARCHAR
%token <str> CHAR
%token <str> DECIMAL
%token <str> DATE
%token <str> CONSTRAINT
%token <str> DEFAULT
%token <str> PRIMARY
%token <str> FOREIGN
%token <str> KEY
%token <str> NOT
%token <str> NULL_
%token <str> REFERENCES
%token <str> UNIQUE
%token <str> AUTO_INCREMENT
%token <str> COMMA
%token <str> SEMICOLON
%token <str> DOT
%token <str> LPAREN
%token <str> RPAREN
%token <str> COLUMN
%token <str> AS
%token <str> ON
%token <str> JOIN
%token <str> INNER
%token <str> OUTER
%token <str> LEFT
%token <str> RIGHT
%token <str> FULL
%token <str> ADD
%token <str> MODIFY
%token <str> DROP
%token <str> EQUAL
%token <str> NOT_EQUAL
%token <str> PLUS
%token <str> MINUS
%token <str> MULTIPLY
%token <str> DIVIDE
%token <str> LESS
%token <str> GREATER
%token <str> AND
%token <str> OR
%token <str> TO
%token <str> RENAME
%token <num> NUM

%union {
    char *str;
    int num;
}

%left PLUS MINUS
%left MULTIPLY DIVIDE


%%

start:              statement_list
                    ;



statement_list: 
                    | 
                    statement_list statement SEMICOLON {
                    if (order_completed) { printf("Parsing successful\n");}
                    else {printf("Parsing Failed\n");}
                    order_completed = 0;
                    }
                    ;



statement:          create_table_state
                    | alter_table_state
                    | select_statement
                    ;



create_table_state: CREATE TABLE ID LPAREN column_defs RPAREN {
                    printf("Create table statement for table %s\n", $3);
                    if (column_count > 0){ 
                            order_completed = 1; // Set the flag to indicate order completion
                    }
                    column_count = 0;

                    }
                    ;



alter_table_state: ALTER TABLE ID alter_action_list {
                        printf("*(Alter table statement for table %s)*\n", $3);
                        order_completed = 1; // Set the flag to indicate order completion
                    }
                    ;



alter_action_list:  alter_action
                    | alter_action_list COMMA alter_action
                    ;



alter_action:       ADD COLUMN column_def
                    {
                        printf("Add column to table\n");
                        column_count++;
                    }
                    | MODIFY COLUMN column_def
                    {
                        printf("Modify column in table\n");
                    }
                    | DROP COLUMN ID
                    {
                        printf("Drop column from table\n");
                    }
                    | RENAME COLUMN column_def
                    {
                        printf("Rename column from table\n");
                    }
                    | ALTER COLUMN column_def
                    {
                        printf("Alter column from table");
                    }

                    
                    | ADD CONSTRAINT ID constraint_list ID
                    {
                        printf("Add constraint in table\n");
                    }
                    | ADD CONSTRAINT ID
                    {
                        printf("Add constraint in table\n");
                    }
                    | DROP CONSTRAINT ID
                    {
                        printf("Drop constraint from table\n");
                    }
                    | DROP CONSTRAINT ID constraint_list ID
                    {
                        printf("Drop constraint from table\n");
                    }
                    | RENAME TO ID
                    {
                        printf("Rename column from table\n");
                    }
                    ;



select_statement: 
                    |
                    SELECT select_list FROM table_references where_clause {
                        printf("*(Select statement)*\n");
                        order_completed = 1; // Set the flag to indicate order completion
                    }
                    ;



select_list:        ID_DOT_ID {
                        printf("Selection\n");
                    }
                    | ID_DOT_ID AS ID {
                        printf("Selection\n");
                    }
                    | select_list COMMA ID_DOT_ID{
                        printf("Selection\n");
                    }
                    | select_list COMMA ID_DOT_ID AS ID {
                        printf("Selection\n");
                    }
                    | STAR { printf("Whole Selection\n");}
                    ;


table_references:   ID_ID
                    | table_references COMMA ID_ID
                    | table_references join_clause
                    ;



join_clause:        join_type JOIN ID_ID ON ID_DOT_ID EQUAL ID_DOT_ID
                    | error
                    {
                        return(0);
                    }
                    ;



join_type:          INNER
                    | LEFT OUTER
                    | RIGHT OUTER
                    | FULL OUTER
                    ;



where_clause:       /* Empty */
                    | WHERE condition
                    ;



condition:          comparison_expr
                    | condition OR comparison_expr {
                            printf(" OR\n");
                        }
                    | condition AND comparison_expr {
                            printf(" AND\n");
                        }
                    | LPAREN condition RPAREN {
                            printf("(\n");
                        }
                    ;



comparison_expr:    ID_DOT_ID EQUAL expr {
                    printf(" where\n");
                    }
                    | ID_DOT_ID NOT_EQUAL expr {
                        printf(" where <> \n");
                    }
                    | ID_DOT_ID LESS expr {
                        printf(" where < \n");
                    }
                    | ID_DOT_ID LESS EQUAL expr {
                        printf(" where <=\n");
                    }
                    | ID_DOT_ID GREATER expr {
                        printf(" where >\n");
                    }
                    | ID_DOT_ID GREATER EQUAL expr {
                        printf(" where >=\n");
                    }
                    ;



expr:               ID_DOT_ID
                    | NUM {
                    char num_str[20]; // Adjust the size as per your requirements
                    sprintf(num_str, "%d", $1); // Assuming $1 is the integer value
                    printf("%s\n", num_str);
                    }
                    | STRING {
                        printf("%s\n", $1);
                    }
                    | expr PLUS expr {
                        printf(" + \n");
                    }
                    | expr MINUS expr {
                        printf(" - \n");
                    }
                    | expr MULTIPLY expr {
                        printf(" * \n");
                    }
                    | expr DIVIDE expr {
                        printf(" / \n");
                    }
                    | LPAREN expr RPAREN {
                        printf("()\n");
                    }
                    ;



column_defs:        column_def
                    | column_defs COMMA column_def
                    ;



column_def:         ID type constraint_list
                    {
                        printf("Column %s of type %s\n", $1, type_v);
                        column_count++;
                    }
                    | FOREIGN KEY LPAREN ID RPAREN REFERENCES ID LPAREN ID RPAREN
                    {
                        printf("Foreign key constraint\n");
	                    column_count++;
                    }
                    | error
                    {
                        yyerror("Syntax error in column definition");
                        column_count--;
                        return(0);
                    }
                    ;



type:               INT {type_v = "INT";} 
                    | DECIMAL LPAREN NUM COMMA NUM RPAREN {type_v = "DECIMAL";} 
                    | DATE {type_v = "DATE";} 
                    | VARCHAR LPAREN NUM RPAREN {
                    char buffer[100]; // Assuming a maximum size for the buffer
                    snprintf(buffer, sizeof(buffer), "VARCHAR(%d)", $3); // Convert NUM to string
                    type_v = strdup(buffer); // Store the type as a string
                    }
                    | 
                    CHAR {type_v = "CHAR";} 
                    | error
                    {
                    yyerror("Invalid column type");
                    return(0);
                    }
                    ;



constraint_list:
                    | constraint_list constraint
                    ;



constraint:         PRIMARY KEY
                    {
                        printf("Primary key constraint\n");
                    }
                    | UNIQUE
                    {
                        printf("Unique constraint\n");
                    }
                    | constraint DEFAULT ID
                    {
                        printf("Default constraint with value %s\n", $3);
                    }
                    | AUTO_INCREMENT
                    {
                        printf("Auto increment constraint\n");
                    } NOT NULL_
                    {
                        printf("Not Null constraint\n");
                    }
                    ; 



ID_DOT_ID:          ID
                    {
                        printf("%s\n", $1);
                    }
                    | 
                    ID DOT ID 
                    {
                        printf("%s from %s\n", $3, $1);    
                    } 
                    ;



ID_ID:              ID
                    | 
                    ID ID;

%%



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