#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void){
	char tens, units;

	for (tens = '0'; tens <= '9'; tens++){
		for (units ='0'; units <= '9'; units++){
			if (tens < units){
				putchar(tens);
				putchar(units);

				if (!(tens == '8' && units =='9')){
						putchar(',');
						putchar(' ');
						}
					}
				}
			}
		putchar('\n');

		return 0;
	}
