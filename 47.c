// 201814039 �ֵ���
#include <stdio.h> 

double f_to_c(double f)
{
	return 5.0 / 9.0 * (f - 32.0);
}

int main() 
{
	double f;
	printf("ȭ�� �µ��� �Է��Ͻÿ�: ");
	scanf("%lf", &f);

	printf("���� �µ��� %lf�Դϴ�.", f_to_c(f));

	return 0;
}