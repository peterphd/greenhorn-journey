#include "main.h"
/**
 * print_numbers - prints the numbers 0-9
 *
 * Return: void
 */

void print_numbers(void){
	int i;
	char ch;

	for(i=0;i<=9;i++){
		ch = i + '0';
		_putchar(ch);
	}
	_putchar('\n');
}
