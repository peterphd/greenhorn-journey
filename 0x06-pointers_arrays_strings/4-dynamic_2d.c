#include <stdio.h>
#include <stdlib.h>

/**
 * allocate_2d_array - allocates memory for 2D array
 * @rows: number of rows
 * @cols: number of columns
 * Return: pointer to allocated 2D array, or NULL on failure
 */
int **allocate_2d_array(int rows, int cols)
{
    int **matrix;
    int i;

    /* Allocate array of row pointers */
    matrix = malloc(rows * sizeof(int *));
    if (matrix == NULL)
    {
        printf("Error: Failed to allocate memory for row pointers\n");
        return (NULL);
    }

    /* Allocate memory for each row */
    for (i = 0; i < rows; i++)
    {
        matrix[i] = malloc(cols * sizeof(int));
        if (matrix[i] == NULL)
        {
            printf("Error: Failed to allocate memory for row %d\n", i);
            /* Free previously allocated rows */
            while (i > 0)
            {
                i--;
                free(matrix[i]);
            }
            free(matrix);
            return (NULL);
        }
    }

    printf("Successfully allocated %dx%d dynamic 2D array\n", rows, cols);
    return (matrix);
}

/**
 * fill_array - fills 2D array with sequential values
 * @matrix: pointer to 2D array
 * @rows: number of rows
 * @cols: number of columns
 */
void fill_array(int **matrix, int rows, int cols)
{
    int i, j;
    int value = 1;

    printf("Filling array with sequential values...\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            matrix[i][j] = value++;
        }
    }
}

/**
 * print_array - prints 2D array in formatted rows and columns
 * @matrix: pointer to 2D array
 * @rows: number of rows
 * @cols: number of columns
 */
void print_array(int **matrix, int rows, int cols)
{
    int i, j;

    printf("\nDynamic 2D Array Contents:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }
}

/**
 * free_2d_array - frees memory allocated for 2D array
 * @matrix: pointer to 2D array
 * @rows: number of rows
 */
void free_2d_array(int **matrix, int rows)
{
    int i;

    if (matrix == NULL)
        return;

    /* Free each row */
    for (i = 0; i < rows; i++)
    {
        free(matrix[i]);
    }

    /* Free the array of row pointers */
    free(matrix);
    printf("Memory successfully freed\n");
}

/**
 * get_dimensions - gets array dimensions from user
 * @rows: pointer to store number of rows
 * @cols: pointer to store number of columns
 * Return: 0 on success, -1 on failure
 */
int get_dimensions(int *rows, int *cols)
{
    printf("=== DYNAMIC 2D ARRAY BUILDER ===\n");
    printf("Enter number of rows: ");
    
    if (scanf("%d", rows) != 1 || *rows <= 0)
    {
        printf("Error: Invalid number of rows\n");
        return (-1);
    }

    printf("Enter number of columns: ");
    if (scanf("%d", cols) != 1 || *cols <= 0)
    {
        printf("Error: Invalid number of columns\n");
        return (-1);
    }

    printf("Creating %dx%d matrix...\n\n", *rows, *cols);
    return (0);
}

/**
 * main - dynamic 2D array builder program
 * Return: 0 on success, 1 on failure
 */
int main(void)
{
    int **matrix;
    int rows, cols;

    /* Get dimensions from user */
    if (get_dimensions(&rows, &cols) == -1)
        return (1);

    /* Allocate 2D array */
    matrix = allocate_2d_array(rows, cols);
    if (matrix == NULL)
        return (1);

    /* Fill and display array */
    fill_array(matrix, rows, cols);
    print_array(matrix, rows, cols);

    /* Demonstrate pointer arithmetic access */
    printf("\nDemonstrating pointer access:\n");
    printf("matrix[1][2] = %d\n", matrix[1][2]);
    printf("*(*(matrix + 1) + 2) = %d\n", *(*(matrix + 1) + 2));

    /* Clean up memory */
    printf("\nCleaning up memory...\n");
    free_2d_array(matrix, rows);

    printf("\n=== CHALLENGE COMPLETE ===\n");
    return (0);
}
