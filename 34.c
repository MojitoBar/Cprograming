// 201814039 주동석

#include <stdio.h>

int main(void)
{
	int year;
	int month;
	int day;

	scanf("%d %d", &year, &month);


	switch (month)
	{
	case 4: case 6: case 9: case 11:
		day = 30;
		break;
	case 2:
		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
		{
			day = 29;
		}
		else
		{
			day = 28;
		}
		break;
	default:
		day = 31;
		break;
	}

	printf("%d년 %d월: %d일", year, month, day);
	return 0;
}