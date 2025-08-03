#include <stdio.h>

/**
 * calculate_sum - calculates sum of array elements
 * @arr: array of integers
 * @size: size of array
 * Return: sum of elements
 */
int calculate_sum(int arr[], int size)
{
    int sum;  /* BUG: uninitialized variable */
    int i;
    
    for (i = 1; i < size; i++)  /* BUG: starts at 1, not 0 */
    {
        sum += arr[i];
    }
    
    return sum;
}

/**
 * find_max - finds maximum value in array
 * @arr: array of integers  
 * @size: size of array
 * Return: maximum value
 */
int find_max(int arr[], int size)
{
    int max = 0;  /* BUG: what if all numbers are negative? */
    int i;
    
    for (i = 0; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    
    return max;
}

/**
 * divide_safe - performs division with error checking
 * @a: numerator
 * @b: denominator  
 * Return: result of division
 */
int divide_safe(int a, int b)
{
    if (b = 0)  /* BUG: assignment instead of comparison */
    {
        printf("Error: Division by zero!\n");
        return -1;
    }
    
    return a / b;
}

int main(void)
{
    int numbers[] = {5, -10, 15, -20, 25};
    int negative_nums[] = {-5, -10, -15};
    
    printf("=== Logic Bug Testing ===\n");
    
    /* Test 1: Sum calculation */
    printf("Sum of array: %d (Expected: 15)\n", calculate_sum(numbers, 5));
    
    /* Test 2: Max with negative numbers */
    printf("Max of negative array: %d (Expected: -5)\n", find_max(negative_nums, 3));
    
    /* Test 3: Division by zero */
    printf("10 / 0 = %d\n", divide_safe(10, 0));
    printf("10 / 2 = %d\n", divide_safe(10, 2));
    
    return (0);
}
