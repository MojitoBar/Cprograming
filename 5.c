// �й� : 201814039
// �̸� : �ֵ���
// ���� : 03-26

#include<stdio.h>
#define PIE 3.14

void circle()
{
	float half;
	float area;

	printf("�������� �Է����ּ��� : ");

	scanf("%g", &half);

	area = (half * half) * PIE;

	printf("������ %f �� ���� ���� ���̴� : %g", half, area);
}
