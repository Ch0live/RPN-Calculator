/* args.c */
#include <string.h>
#include <stdio.h>

const char STACK[10] = {};
int classify_operator(char *arg);

int rpn_main(int argc, char *argv[]) {
	for(int i=1; i < argc; i++) {
		if(classify_operator(argv[i])){
			printf("Arg %d is an operator\n",i);

		}
		else {
			printf("Arg %d is NOT an operator\n",i);
		}
	}
	return 0;
}



int classify_operator(char *arg) {
	const char OPERATOR_ARRAY[4] = {'+', '-', 'x', '/'};
	int oper = 0;
	    for(int j = 0; j < 4; j++) {
	    	if (*arg == OPERATOR_ARRAY[j]) {
				oper = *arg;
	    	}
	  	}
	return oper;
}



int main(int argc, char *argv[])
{
	if(argc == 2 && !strcmp(argv[1], "--version")) {
		printf("1.0\n");
		return 0;
	}
	else if(argc == 2 && !strcmp(argv[1], "--usage")) {
		printf("This is how to use it\n");
		return 0;
	}
	else {
		return rpn_main(argc, argv);
	}
	return 0;
}
