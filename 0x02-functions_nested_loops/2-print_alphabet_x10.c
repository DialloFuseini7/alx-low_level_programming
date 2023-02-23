#include <stdio.h>
/**
 * main - prints alphabets 10x
 * Return: is always (0)
 */
void print_alphabet(void);

int main()
{
    int i = 1; 
    int a;
    
    while (i <= 10)
    {
    for (a = 'a'; a <= 'z'; a++)
    {
        putchar(a);
    }
    i = i + 1;
      putchar('\n');
    }
    return (0);
}
