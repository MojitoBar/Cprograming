// 학번 : 201814039
// 이름 : 주동석
// 제출 : 03-26

#include<stdio.h>

void main()
{
	double rate;
	double usd;
	int krw;

	printf("달러에 대한 원화 환율을 입력하시오 : ");
	scanf("%lf", &rate);

	printf("원화 금액을 입력하시오 : ");
	scanf("%d", &krw);

	usd = krw / rate;

	printf("원화 %d 에 환율을 적용한 달러 : %f\n", krw, usd);
}