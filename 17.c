#include <stdio.h>

void main()
{
	int a;
	printf("3�ڸ� ������ �Է� : ");
	scanf("%d", &a);

	printf("100�� �ڸ� %d, 10�� �ڸ� %d, 1�� �ڸ� %d", a / 100, (a % 100) / 10, a % 10);
}