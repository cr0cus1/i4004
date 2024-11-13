%{
#include <stdlib.h>
#include <strings.h>
#include "assembler.h"
%}

%%

[A-Za-z_][A-Za-z0-9_]*, { printf("it's a label\n!") }

[A-Za-z_][A-Za-z0-9_]*[ \t]+[0-9]+ { 
                            printf("it's a cmd with arg!\n");
                        }

[A-Za-z_][A-Za-z0-9_]* { 
                            if(is_command(yytext))
                                return_str(yytext);
                        }

[ \t]+ ;
%%
void lexer_start(FILE *input_file) {
    printf("start lexer!\n");

    yyin = input_file;
    yylex();

    fclose(yyin);
}
