lexer: assembler.c lexer.c
	gcc main.c assembler.c lexer.c -lfl -g -o lexer

lexer.c: lexer.flex
	flex -o lexer.c lexer.flex

clean:
	rm -f lexer.c lexer
