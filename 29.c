// 201814039	�ֵ���

#include <stdio.h>

void main()
{
	int x, y, r;

	printf("0���� ū �� ���� �Է�: ");
	scanf("%d %d", &x, &y);

	while (y != 0) 
	{
		r = x % y;
		x = y;
		y = r;
	}

	printf("�ִ������� %d�Դϴ�.\n", x);
}