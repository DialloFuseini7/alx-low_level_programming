#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Return: always 0
 * @argc: number of arguments
 * @argv: list of arguments in the function
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		puts("Error");
		return (1);
	}
	else
	{
	int x, y;

		x = atoi(*(argv + 1));
		y = atoi(*(argv + 2));
		printf("%d\n", x * y);
	}
	return (0);
}
