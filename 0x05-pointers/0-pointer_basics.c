#include <stdio.h>

int main(void){

	int variable = 42;
	int *pointer;
	pointer = &variable;

	printf("Value in variable: %d\n", variable);
	printf("address of variable: %p\n", (void *)pointer);
	printf("value accessed through pointer: %d\n", *pointer);
	
	*pointer = 100;
	printf("New value in variable: %d\n", variable);
	return 0;

}
