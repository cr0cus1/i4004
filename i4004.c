#include <stdio.h>
#include "i4004.h"

void cpu_run() {
    Cpu cpu_unit;
    cpu_unit.cpuRunning = 1;

    while(cpu_unit.cpuRunning) {
        if(!cpu_unit.cpuRunning)
            break;
        else {
            // read
        }
    }
}
