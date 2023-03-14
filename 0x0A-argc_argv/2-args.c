#include <stdio.h>
/**
 * main - entry point
 * Return: always 0
 * @argc: number of arguments
 * @argv: list of arguments in the function
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
