hello : hello.o add.o
	gcc  hello.o add.o -o hello
hello.o : hello.c
	gcc -c hello.c
add.o: add.c
	gcc -c add.c
clean:
	rm  *.o hello
