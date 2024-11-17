#ifndef I4004_H_
#define I4004_H_

typedef struct Cpu {
    int stack[3];
    int registers[16];
    int accumulator;
    int cycles_num;
    int cpuRunning;
} Cpu;

void cpu_run(const char *source_file);
void cpu_init_env(Cpu *cpu_unit);
void cpu_reset_env();
void cpu_execute_opcode(Cpu *cpu_unit);

#endif
