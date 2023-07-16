/*
 * File: 100-print_comb3.c
 * Auth: serge dja
 */

#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all possible different
 * combinations of two digits.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    int digit1 = 0;

    while (digit1 <= 8)
    {
        int digit2 = digit1 + 1;

        while (digit2 <= 9)
        {
            putchar(digit1 + '0');
            putchar(digit2 + '0');

            if (digit1 != 8 || digit2 != 9)
            {
                putchar(',');
                putchar(' ');
            }
            digit2++;
        }
        digit1++;
    }

    putchar('\n');
    return (0);
}	
