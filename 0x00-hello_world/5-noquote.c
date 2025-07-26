#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * return: always 0 (Success)
 */

int main(void){
	char letter = 'a';
	while(letter <= 'z'){
		if(letter !='e' && letter != 'q'){
			_putchar(letter);
			}
		letter++;
	}
	_putchar('\n');
	return (0);
}

