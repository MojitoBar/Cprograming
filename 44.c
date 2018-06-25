// 201814039 ¡÷µøºÆ
#include <stdio.h>
#include <stdlib.h>
#define MAX 45

void main()
{
	int i;
	srand(time(NULL));
	for (i = 0; i < 6; i++)
	{
		printf(" %d", 1 + rand() % MAX);
	}
	printf("\n");
	return 0;
}