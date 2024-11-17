#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "i4004.h"
#include "assembler.h"

void cpu_execute_opcode(Cpu *cpu_unit) {
   // here will be func for assembler(lex);
}

void cpu_init_env(Cpu *cpu_unit) {
    memset(cpu_unit->stack, 0, sizeof(cpu_unit->stack));
    memset(cpu_unit->registers, 0, sizeof(cpu_unit->registers));
    cpu_unit->accumulator = 0;
}

void cpu_run(const char *source_file) {
    Cpu cpu_unit;
    cpu_unit.cpuRunning = 1;
    cpu_unit.cycles_num = 1;
    char file_line[256];
    size_t line_len;

    while(cpu_unit.cpuRunning) {
        if(cpu_unit.cycles_num == 1) {
            cpu_init_env(&cpu_unit);
            cpu_unit.cycles_num += 1;
        }
        else {
            printf("openning file %s!\n", source_file);
            FILE *file = fopen(source_file, "r");
            if(file) {
                while(fgets(file_line, sizeof(file_line), file)) {
                    lexer_start(file_line);
                }
            }
            fclose(file);
            cpu_unit.cpuRunning = 0;
        }
    }
}
