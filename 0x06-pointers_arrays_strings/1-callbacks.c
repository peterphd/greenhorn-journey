#include <stdio.h>

/**
 * add - adds two integers
 * @a: first integer
 * @b: second integer
 * Return: sum of a and b
 */
int add(int a, int b)
{
    return (a + b);
}

/**
 * sub - subtracts two integers
 * @a: first integer
 * @b: second integer
 * Return: difference of a and b
 */
int sub(int a, int b)
{
    return (a - b);
}

/**
 * mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: product of a and b
 */
int mul(int a, int b)
{
    return (a * b);
}

/**
 * div - divides two integers
 * @a: first integer
 * @b: second integer
 * Return: quotient of a and b, or 0 if b is 0
 */
int div(int a, int b)
{
    if (b == 0)
    {
        printf("Error: Division by zero\n");
        return (0);
    }
    return (a / b);
}

/**
 * execute - executes a function given as parameter
 * @a: first operand
 * @b: second operand
 * @f: function pointer to execute
 * Return: result of f(a, b)
 */
int execute(int a, int b, int (*f)(int, int))
{
    printf("Executing callback function with %d and %d\n", a, b);
    return (f(a, b));
}

/**
 * main - demonstrates callback functions
 * Return: 0 on success
 */
int main(void)
{
    int x = 15, y = 3;
    int result;
    int (*operation)(int, int);

    printf("=== CALLBACK DEMONSTRATION ===\n");
    printf("Test values: x = %d, y = %d\n\n", x, y);

    /* Using different functions as callbacks */
    printf("1. Using add as callback:\n");
    result = execute(x, y, add);
    printf("Result: %d + %d = %d\n\n", x, y, result);

    printf("2. Using mul as callback:\n");
    result = execute(x, y, mul);
    printf("Result: %d * %d = %d\n\n", x, y, result);

    printf("3. Using sub as callback:\n");
    result = execute(x, y, sub);
    printf("Result: %d - %d = %d\n\n", x, y, result);

    printf("4. Using div as callback:\n");
    result = execute(x, y, div);
    printf("Result: %d / %d = %d\n\n", x, y, result);

    /* Demonstrate callback with function pointer variable */
    printf("5. Dynamic callback selection:\n");
    operation = mul;
    result = execute(10, 7, operation);
    printf("Dynamic callback result: %d\n", result);

    return (0);
}
