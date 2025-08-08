#include <stdio.h>

int add (int a, int b){
	return (a + b);
}

int multiply(int a, int b){
	return( a * b);
}

int main(void){
	int(*calculator)(int, int); /* function pointer */
	calculator = add;
	printf("5 + 3 = %d\n", calculator(5,3));

	calculator = multiply;
	printf("5 * 3 = %d\n", calculator(5,3));

	return 0;
}

