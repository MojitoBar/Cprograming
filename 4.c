// �й� : 201814039
// �̸� : �ֵ���
// ���� : 03-26

#include<stdio.h>


void main()
{

	int month = 12;
	int pay;

	int total;

	printf("�Ѵ޿� �޴� ������ �Է��� �ּ��� : ");
	scanf("%d", &pay);
	
	total = pay * month;
	printf("���� �Ѵ޿� �޴� ������ : %d\n", pay);
	printf("���� �ϳ⿡ �޴� ������ : %d\n", total);
}