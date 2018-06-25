// 201814039 주동석
#include <stdio.h> 

double f_to_c(double f)
{
	return 5.0 / 9.0 * (f - 32.0);
}

int main() 
{
	double f;
	printf("화씨 온도를 입력하시오: ");
	scanf("%lf", &f);

	printf("섭씨 온도는 %lf입니다.", f_to_c(f));

	return 0;
}