// 201814039 주동석 04-09

#include <stdio.h>

void main()
{
	int sec;

	printf("초를 입력해주세요 : ");
	scanf("%d", &sec);

	printf("%d 시 %d 분 %d 초 입니다.", sec / 3600, sec % 3600 / 60, sec % 3600 % 60);
}