#include "assembler.h"
#include <string.h>
#include <stdio.h>

const char *cmds_names[] = {
    "JCN", "FIM", "SRC", "FIN", "JIN",
    "JUN", "JMS", "INC", "ISZ", "ADD",
    "SUB", "LD", "XCH", "BBL", "LDM",
    "WRM", "WMP", "WRR", "WR_phi", "WR1",
    "WR2", "WR3", "SBM", "RDM", "RDR",
    "ADM", "RD_phi", "RD1", "RD2", "RD3",
    "CLB", "CLC", "IAC", "CMC", "CMA",
    "RAL", "RAR", "TCC", "DAC", "TCS",
    "STC", "DAA", "KBP", "DCL",
    NULL
};

int is_command(const char *cmd) {
    for(int i = 0; i < 44;i++) {
        if(!strcmp(cmds_names[i], cmd)) {
            return 1;
        }
    }
    return 0;
}

void parse_line_with_arg(const char *line, char *cmd, char *arg) {
    int i;
    memset(cmd, 0, sizeof(cmd));
    memset(arg, 0, sizeof(arg));
    for(i = 0; line[i] != ' '; i++)
        cmd[i] = line[i];
    
    i++;

    for(int j = 0; line[i] != '\0'; j++, i++)
        arg[j] = line[i];
}
