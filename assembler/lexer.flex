%{
#include <stdlib.h>
#include <strings.h>
#include "assembler.h"
%}

%%

[A-Za-z_][A-Za-z0-9_]*, { puts("label!"); }

[A-Za-z_][A-Za-z0-9_]*[ \t]+[0-9]+ { 
                        }

[A-Za-z_][A-Za-z0-9_]* { 
                        }

[ \t]+ ;
%%
void lexer_start(FILE *input_file) {
    yyin = input_file;
    yylex();

    fclose(yyin);
}
