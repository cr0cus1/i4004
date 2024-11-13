#include "assembler.h"
#include <string.h>


int is_command(const char *cmd) {
    for(int i = 0;;i++) {
        if(!strcmp(cmds_names[i], cmd)) {
            return 1;
            break;
        }
    }
    return 0;
}
