
my_grep: main.o grep.o
	gcc main.o grep.o -o my_grep

main.o: main.c 
	gcc -c main.c
grep.o: grep.c grep.h
	gcc -c grep.c

clean:
	rm *.o my_grep
