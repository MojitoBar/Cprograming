#include <stdio.h>

void main()
{
	int a, b, i, sum = 0;

	if (scanf("%d %d", &a, &b) != 2)
		return printf("input error\n"), 1;
	if (a > b) i = a, a = b, b = i;
		for (i = a; i <= b; i++) sum += i;
			printf("sum from %d to %d = %d\n", a, b, sum);
}