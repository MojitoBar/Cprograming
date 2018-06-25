// 학번 : 201814039
// 이름 : 주동석
// 제출 : 03-26

#include<stdio.h>
#define PIE 3.14

void circle()
{
	float half;
	float area;

	printf("반지름을 입력해주세요 : ");

	scanf("%g", &half);

	area = (half * half) * PIE;

	printf("반지름 %f 를 가진 원의 넓이는 : %g", half, area);
}
