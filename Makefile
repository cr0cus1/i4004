emulator: lexer.o i4004.o assembler.o opcodes.o main.c
	gcc main.c assembler.o i4004.o opcodes.o lexer.o -lfl -g -o emulator

opcodes.o: opcodes.c
	gcc -c opcodes.c -g -o opcodes.o
lexer.o: assembler.o lexer.c
	gcc assembler.o -c lexer.c -g -o lexer.o

i4004.o: i4004.c
	gcc -c i4004.c -g -o i4004.o

assembler.o: assembler.c
	gcc -c assembler.c -o -g assembler.o

lexer.c: lexer.flex
	flex -o -g lexer.c lexer.flex

clean:
	rm -f lexer.c lexer *.o emulator
