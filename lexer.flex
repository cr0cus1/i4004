%{
#include <stdlib.h>
#include <strings.h>
#include "assembler.h"
%}

%%

[A-Za-z_][A-Za-z0-9_]*, { // code for labels }

[A-Za-z_][A-Za-z0-9_]*[ \t]+[0-9]+ { 
                        // code for opcodes with parameters 
                        }

[A-Za-z_][A-Za-z0-9_]* { 
                        // code for opcodes without parameters
                        }

[ \t]+ ;
%%
void lexer_start(FILE *input_file) {
    printf("start lexer!\n");

    yyin = input_file;
    yylex();

    fclose(yyin);
}
