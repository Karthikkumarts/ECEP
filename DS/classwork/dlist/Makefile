TARGET=dlist.out
SRCS=$(wildcard *.c)
OBJS=$(SRCS:.c=.o)

${TARGET} : ${OBJS}
	gcc -o  $@  $^
clean:
	rm ${TARGET} ${OBJS}

