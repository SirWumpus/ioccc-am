CFLAGS	= -Os

all: build

build: am am-c89

clean:
	-rm am am-c89

# Original K&R version.
am$E: am.c
	${CC} ${CFLAGS} am.c -o $*

am-c89$E: am-c89.c
	${CC} ${CFLAGS} am-c89.c -o $*

