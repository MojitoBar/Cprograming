// �й� : 201814039
// �̸� : �ֵ���
// ���� : 03-26

#include<stdio.h>

void main()
{
	double rate;
	double usd;
	int krw;

	printf("�޷��� ���� ��ȭ ȯ���� �Է��Ͻÿ� : ");
	scanf("%lf", &rate);

	printf("��ȭ �ݾ��� �Է��Ͻÿ� : ");
	scanf("%d", &krw);

	usd = krw / rate;

	printf("��ȭ %d �� ȯ���� ������ �޷� : %f\n", krw, usd);
}