// 201814039 �ֵ��� 04-09

#include <stdio.h>

void main()
{
	int sec;

	printf("�ʸ� �Է����ּ��� : ");
	scanf("%d", &sec);

	printf("%d �� %d �� %d �� �Դϴ�.", sec / 3600, sec % 3600 / 60, sec % 3600 % 60);
}