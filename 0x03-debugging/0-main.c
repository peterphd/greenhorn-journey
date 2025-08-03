#include <stdio.h>
/**
 * main - cause a segmentation fault for debugging practice
 *
 * Return: 0
 */

int main(void){
	int *p = NULL;

	printf("about to deference a NULL pointer...\n");
	*p = 42;
	printf("This line won't be reached\n");
	

	return 0;
}	
