#include <sdio.h>

/**
 *
 * Return: will return success if 0
 */
int main(void)
{
	int j;
	long int k;
	long long int l;
	char d;
	float;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of an int: %lu bytes(s)\n", (unsigned long)sizeof(j));
	printf("Size of an long: %lu bytes(s)\n", (unsigned long)sizeof(k));
	printf("Size of long long int: %lu bytes(s)\n", (unsigned long)sizeof(l));
	printf("Size of float: %lu bytes(s)\n", (unsigned long)sizeof(f));
	return (0);
}
