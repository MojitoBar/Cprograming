#include <stdio.h>

void main()
{
	int a;
	printf("3자리 십진수 입력 : ");
	scanf("%d", &a);

	printf("100의 자리 %d, 10의 자리 %d, 1의 자리 %d", a / 100, (a % 100) / 10, a % 10);
}