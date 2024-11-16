lexer: lexer.flex assembler.c lexer.c
	gcc main.c lexer.c -lfl -o lexer

lexer.c: 
	flex -o lexer.c lexer.flex

clean:
	rm lexer.c lexer
