// 201814039 �ֵ���

#include <stdio.h>

int main(void)
{
	int a;
	scanf("%d", &a);

	(a > 0) ? printf("��ȣ: +") : (a < 0) ? printf("��ȣ: -") : printf("��ȣ: 0");
}