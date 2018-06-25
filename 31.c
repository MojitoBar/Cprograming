// 201814039	주동석

#include <stdio.h>

void main()
{
	long fact = 1;
	int i, n;

	printf("정수를 입력하시오: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		fact = fact * i;

	printf("%d! 은 %ld입니다.\n", n, fact);
}