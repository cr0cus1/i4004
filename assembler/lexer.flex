%{
#include <stdlib.h>
#include <strings.h>
#include "assembler.h"
%}

%%

[A-Za-z_][A-Za-z0-9_]*, { puts("label!"); }

[A-Za-z_][A-Za-z0-9_]*[ \t]+[0-9]+ { 
                        if(is_command(yytext))
                            puts("legit cmd with arg!");
                        else
                            puts("invalid cmd with arg!");
                        }

[A-Za-z_][A-Za-z0-9_]* { 
                        if(is_command(yytext))
                            puts("legit cmd without arg!");
                        else
                            puts("invalid cmd!");
                        }

[ \t]+ ;
%%
void lexer_start(FILE *input_file) {
    yyin = input_file;
    yylex();

    fclose(yyin);
}
