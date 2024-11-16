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
    printf("%s\n", cmd);
    for(int i = 0;;i++) {
        if(strcmp(cmds_names[i], cmd) == 0) {
            return 1;
        }
    }
    return 0;
}
