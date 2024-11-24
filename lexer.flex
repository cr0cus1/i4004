%{
#include <stdlib.h>
#include <strings.h>
#include "assembler.h"

char cmd_yylex[10];
char arg_yylex[5];
int is_arg;
%}

%%

[A-Za-z_][A-Za-z0-9_]*, { puts("label!"); }

[A-Za-z_][A-Za-z0-9_]*[ \t]+[0-9]+ { 
                            parse_line_with_arg(yytext, cmd_yylex, arg_yylex);
                            if(is_command(cmd_yylex))
                                is_arg = 1;
                            else {
                                printf("invalid cmd!\n");
                                exit(1);
                            }

                        }

[A-Za-z_][A-Za-z0-9_]* { 
                            if(is_command(yytext)) {
                                strncpy(cmd_yylex, yytext, sizeof(yytext));
                                is_arg = 0;
                            }
                            else {
                                printf("invalid cmd!\n");
                                exit(1);
                            }
                        }

[ \t]+ ;
%%
void lexer_start(const char *line, char *cmd, char *arg) {
    YY_BUFFER_STATE buffer = yy_scan_string(line); 
    yylex();
    if(is_arg) {
        strncpy(cmd, cmd_yylex, sizeof(cmd_yylex));
        strncpy(arg, arg_yylex, sizeof(arg_yylex));
  }
  else {
        strncpy(cmd,cmd_yylex, sizeof(cmd_yylex));
        arg = NULL;
    }
    yy_delete_buffer(buffer); 
}
