#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "i4004.h"
#include "assembler.h"
#include "opcodes.h"

void cpu_execute_opcode(Cpu *cpu_unit, char *cmd, char *arg);

void print_binary_representation(int num) {
    int bits_num = sizeof(num) * 2;
    printf("\t");
    for(int i = 7; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
    }
    printf(" (dec: %d)", num);
}

void print_cpu_env(Cpu *cpu_unit) {
    printf("\n");
    printf("ACCUMULATOR: ");
    print_binary_representation(cpu_unit->accumulator);
    printf("\n");
    printf("CARRY-BIT: ");
    print_binary_representation(cpu_unit->carry_bit);
    printf("\n");
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
    char cmd[5];
    char arg[5];

    while(cpu_unit.cpuRunning) {
        if(cpu_unit.cycles_num == 1) {
            cpu_init_env(&cpu_unit);
            cpu_unit.cycles_num += 1;
        }
        else {
            FILE *file = fopen(source_file, "r");
            if(file) {
                while(fgets(file_line, sizeof(file_line), file)) {
                    memset(cmd, 0, sizeof(cmd));
                    memset(arg, 0, sizeof(arg));

                    file_line[strlen(file_line)-1] = '\0';
                    lexer_start(file_line, cmd, arg);
                    cpu_execute_opcode(&cpu_unit, cmd, arg);
                }
            }
            fclose(file);
            cpu_unit.cpuRunning = 0;
        }
    }
    if(!cpu_unit.cpuRunning)
        print_cpu_env(&cpu_unit);
}

void cpu_execute_opcode(Cpu *cpu_unit, char *cmd, char *arg) {
    if(!strcmp(cmd, "IAC"))
        opcode_iac(cpu_unit);
    else if(!strcmp(cmd, "JCN"))
        opcode_jcn(cpu_unit, arg);
    else if(!strcmp(cmd, "CMC"))
        opcode_cmc(cpu_unit);
    else if(!strcmp(cmd, "CMA"))
        opcode_cma(cpu_unit);
    else if(!strcmp(cmd, "CLB"))
        opcode_clb(cpu_unit);
    else if(!strcmp(cmd, "RAL"))
        opcode_ral(cpu_unit);
    else if(!strcmp(cmd, "RAR"))
        opcode_rar(cpu_unit);
    else if(!strcmp(cmd, "TCC"))
        opcode_tcc(cpu_unit);
    else if(!strcmp(cmd, "DAC"))
        opcode_dac(cpu_unit);
    else if(!strcmp(cmd, "TCS"))
        opcode_tcs(cpu_unit);
    else if(!strcmp(cmd, "STC"))
        opcode_stc(cpu_unit);
}
