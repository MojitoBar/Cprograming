// 201814039 주동석

#include <stdio.h>

int main(void)
{
	int n;
	int r;
	int sum = 1;

	printf("n의 값: ");
	scanf("%d", &n);

	printf("r의 값: ");
	scanf("%d", &r);

	for (int i = 0; i <= r + 1; i++)
	{
		sum *= (n - i);
	}

	printf("순열의 값은 %d입니다.", sum);
}