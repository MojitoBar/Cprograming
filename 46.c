// 201814039 �ֵ���
#include <stdio.h> 
#include <math.h>

double round(double f)
{
	f = f + 0.5;
	return floor(f);
}

int main() 
{
	double f;
	printf("�Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf", &f);

	printf("�ݿø��� ���� %lf �Դϴ�.", round(f));
}