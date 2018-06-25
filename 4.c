// 학번 : 201814039
// 이름 : 주동석
// 제출 : 03-26

#include<stdio.h>


void main()
{

	int month = 12;
	int pay;

	int total;

	printf("한달에 받는 월급을 입력해 주세요 : ");
	scanf("%d", &pay);
	
	total = pay * month;
	printf("내가 한달에 받는 월급은 : %d\n", pay);
	printf("내가 일년에 받는 연봉은 : %d\n", total);
}