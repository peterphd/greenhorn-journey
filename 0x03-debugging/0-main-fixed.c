#include <stdio.h>

int main(void)
{
    int x;                    // Create a real variable
    int *p = &x;             // Point p to x's memory location
    
    printf("about to put 42 into variable x...\n");
    *p = 42;                 // This works now!
    printf("Success! x = %d\n", x);
    printf("This line IS reached\n");
    return (0);
}
