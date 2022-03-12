#include <stdio.h>

/**
 *main - prints various output when compiled
 * Return: will return success if 0
 */
int main(void)
{
	int j;
	long int k;
	long long int l;
	char d;
	float f;

	printf("Size of a char: %lu byte\n", (unsigned long)sizeof(d));
	printf("Size of an int: %lu byte\n", (unsigned long)sizeof(j));
	printf("Size of an long int: %lu byte\n", (unsigned long)sizeof(k));
	printf("Size of long long int: %lu byte\n", (unsigned long)sizeof(l));
	printf("Size of float: %lu byte\n", (unsigned long)sizeof(f));
	return (0);
}
