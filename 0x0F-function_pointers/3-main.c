#include "3-calc.h"

/**
 * main - check the code for holberton school students.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
		{
			printf("Error\n");
			exit(99);
		}
		printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
		return (0);
	}
	printf("Error\n");
	exit(98);
}
