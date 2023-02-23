#include <stdio.h>
#iinclude <main.h>
/**
 * main - prints putchar
 * Return: is always (0)
 */
int main(void)
{
    int a;
    
    for (a = 'a'; a <= 'z'; a++)
    {
        putchar(a);
    }
    putchar('\n');
    return (0);
}
