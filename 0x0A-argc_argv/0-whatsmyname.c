#include <stdio.h>
/**
 * main -entry point
 * Return: always 0
 * @argc: number of arguments
 * @argv: list of arguments in the function
 */
int __attribute__((unused)) main(int argc, char *argv[])
{
	argc = argc;
	puts(*argv);
	return (0);
}
