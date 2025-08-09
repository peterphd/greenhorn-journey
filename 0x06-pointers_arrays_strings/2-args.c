#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: argument count
 * @argv: argument vector (array of strings)
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
    int i;

    printf("=== COMMAND LINE ARGUMENTS ===\n");
    printf("Program name: %s\n", argv[0]);
    printf("Number of arguments (including program name): %d\n\n", argc);

    if (argc == 1)
    {
        printf("No additional arguments provided.\n");
        printf("Usage: %s <arg1> <arg2> ... <argN>\n", argv[0]);
    }
    else
    {
        printf("All arguments received:\n");
        for (i = 0; i < argc; i++)
        {
            printf("argv[%d]: %s\n", i, argv[i]);
        }

        printf("\nArguments without program name:\n");
        for (i = 1; i < argc; i++)
        {
            printf("Argument %d: %s\n", i, argv[i]);
        }
    }

    return (0);
}
