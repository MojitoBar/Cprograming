// 201814039 ¡÷µøºÆ

#include <stdio.h>

int main(void)
{
	double x;

	scanf("%lf", &x);

	if (x <= 0)
	{
		x = x * x * x - 9 * x + 2;
	}
	else if (x > 0)
	{
		x = 7 * x + 2;
	}

	printf("%lf", x);

	return 0;
}