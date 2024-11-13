%{
#include <stdlib.h>
#include <strings.h>
#include "assembler.h"
%}

%%

[A-Za-z_][A-Za-z0-9_]*, { }

[A-Za-z_][A-Za-z0-9_]*[ \t]+[0-9]+ { 
                        }

[A-Za-z_][A-Za-z0-9_]* { 
                        }

[ \t]+ ;
%%
void lexer_start(FILE *input_file) {
    printf("start lexer!\n");

    yyin = input_file;
    yylex();

    fclose(yyin);
}
