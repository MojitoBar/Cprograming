// 201814039 주동석 04-09

#include <stdio.h>

void main()
{
	int cm;

	printf("센치미터를 입력해주세요 : ");
	scanf("%d", &cm);

	printf("%d 미터 %d 센치미터 입니다.", cm / 100, cm % 100);
}