#include <stdio.h>
#include"main.h"
/**
 * main - print the name of the programe
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (success)
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
