%{
#include <stdlib.h>
#include <strings.h>
#include "assembler.h"
%}

%%

[A-Za-z_][A-Za-z0-9_]*, { puts("label!"); }

[A-Za-z_][A-Za-z0-9_]*[ \t]+[0-9]+ { 
                        parse_line_with_arg(yytext);
                        }

[A-Za-z_][A-Za-z0-9_]* { 
                        parse_line_without_arg(yytext);
                        }

[ \t]+ ;
%%
void lexer_start(const char *line) {
    YY_BUFFER_STATE buffer = yy_scan_string(line); 
    yylex();
    yy_delete_buffer(buffer); 
}
