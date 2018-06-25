#include <stdio.h>

void main()
{
	int a, b, c;
	
	int big;
	
	printf("3가지 수를 입력해주세요 : ");
	scanf("%d %d %d", &a, &b, &c);

	big = a < b ? b < c ? c : b : a < c ? c : a;
	printf("가장 큰 수는 %d 입니다.", big);
}