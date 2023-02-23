#include <stdio.h>
/**
 * main - prints putchar
 * Return: is always (0)
 */
int main()
{
    int a;
    
    for (a = 'a'; a <= 'z'; a++)
    {
        putchar(a);
    }
    putchar('\n');
    return (0);
}
