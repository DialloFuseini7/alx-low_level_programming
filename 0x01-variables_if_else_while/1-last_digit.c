#include <stdlib.h>
#include <time.h>
/*more headers goes there*/
#include <stdio.h>
/*betty style doc for function main goes there */
/*
 * main - Print aign of number
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() -RAND_MAX / 2;
	lt_dgt = n % 10;
	if (lt_dgt > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, lt_dgt);
	}
	else
	{
		if(lt_dgt == 0)
		{
			printf("Last digit of %i id %i and is0\n", n, lt_dgt);
		}
		else
		{
			printf("Last digit of %i is %i and is less than 6 and not 0\n", n, lt_dgt);
		}
		
	}
	return (0);
}
