// 201814039	주동석

#include <stdio.h>

void main()
{
	int x, y, r;

	printf("0보다 큰 두 정수 입력: ");
	scanf("%d %d", &x, &y);

	while (y != 0) 
	{
		r = x % y;
		x = y;
		y = r;
	}

	printf("최대공약수는 %d입니다.\n", x);
}