// 201814039 �ֵ���

#include <stdio.h>

void print_binary(unsigned x) {
	if (x / 2) print_binary(x / 2);	// ��ȯ ȣ��
	printf("%d", x % 2);		// ������ ���
}

void main()
{
	print_binary(5);
}