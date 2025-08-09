#include <stdio.h>

/**
 * print_array_notation - prints 2D array using standard notation
 * @matrix: 2D array to print
 * @rows: number of rows
 * @cols: number of columns
 */
void print_array_notation(int matrix[][4], int rows, int cols)
{
    int i, j;

    printf("Using array notation matrix[i][j]:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }
}

/**
 * print_pointer_notation - prints 2D array using pointer arithmetic
 * @ptr: pointer to 2D array
 * @rows: number of rows
 * @cols: number of columns
 */
void print_pointer_notation(int (*ptr)[4], int rows, int cols)
{
    int i, j;

    printf("\nUsing pointer arithmetic *(*(ptr + i) + j):\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%3d ", *(*(ptr + i) + j));
        }
        printf("\n");
    }
}

/**
 * demonstrate_addresses - shows memory addresses and pointer arithmetic
 * @ptr: pointer to 2D array
 * @rows: number of rows
 */
void demonstrate_addresses(int (*ptr)[4], int rows)
{
    int i;

    printf("\n=== POINTER ARITHMETIC BREAKDOWN ===\n");
    printf("ptr (base address): %p\n", (void *)ptr);

    for (i = 0; i < rows; i++)
    {
        printf("Row %d:\n", i);
        printf("  ptr + %d = %p (address of row %d)\n", 
               i, (void *)(ptr + i), i);
        printf("  *(ptr + %d) = %p (address of first element in row %d)\n", 
               i, (void *)*(ptr + i), i);
        printf("  *(ptr + %d) + 1 = %p (address of second element in row %d)\n", 
               i, (void *)(*(ptr + i) + 1), i);
    }
}

/**
 * main - demonstrates 2D arrays with pointer arithmetic
 * Return: 0 on success
 */
int main(void)
{
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int (*ptr)[4] = matrix;
    int rows = 3, cols = 4;

    printf("=== 2D ARRAYS AND POINTER ARITHMETIC ===\n\n");

    /* Print using different notations */
    print_array_notation(matrix, rows, cols);
    print_pointer_notation(ptr, rows, cols);

    /* Show address relationships */
    demonstrate_addresses(ptr, rows);

    /* Demonstrate individual element access */
    printf("\n=== INDIVIDUAL ELEMENT ACCESS ===\n");
    printf("matrix[1][2] = %d\n", matrix[1][2]);
    printf("*(*(ptr + 1) + 2) = %d\n", *(*(ptr + 1) + 2));
    printf("ptr[1][2] = %d\n", ptr[1][2]);

    /* Show that all three methods access the same element */
    printf("\nAll three methods access the same memory location!\n");
    printf("Address of matrix[1][2]: %p\n", (void *)&matrix[1][2]);
    printf("Address via ptr arithmetic: %p\n", (void *)(*(ptr + 1) + 2));

    return (0);
}
