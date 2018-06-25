// 201814039 ¡÷µøºÆ

#include <stdio.h>

int main(void)
{
	for (int i = 0; i < 7; i++)
	{
		for (int j = 6; j > i; j--)
		{
			printf(" ");
		}

		for (int k = 0; k <= i; k++)
		{
			printf("*");
		}
		printf("\n");
	}
}