#include <stdio.h>

void main()
{
	int data, n = 0, sum = 0;

	while (scanf("%d", &data) == 1)
		sum += data, n++;
	if (!n) return printf("no data\n"), 1;
		printf("average = %f\n", (double)sum / n);
}