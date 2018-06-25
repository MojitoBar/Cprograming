#include <stdio.h>

void main()
{
	double c;
	double f;

	printf("화씨 온도를 입력해주세요 : ");
	scanf("%lf", &f);

	printf("섭씨 온도는 : %lf", (f - 32) / 1.8000);
}