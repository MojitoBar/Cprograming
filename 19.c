#include <stdio.h>

void main()
{
	int a, b, c;
	
	int big;
	
	printf("3���� ���� �Է����ּ��� : ");
	scanf("%d %d %d", &a, &b, &c);

	big = a < b ? b < c ? c : b : a < c ? c : a;
	printf("���� ū ���� %d �Դϴ�.", big);
}