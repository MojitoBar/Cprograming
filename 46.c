// 201814039 주동석
#include <stdio.h> 
#include <math.h>

double round(double f)
{
	f = f + 0.5;
	return floor(f);
}

int main() 
{
	double f;
	printf("실수를 입력하시오: ");
	scanf("%lf", &f);

	printf("반올림한 값은 %lf 입니다.", round(f));
}