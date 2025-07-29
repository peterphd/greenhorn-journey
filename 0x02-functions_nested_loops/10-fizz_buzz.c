/**
 * fizz_buzz - prints the numbers from 1-100, replacing mutliples of 3 with Fizz
 * 	       multiples of 5 with Buzz,  and multiples of both with FizzBuzz
 *
 * Return: void
 */

#include "main.h"

/* Helper functions for advanced solution */
void print_number(int n)
{
    if (n == 0)
    {
        _putchar('0');
        return;
    }
    if (n / 10)
        print_number(n / 10);
    _putchar((n % 10) + '0');
}

void print_string(const char *s)
{
    while (*s)
    {
        _putchar(*s++);
    }
}

/* ADVANCED SOLUTION - modular, reusable helper functions */
void fizz_buzz(void)
{
    int i;
    for (i = 1; i <= 100; i++)
    {
        int printed = 0;
        if (i % 3 == 0)
        {
            print_string("Fizz");
            printed = 1;
        }
        if (i % 5 == 0)
        {
            print_string("Buzz");
            printed = 1;
        }
        if (!printed)
        {
            print_number(i);
        }
        if (i < 100)
            _putchar(' ');
    }
    _putchar('\n');
}

/*
// BEGINNER SOLUTION - direct character output, simpler logic
void fizz_buzz(void)
{
    int i;
    
    for (i = 1; i <= 100; i++)
    {
        if (i % 15 == 0)
        {
            _putchar('F'); _putchar('i'); _putchar('z'); _putchar('z');
            _putchar('B'); _putchar('u'); _putchar('z'); _putchar('z');
        }
        else if (i % 3 == 0)
        {
            _putchar('F'); _putchar('i'); _putchar('z'); _putchar('z');
        }
        else if (i % 5 == 0)
        {
            _putchar('B'); _putchar('u'); _putchar('z'); _putchar('z');
        }
        else
        {
            if (i >= 10)
                _putchar((i / 10) + '0');
            _putchar((i % 10) + '0');
        }
        
        if (i < 100)
            _putchar(' ');
    }
    _putchar('\n');
}
*/
 
