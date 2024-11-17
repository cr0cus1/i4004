#ifndef ASSEMBLER_H_
#define ASSEMBLER_H_

extern const char *cmds_names[];

int is_command(const char *cmd);
void parse_line_with_arg(const char *line, char *cmd, char *arg);
void exec_cmd();
void label_code();
void lexer_start(const char *line, char *cmd, char *arg);
const char *return_str(const char *str);

#endif
