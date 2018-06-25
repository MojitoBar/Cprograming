#include <stdio.h>

void main()
{
	int data, max;
	
	if (scanf("%d", &max) != 1)
		return printf("no data\n"), 1;

	while (scanf("%d", &data) == 1)
		if (data > max) max = data;
	
	printf("max = %d\n", max);
}