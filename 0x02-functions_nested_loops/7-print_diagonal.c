#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal using the character \
 * @n: numer of times the character \ should be printed.
 *
 * Return: void
 */

void print_diagonal(int n){
	int row, spaces;
	if (n <= 0){
		_putchar('\n');
		return;
	}

	for ( row =0; row < n; row++){
		for (spaces=0; spaces < row; spaces++){
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
