// 201814039 �ֵ���
#include <stdio.h> 
#include <math.h>

double sin_degree(double degree)
{
	double radian;
	radian = 3.141592 * degree / 180.0;
	return sin(radian);
}

int main() 
{
	for (int i = 0; i <= 180; i+= 10)
	{
		printf("sin(%d)�� ���� %lf\n", i, sin_degree(i));
	}
}