TARGET=main
SOURCES=$(wildcard *.c)
OBJS=$(SOURCES:.c = .o)
#LDFLAGS=-lm
#CFLAGS=-I ./

${TARGET} : ${OBJS}
	gcc $^ -o $@
#	gcc ${LDFLAGS} $CFLAGS{} $^ -o $@



#OBJS=main.o,fun1.o,fun2.o;
#main:main.c
#	gcc main.c -o main
#main: main.o fun1.o fun2.o
#	gcc  $^ -o $@
#main.o:main.c
#	gcc -c $^ -o $@
#fun1.o:fun1.c
#	gcc -c $^ -o $@
#fun2.o:fun2.c
#	gcc -c $^ -o $@

#	rm main main.o fun1.o fun2.o

clean : 
	rm ${TARGET}  ${OBJS}
