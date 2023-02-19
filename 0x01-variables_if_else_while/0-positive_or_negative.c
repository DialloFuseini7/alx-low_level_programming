#include<stdlib.h>
#include<time.h>
#include<stdio.h>
/*betty style doc for function ma in goes there */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() -RAND _ MAX / 2;
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%i is zero\n", n);
	}
	else 
	{
		printf("%i is zero\n", n);
	}
	return (0);
}
