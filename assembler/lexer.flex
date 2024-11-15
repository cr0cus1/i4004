%{
#include <stdlib.h>
#include <strings.h>
#include "assembler.h"
%}

%%

[A-Za-z_][A-Za-z0-9_]*, { puts("label!"); }

[A-Za-z_][A-Za-z0-9_]*[ \t]+[0-9]+ { 
                            //parse_line(yytext)
                            puts("cmd with arg!");
                        }

[A-Za-z_][A-Za-z0-9_]* { 
                            puts("cmd without arg!");
                            //if(is_command(yytext))
                            //    return_str(yytext);
                        }

[ \t]+ ;
%%
void lexer_start(FILE *input_file) {
    printf("start lexer!\n");

    yyin = input_file;
    yylex();

    fclose(yyin);
}
