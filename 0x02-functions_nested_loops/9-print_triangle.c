#include "main.h"

/**
 * print_triangle - Prints a right-aligned triangle using the character '#'
 * @size: Size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
    int row, spaces, hashes;

    if (size <= 0)
    {
        _putchar('\n');
        return;
    }

    for (row = 1; row <= size; row++)
    {
        for (spaces = 0; spaces < size - row; spaces++)
        {
            _putchar(' ');
        }

        for (hashes = 0; hashes < row; hashes++)
        {
            _putchar('#');
        }

        _putchar('\n');
    }
}

