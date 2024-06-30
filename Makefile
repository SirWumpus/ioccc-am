PROG	= am

all:
	${MAKE} -ftest.mk ${PROG}

clean distclean ${PROG}:
	${MAKE} -ftest.mk $@

test: distclean all
	touch ${PROG}.c
	./${PROG} test.mk
