#include <stdio.h>
#include "assembler.h"

int main(int argc, char **argv) {
    FILE *file;
    file = fopen(argv[1], "r");
    lexer_start(file);
}
