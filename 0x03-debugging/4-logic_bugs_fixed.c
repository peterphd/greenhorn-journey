#include <stdio.h>

/**
 * calculate_sum - calculates sum of array elements
 * @arr: array of integers
 * @size: size of array
 * Return: sum of elements
 */
int calculate_sum(int arr[], int size)
{
    int sum = 0;  /* FIX: Initialize to 0 instead of garbage value */
    int i;
    
    for (i = 0; i < size; i++)  /* FIX: Start at 0, not 1 */
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
    int max = arr[0];  /* FIX: Start with first element, not 0 */
    int i;
    
    for (i = 1; i < size; i++)  /* Start at 1 since max = arr[0] */
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
    if (b == 0)  /* FIX: Use == for comparison, not = for assignment */
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
    
    printf("=== Logic Bug Testing (FIXED) ===\n");
    
    /* Test 1: Sum calculation */
    printf("Sum of array: %d (Expected: 15)\n", calculate_sum(numbers, 5));
    
    /* Test 2: Max with negative numbers */
    printf("Max of negative array: %d (Expected: -5)\n", find_max(negative_nums, 3));
    
    /* Test 3: Division by zero */
    printf("10 / 0 = %d\n", divide_safe(10, 0));
    printf("10 / 2 = %d\n", divide_safe(10, 2));
    
    return (0);
}

/*
 * EXPLANATION OF FIXES:
 * 
 * Bug #1: Uninitialized sum variable
 * - Problem: int sum; (contains garbage value)
 * - Fix: int sum = 0; (starts at zero)
 * - Result: Caused huge random number instead of correct sum
 * 
 * Bug #2: Wrong loop starting point  
 * - Problem: for (i = 1; i < size; i++) (skips first element)
 * - Fix: for (i = 0; i < size; i++) (includes all elements)
 * - Result: Missing arr[0] = 5 from the sum calculation
 * 
 * Bug #3: Wrong initial max value
 * - Problem: int max = 0; (assumes positive numbers exist)
 * - Fix: int max = arr[0]; (start with actual first element)
 * - Result: With all negative numbers, 0 was incorrectly "largest"
 * 
 * Bug #4: Assignment instead of comparison
 * - Problem: if (b = 0) (assigns 0 to b, always false)
 * - Fix: if (b == 0) (compares b with 0)
 * - Result: Division by zero was never caught, causing crash
 */
