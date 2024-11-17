#include <stdio.h>
#include <string.h>
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

void cpu_run() {
    Cpu cpu_unit;
    cpu_unit.cpuRunning = 1;
    cpu_unit.cycles_num = 1;

    while(cpu_unit.cpuRunning) {
        if(cpu_unit.cycles_num == 1) {
            cpu_init_env(&cpu_unit);
            cpu_unit.cycles_num += 1;
        }
        else {
//                cpu_execute_opcode(&cpu_unit);
        }
    }
}
