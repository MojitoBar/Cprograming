#include <stdio.h>

void main()
{
	double a;
	int b;
	scanf("%lf", &a);
	b = a;
	printf("정수 부분은 %d 이고 실수 부분은 %g 이다", b, a - b);
}