add: main.o function.o
	gcc -o add main.o function.o

main.o: main.c
	gcc -c main.c

function.o: function.c
	gcc -c function.c

Result:
	./add

clean: 
	rm *.o add