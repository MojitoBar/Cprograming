// 201814039 ¡÷µøºÆ

#include <stdio.h>

unsigned fib(unsigned n) {
	int a = 0, b = 1, c;
	if (n < 2) return n;
	while (1) {
		c = a + b;
		if (--n < 2) return c;
		a = b; b = c;
	}
}

void main()
{
	printf("%d", fib(10));
}