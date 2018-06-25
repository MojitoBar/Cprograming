// 201814039	주동석

#include <stdio.h>

void main()
{
	int month, days;
	scanf("%d", &month);

	switch (month)
	{
	case 2:
		days = 28;
		break;
	case 4: case 6: case 9: case 11:
		days = 30;
		break;
	default:
		days = 31;
		break;
	}
	printf("%d월의 일수는 %d입니다.", month, days);
}