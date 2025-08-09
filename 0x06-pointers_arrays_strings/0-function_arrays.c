#include <stdio.h>
/**
 * add - adds two integers
 * @a - first integer
 * @b - second integer
 * return: sum of a and b.
 */

int add(int a, int b){
	return (a + b);
}

int sub( int a, int b){
	return (a - b);
}

int mul( int a, int b){
	return ( a * b);
}
int div(int a, int b){
	if (b == 0){
		printf("Error: division by zero. \n");
		return 0;
	}
	return(a / b);
}

/**
 * main - demonstrates an array of fucntion pointers
 * return: 0
 */

int main(void){
	int(*ops[])(int, int) = {add, sub, mul, div};
	char *symbols[] = {"+", "-","*","/"};
	int a = 20, b = 4;
	int i, result;

	printf("Function pointer array demonstration:\n");
    	printf("Testing with a = %d, b = %d\n\n", a, b);

    	for (i = 0; i < 4; i++)
    {
        result = ops[i](a, b);
        printf("%d %s %d = %d\n", a, symbols[i], b, result);
    }	

    /* Test division by zero */
   	 printf("\nTesting division by zero:\n");
    	b = 0;
    	result = ops[3](a, b);

    	return (0);
}
