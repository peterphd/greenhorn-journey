#include "main.h"
/**
 * print alphabet_x10 - prints the alphabet in lower case 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void){
	int i;
	char letter;

	for(i=0;i<10;i++){
		for(letter='a';letter<='z';letter++){
			_putchar(letter);
		}
		_putchar('\n');
	}
}
