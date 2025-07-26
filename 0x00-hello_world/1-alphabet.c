#include <stdio.h>
#include "main.h"

/**
 *
 * Return: Always 0(Success)
 */

int main(void){
	char letter = 'a';
	
	while(letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
	return(0);
}
