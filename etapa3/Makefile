etapa3: y.tab.c lex.yy.c hash.o utils.o tree.o
	gcc -o etapa3 lex.yy.c y.tab.c hash.o utils.o tree.o

lex.yy.c: scanner.l
	flex --header-file=lex.yy.h scanner.l

y.tab.c: parser.y
	bison -d -y parser.y

utils.o: utils.c
	gcc -c utils.c

tree.o: tree.c
	gcc -c tree.c

hash.o: hash.c
	gcc -c hash.c

clean:
	rm -f lex.yy.* y.tab.* *.o etapa3
