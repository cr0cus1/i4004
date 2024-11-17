#include <stdio.h>
#include "assembler.h" 
#include "i4004.h" 

int main(int argc, char **argv) {
    FILE *file = fopen(argv[1], "r");
    if(file > 0)
        cpu_run(file);

    fclose(file);
}
