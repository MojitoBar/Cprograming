// 201814039 �ֵ���
#include <stdio.h> 

double get_tax(int income)
{
	if (income > 1000)
	{
		return income * 0.1f;
	}
	else
	{
		return income * 0.08f;
	}
}

int main()
{
	int income;
	printf("�ҵ��� �Է��Ͻÿ�(����): ");
	scanf("%d", &income);

	printf("�ҵ漼�� %g���� �Դϴ�.", get_tax(income));
	return 0;
}