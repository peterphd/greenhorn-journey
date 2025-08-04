/*
 * Day 4: Functions with Nested Loops & Complex Parameters
 * Building complexity step by step
 */

#include <stdio.h>

/**
 * print_rectangle - prints a rectangle of asterisks
 * @width: width of rectangle
 * @height: height of rectangle
 * 
 * This function demonstrates basic nested loops in a function
 */
void print_rectangle(int width, int height)
{
    int row, col;
    
    /* Outer loop: controls rows */
    for (row = 0; row < height; row++)
    {
        /* Inner loop: controls columns */
        for (col = 0; col < width; col++)
        {
            printf("*");
        }
        printf("\n");  /* New line after each row */
    }
}

/**
 * multiplication_table - prints multiplication table
 * @max_num: maximum number for table (e.g., 12 for 12x12 table)
 * 
 * Demonstrates nested loops with calculations
 */
void multiplication_table(int max_num)
{
    int i, j;
    
    /* Print header row */
    printf("   ");
    for (i = 1; i <= max_num; i++)
    {
        printf("%4d", i);
    }
    printf("\n");
    
    /* Print table with nested loops */
    for (i = 1; i <= max_num; i++)
    {
        printf("%2d:", i);  /* Row label */
        for (j = 1; j <= max_num; j++)
        {
            printf("%4d", i * j);
        }
        printf("\n");
    }
}

/**
 * find_pattern - searches for a number pattern in a 2D grid
 * @grid: 2D array represented as 1D array
 * @rows: number of rows in grid
 * @cols: number of columns in grid
 * @target: number to search for
 * Return: number of times target appears
 * 
 * This shows complex parameter handling and triple nested loops
 */
int find_pattern(int grid[], int rows, int cols, int target)
{
    int count = 0;
    int row, col;
    
    /* Parameter validation */
    if (grid == NULL || rows <= 0 || cols <= 0)
    {
        printf("Error: Invalid parameters\n");
        return -1;
    }
    
    /* Nested loops to search 2D grid */
    for (row = 0; row < rows; row++)
    {
        for (col = 0; col < cols; col++)
        {
            /* Calculate 1D index from 2D coordinates */
            int index = row * cols + col;
            
            if (grid[index] == target)
            {
                count++;
                printf("Found %d at position (%d, %d)\n", target, row, col);
            }
        }
    }
    
    return count;
}

/**
 * draw_triangle - draws a triangle pattern
 * @size: height of triangle
 * @character: character to use for drawing
 * 
 * Demonstrates variable nested loop bounds
 */
void draw_triangle(int size, char character)
{
    int row, col;
    
    if (size <= 0)
    {
        printf("Error: Size must be positive\n");
        return;
    }
    
    for (row = 1; row <= size; row++)
    {
        /* Print spaces for alignment */
        for (col = 0; col < size - row; col++)
        {
            printf(" ");
        }
        
        /* Print characters for this row */
        for (col = 0; col < row; col++)
        {
            printf("%c", character);
        }
        
        printf("\n");
    }
}

/**
 * calculate_matrix_sum - calculates sum of all elements in matrix
 * @matrix: 2D matrix represented as 1D array
 * @rows: number of rows
 * @cols: number of columns
 * Return: sum of all elements, or -1 on error
 */
int calculate_matrix_sum(int matrix[], int rows, int cols)
{
    int sum = 0;
    int i, j;
    
    /* Validate parameters */
    if (matrix == NULL || rows <= 0 || cols <= 0)
    {
        return -1;
    }
    
    /* Sum all elements using nested loops */
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            sum += matrix[i * cols + j];
        }
    }
    
    return sum;
}

/**
 * main - test all nested loop functions
 * Return: 0 on success
 */
int main(void)
{
    printf("=== DAY 4: NESTED LOOPS & COMPLEX FUNCTIONS ===\n\n");
    
    /* Test 1: Simple rectangle */
    printf("1. Rectangle (5x3):\n");
    print_rectangle(5, 3);
    printf("\n");
    
    /* Test 2: Small multiplication table */
    printf("2. Multiplication table (5x5):\n");
    multiplication_table(5);
    printf("\n");
    
    /* Test 3: Triangle pattern */
    printf("3. Triangle pattern (size 5):\n");
    draw_triangle(5, '*');
    printf("\n");
    
    /* Test 4: 2D grid search */
    printf("4. Grid search:\n");
    int grid[] = {1, 2, 3, 
                  4, 2, 6, 
                  7, 8, 2};
    int count = find_pattern(grid, 3, 3, 2);
    printf("Found target %d times\n\n", count);
    
    /* Test 5: Matrix sum */
    printf("5. Matrix sum:\n");
    int matrix[] = {1, 2, 3, 4,
                    5, 6, 7, 8};
    int sum = calculate_matrix_sum(matrix, 2, 4);
    printf("Sum of 2x4 matrix: %d\n", sum);
    
    return 0;
}

/*
 * EXERCISES FOR YOU:
 * 
 * 1. Compile and run this program:
 *    gcc -Wall -Wextra day4_nested_loops.c -o day4_test
 *    ./day4_test
 * 
 * 2. Modify print_rectangle to print a border (hollow rectangle)
 * 
 * 3. Add error checking to draw_triangle for invalid characters
 * 
 * 4. Create a new function: print_diamond(int size, char character)
 *    That prints a diamond shape using nested loops
 * 
 * 5. Debug any issues and understand how 2D array indexing works
 */
