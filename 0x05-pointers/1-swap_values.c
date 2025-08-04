#include <stdio.h>

void swap_wrong(int a, int b){
	int temp = a;
	a = b;
	b = temp;
}

void swap_correct(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b =temp;
}

int main(void)
{
    int x = 10;
    int y = 20;

    printf("Before swap: a = %d, b = %d\n", x, y);
    swap_correct(&x, &y); 
    printf("After swap: a = %d, b = %d\n", x, y);

    return (0);
}

