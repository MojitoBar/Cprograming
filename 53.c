// 201814039 ¡÷µøºÆ

#include <stdio.h>

unsigned combination(unsigned n, unsigned r)
{
	if (r == 0 || n == r)
	{
		return 1;
	}

	return combination(n - 1, r) + combination(n - 1, r - 1);
}

void main()
{
	printf("%d", combination(5, 3));
}