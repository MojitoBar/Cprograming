// 201814039 �ֵ���
#include <stdio.h> 

int main(void)
{
	int a[] = { 10, 20, 30, 40, 50 };

	printf("a = %u\n", (unsigned)a);
	printf("a + 1 = %u\n", (unsigned)(a + 1));
	printf("*a = %d\n", *a);
	printf("*(a + 1) = %d\n", *(a + 1));

	return 0;
}

