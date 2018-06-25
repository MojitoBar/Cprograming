// 201814039 ¡÷µøºÆ

#include <stdio.h>
#include <math.h>

double log2(double x)
{
	return log(x) / log(2);
}

int main()
{
	printf("%lf", log2(8));
	return 0;
}