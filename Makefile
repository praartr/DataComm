CFLAGS  = -g -Wall -Wextra -pedantic
LDFLAGS = -lm

run:	quiz1.o
	g++ ${CFLAGS} -o a.out quiz1.o ${LDFLAGS}

quiz1.o:	quiz1.c
	g++ ${CFLAGS} -c quiz1.c

clean:
	rm -rf *.o
	rm -rf *~
	rm -rf run a.out
