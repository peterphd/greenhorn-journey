#include <stdio.h>
/**
 * print_array - prints elements of an array
 * @arr: array to print
 * @size: size of array
 */

void print_array(int *arr, int size){
	int i;
	printf("Array contents: ");
	for(i=0;i<=size;i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}

/**
 * modify_string - modifies a string
 * @str: string to modify
 */
void modify_string(char *str)
{
    str[0] = 'H';
    str[1] = 'i';
    str[2] = '\0';
}

int main(void)
{
    int numbers[] = {10, 20, 30};
    char *message = "Hello";  /* BUG: can't modify string literal */

    printf("=== Complex Debugging Exercise ===\n");

    /* This will segfault due to array bounds */
    print_array(numbers, 3);

    /* This will segfault due to modifying read-only memory */
    printf("Original: %s\n", message);
    modify_string(message);
    printf("Modified: %s\n", message);

    return (0);
}
