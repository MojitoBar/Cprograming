// 201814039 �ֵ���

#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int sum = 1;

	printf("��: ");
	scanf("%d", &a);

	printf("����: ");
	scanf("%d", &b);
	
	for (int i = 1; i <= b; i++)
	{
		sum *= a;
	}

	printf("%d^%d = %d", a, b, sum);

	return 0;
}