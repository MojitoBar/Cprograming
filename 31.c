// 201814039	�ֵ���

#include <stdio.h>

void main()
{
	long fact = 1;
	int i, n;

	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		fact = fact * i;

	printf("%d! �� %ld�Դϴ�.\n", n, fact);
}