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

	int b;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n = n % 10;
	if (b > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, b);
			if (b == 0)
				printf("Last digit of %d is %d and 0\n", n, b);
			if (b < 6 && b != 0)
				printf("Last digit of %d is %d and less than 6 and not o\n", n, b);
			return (0);
}
