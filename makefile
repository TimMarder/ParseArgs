all: args.c
	gcc args.c

run: a.out
	./a.out

clean:
	rm a.out
