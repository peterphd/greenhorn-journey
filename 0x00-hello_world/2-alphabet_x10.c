#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */

int main(void){
	char letter;
	int i;

	for (i=0; i<10;i++)
	{
		letter = 'a';
		while(letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
	return(0);
} 
