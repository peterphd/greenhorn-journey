#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */




int main(void){
	char letter = 'a';
	char digit = '0';

	while (letter <= 'z'){
		_putchar(letter);
		letter++;
	}

	while(digit <= '9'){
		_putchar(digit);
		digit++;
	}

	_putchar('\n');
	return(0);
}

