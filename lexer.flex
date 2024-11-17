%{
#include <stdlib.h>
#include <strings.h>
#include "assembler.h"

char cmd_yylex[5];
%}

%%

[A-Za-z_][A-Za-z0-9_]*, { puts("label!"); }

[A-Za-z_][A-Za-z0-9_]*[ \t]+[0-9]+ { 
                            parse_line_with_arg(yytext);
                        }

[A-Za-z_][A-Za-z0-9_]* { 
                            if(is_command(yytext)) {
                                strcpy(cmd_yylex, yytext);
                            }
                        }

[ \t]+ ;
%%
void lexer_start(const char *line, char *cmd, char *arg) {
    YY_BUFFER_STATE buffer = yy_scan_string(line); 
    yylex();
    strcpy(cmd,cmd_yylex);
    yy_delete_buffer(buffer); 
}
