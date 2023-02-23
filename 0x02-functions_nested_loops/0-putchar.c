#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - prints putchar
 * Return: is always (0)
 */
void print_putchar(char *s);
int main()
{
    char s[] = "_putchar";
    print_putchar(s);
    return (0);
}
void print_putchar(char *s)
{
            int i = 0;
            
            while (s[i] != '\0')
            {
                putchar(s[i]);
            i++;
            }
    putchar('\n');
}
