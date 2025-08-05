#include <stdio.h>

int main(void)
{
    int value = 42;
    int *pointer;
    int **double_ptr;
    
    /* Step 1: Point 'pointer' to 'value' */
    pointer = &value;
    
    /* Step 2: Point 'double_ptr' to 'pointer' */
    double_ptr = &pointer;
    
    /* Step 3: Print value three different ways */
    printf("Direct access: %d\n", value);
    printf("Through single pointer: %d\n", *pointer);
    printf("Through double pointer: %d\n", **double_ptr);
    
    /* Change value to 100 using double_ptr */
    **double_ptr = 100;

    printf("\nAfter changing through double pointer:\n");
    printf("Direct access: %d\n", value);
    printf("Through single pointer: %d\n", *pointer);
    printf("Through double pointer: %d\n", **double_ptr);


    return (0);
}
