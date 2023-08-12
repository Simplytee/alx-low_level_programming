#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: Invariably return 0 (Success)
 */
int main(void)
{
	int n;

	int c;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	c = n % 10;
	if (c > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, c);
			if (c == 0)
				printf("Last digit of %d is %d and 0\n", n, c);
			if (c < 6 && c != 0)
				printf("Last digit of %d is %d and less than 6 and not o\n", n, c);
			return (0);
}
