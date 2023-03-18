#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase, followed by a newline,
 *              then prints the alphabet in uppercase, followed by a newline.
 * Return: Always 0 (Success)
 */
int main(void)
{
    char ch;

    for (ch = 'a'; ch <= 'z'; ch++)
    {
        if (ch != 'q' && ch != 'e')
            putchar(ch);
    }

    for (ch = 'A'; ch <= 'Z'; ch++)
    {
        if (ch != 'Q' && ch != 'E')
            putchar(ch);
    }

    putchar('\n');

    return (0);
}

