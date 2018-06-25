// 201814039 주동석

#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int sum = 1;

	printf("밑: ");
	scanf("%d", &a);

	printf("지수: ");
	scanf("%d", &b);
	
	for (int i = 1; i <= b; i++)
	{
		sum *= a;
	}

	printf("%d^%d = %d", a, b, sum);

	return 0;
}