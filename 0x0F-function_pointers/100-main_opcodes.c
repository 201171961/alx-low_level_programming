#include <stdio.h>
#include <stdlib.h>

/**
 * main -func that prints its own opcodes
 * @argc: num of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bytes, x;
	char *ary;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ary = (char *)main;

	for (x = 0; x < bytes; x++)
	{
		if (x == bytes - 1)
		{
			printf("%02hhx\n", ary[x]);
			break;
		}
		printf("%02hhx ", ary[x]);
	}
	return (0);
}

