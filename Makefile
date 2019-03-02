rpntest.exe: rpntest.c
	gcc -std=c99 -Wall rpntest.c -o rpntest.exe

test1: rpntest.exe
	./rpntest.exe 3 5 +

test2: rpntest.exe
	./rpntest.exe a + -

test3: rpntest.exe
	./rpntest.exe 4 5 - 3 + +
