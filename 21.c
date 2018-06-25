// 201814039 주동석

#include <stdio.h>

int main(void)
{
	int a;
	scanf("%d", &a);

	(a > 0) ? printf("부호: +") : (a < 0) ? printf("부호: -") : printf("부호: 0");
}