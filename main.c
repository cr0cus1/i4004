#include <stdio.h>
#include "assembler.h" 
#include "i4004.h" 

int main(int argc, char **argv) {
    cpu_run(argv[1]);
}
