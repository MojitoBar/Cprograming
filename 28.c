// 201814039	�ֵ���

#include <stdio.h>
#include <limits.h>

void main()
{
	int number, min_value = INT_MAX;

	printf("������  �Է��Ͻÿ�.\n����� Ctrl+z\n");
	while (scanf("%d", &number) != EOF)
		if (number < min_value)
			min_value = number;

	printf("�ּڰ��� %d\n", min_value);
}