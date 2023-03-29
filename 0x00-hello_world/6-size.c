#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0(success)
 */
int main(void)
{
	int c, i, li, lli, f;

	c = sizeof(char);
	i = sizeof(int);
	li = sizeof(long int);
	lli = sizeof(long long int);
	f = sizeof(float);

	printf("Size of a char: %d byte(s)\nSize of an int: %d byte(s)\n"
			"Size of a long int: %d byte(s)\nSize of a long long int: %d byte(s)\n"
			"Size of a float: %d byte(s)\n", c, i, li, lli, f);

	return (0);
}
