// 201814039 주동석

#include <stdio.h>
#define PI 3.141592

int main(void)
{
	int r;
	double v;
	printf("반지름을 입력해 주세요: ");
	scanf("%d", &r);

	printf("부피는 %f 입니다.", 4.0 / 3.0 * PI * r * r * r);
	return 0;
}