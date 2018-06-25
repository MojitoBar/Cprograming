// 201814039 ¡÷µøºÆ

#include <stdio.h>

unsigned fib(unsigned n) {
	if (n < 2) return n;
	return fib(n - 2) + fib(n - 1);
}

void main()
{
	printf("%d", fib(10));
}