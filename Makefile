emulator: lexer.o i4004.o assembler.o main.c
	gcc main.c assembler.o i4004.o lexer.o -lfl -g -o emulator

lexer.o: assembler.o lexer.c
	gcc assembler.o -c lexer.c -o lexer.o

i4004.o: i4004.c
	gcc -c i4004.c -o i4004.o

assembler.o: assembler.c
	gcc -c assembler.c -o assembler.o

lexer.c: lexer.flex
	flex -o lexer.c lexer.flex

clean:
	rm -f lexer.c lexer *.o
