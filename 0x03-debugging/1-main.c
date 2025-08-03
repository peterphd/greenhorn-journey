#include <stdio.h>
/**
 * main - causes infinite loop(fixed version)
 * return: 0
 */

int main(void){
	int i;
	printf("infinite loop incoming : (\n");
	
	i = 0;

	while (i<10){
		putchar('0' + i);
		i++;
		}

	printf("infinite loop avoided! \\o/\n");

	return 0;
}
