all:
	gcc -o pointer.o pointer.c

run:
	./pointer.o

clean:
	-rm *.o
