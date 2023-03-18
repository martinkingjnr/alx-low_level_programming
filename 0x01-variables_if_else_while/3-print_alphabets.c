#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase and uppercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char lowercase[26] = "abcdefghijklmnopqrstuvwxyz";
        char uppercase[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int i;

        for (i = 0; i < 26; i++)
        {
                putchar(lowercase[i]);
        }

        for (i = 0; i < 26; i++)
        {
                putchar(uppercase[i]);
        }

        putchar('\n');

        return (0);
}

