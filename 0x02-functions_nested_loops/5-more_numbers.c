#include "main.h"
/**
 * more_numbers - prints  10 times the numbers, from 0-14, followed by a newline
 *
 * Return: void
 */

void more_numbers(void){
	int repetition;
	int number;

	for (repetition=0;repetition<10;repetition++){
		for(number=0;number<=14; number++){
			if(number >=  10){
				_putchar('1');
				_putchar((number - 10) + '0');
			}else{
				_putchar(number + '0');
			}
		}
		_putchar('\n');
	}
}
