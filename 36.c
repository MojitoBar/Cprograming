// 201814039 �ֵ���

#include <stdio.h>

int main(void)
{
	int n;
	int r;
	int sum = 1;

	printf("n�� ��: ");
	scanf("%d", &n);

	printf("r�� ��: ");
	scanf("%d", &r);

	for (int i = 0; i <= r + 1; i++)
	{
		sum *= (n - i);
	}

	printf("������ ���� %d�Դϴ�.", sum);
}