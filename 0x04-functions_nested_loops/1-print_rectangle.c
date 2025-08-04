/**
 * print_rectangle_hollow: prints a hollow rectangle with asteriks
 * @width: width of rectangle
 * @height: height of rectangle
 *
 * this function demonstrates nested loops
 */

#include <stdio.h>

void print_rectangle_hollow(int width, int height) {
	
	int row, col;
    /* 1. Validate input*/
    if (width <= 0 || height <= 0) {
        printf("Width and height must be greater than 0.\n");
        return;
    }

    /* 2. Loop through each row*/
    for ( row = 0; row < height; row++) {
        if (row == 0 || row == height - 1) {
            /* a. First or last row: print full row of asterisks*/
            for (col = 0; col < width; col++) {
                printf("*");
            }
        } else {
            /* b. Middle rows*/
            printf("*"); /* Left edge*/
            for (col = 0; col < width - 2; col++) {
                printf(" ");
            }
            if (width > 1) {
                printf("*"); /* Right edge (only if width > 1)*/
            }
        }
        /* c. Newline after each row*/
        printf("\n");
    }
}

/**
 * main - test the print_rectangle_hollow function
 * Return: Always 0 (Success)
 */
int main(void)
{
    printf("Testing hollow rectangles:\n\n");
    
    printf("5x3 rectangle:\n");
    print_rectangle_hollow(5, 3);
    printf("\n");
    
    printf("1x1 rectangle:\n");
    print_rectangle_hollow(1, 1);
    printf("\n");
    
    printf("2x4 rectangle:\n");
    print_rectangle_hollow(2, 4);
    printf("\n");
    
    printf("Invalid input test:\n");
    print_rectangle_hollow(0, 5);
    
    return (0);
}
