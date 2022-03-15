#include <main.h>
#include <stdio.h>

/**
 *Main - Entry point
 *Return:always 0 (success)                                    
 */


int main(void){

	int n = 0;
	char msg[] = "_putchar\n";
	char c;
	while (n <= 8)
	{
		c = msg[n];
		_putchar(c);
		n++;
	}
	return (0);
}
