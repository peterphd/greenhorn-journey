#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (Success)
 */

int main(void){
	char ch;
	for(ch='a'; ch<='z'; ch++)
		putchar(ch);
	for(ch='0'; ch<='9'; ch++)
		putchar(ch);
	putchar('\n');
	return 0;
}

