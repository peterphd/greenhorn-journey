#include "main.h"
/**
 * print_most_numbers - prints the numbers from 0-9 except 2 and 4, follwed by a newline.
 *
 * Return:void
 */

void print_most_numbers(void){
	int i;
	char ch;

	for(i=0;i<=9;i++){
		if(i != 2 && i != 4){
			ch = i + '0';
			_putchar(ch);
		}
	}
	_putchar('\n');
}
