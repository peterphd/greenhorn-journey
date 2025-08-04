#include <stdio.h>
/**
 * draw_triangle_validated: draws a right angled triangle.
 *@size: height of triangle.
 *@ch: character to be printed
 */

void draw_triangle_validated(int size,char ch){

	int row, col, space;

	if (size <= 0){
		printf("Error: size must be greater than 0. \n");
		return;
	}

	if (ch < 32 || ch > 126){
		printf("Error; character must be printable (ASCII 32-126). \n");
		return;
	}

	

	for (row = 1; row <= size; row++){
		for (space=0; space < size - row; space++){
			printf(" ");
		}

		for (col=0; col < row; col++){
			printf("%c", ch);
		}

		printf("\n");

	}
}


/**
 * main - test the draw_triangle_validated function
 * Return: Always 0 (Success)
 */
int main(void)
{
    printf("Testing validated triangles:\n\n");

    printf("Triangle size 5 with '*':\n");
    draw_triangle_validated(5, '*');
    printf("\n");

    printf("Triangle size 3 with '#':\n");
    draw_triangle_validated(3, '#');
    printf("\n");

    printf("Invalid size test:\n");
    draw_triangle_validated(0, '*');
    printf("\n");

    printf("Invalid character test (ASCII 31):\n");
    draw_triangle_validated(4, 31);
    printf("\n");

    return (0);
}
