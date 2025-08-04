#include <stdio.h>

void print_array_with_pointers(int *start_address, int how_many_houses)
{
    int i;
    
    printf("Array contents: ");
    for (i = 0; i < how_many_houses; i++)
    {
        printf("%d ", *(start_address + i));  /* Go to house i, see what's inside */
    }
    printf("\n");
}

int main(void)
{
    int my_houses[] = {100, 200, 300, 400, 500};
    
    print_array_with_pointers(my_houses, 5);
    
    return (0);
}
