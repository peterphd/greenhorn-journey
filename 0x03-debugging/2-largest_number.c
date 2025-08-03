#include <stdio.h>

int largest_number(int a, int b, int c)
{
    int largest;

    if (a > b && a > c)
    {
        largest = a;
    }
    else if (b > c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }

    return (largest);
}

int main(void)
{
    printf("Test 1: largest_number(972, -98, 0) = %d (Expected: 972)\n", 
           largest_number(972, -98, 0));
    
    printf("Test 2: largest_number(5, 10, 3) = %d (Expected: 10)\n", 
           largest_number(5, 10, 3));
    
    printf("Test 3: largest_number(1, 2, 15) = %d (Expected: 15)\n", 
           largest_number(1, 2, 15));
    
    printf("Test 4: largest_number(5, 5, 3) = %d (Expected: 5)\n", 
           largest_number(5, 5, 3));
    
    return (0);
}
