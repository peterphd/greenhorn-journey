#include <stdio.h>

/**
 * print_diamond - Prints a diamond shape using a character
 * @size: Height of the diamond (must be odd and > 0)
 * @character: The character to use for drawing
 *
 * Description: If size is even or <= 0, prints an error message.
 */
void print_diamond(int size, char character)
{
	int mid;
	int i;
	int s;
	int c;

	if (size <= 0 || size % 2 == 0)
	{
		printf("Error: Size must be odd\n");
		return;
	}

	mid = size / 2;

	/* Upper half including middle line */
	for (i = 0; i <= mid; i++)
	{
		/* Print spaces */
		for (s = 0; s < mid - i; s++)
		{
			printf(" ");
		}

		/* Print characters */
		for (c = 0; c < (2 * i + 1); c++)
		{
			printf("%c", character);
		}

		printf("\n");
	}

	/* Lower half */
	for (i = mid - 1; i >= 0; i--)
	{
		/* Print spaces */
		for (s = 0; s < mid - i; s++)
		{
			printf(" ");
		}

		/* Print characters */
		for (c = 0; c < (2 * i + 1); c++)
		{
			printf("%c", character);
		}

		printf("\n");
	}
}
/**
 * main - test the print_diamond function
 * Return: Always 0 (Success)
 */
int main(void)
{
    printf("Testing diamond shapes:\n\n");
    
    printf("Diamond size 5 with '*':\n");
    print_diamond(5, '*');
    printf("\n");
    
    printf("Diamond size 7 with '#':\n");
    print_diamond(7, '#');
    printf("\n");
    
    printf("Diamond size 1 with 'O':\n");
    print_diamond(1, 'O');
    printf("\n");
    
    printf("Invalid size test (even number):\n");
    print_diamond(4, '*');
    printf("\n");
    
    printf("Invalid size test (zero):\n");
    print_diamond(0, '*');
    
    return (0);
}
