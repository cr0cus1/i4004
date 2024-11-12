#ifndef I4004_H_
#define I4004_H_

typedef struct Cpu{
    int stack[3];
    int registers[16];
    int accumulator;
    int cycles_num;
    int cpuRunning;
} Cpu;

void cpu_run();
int cpu_init_env();
void cpu_reset_env();

#endif
