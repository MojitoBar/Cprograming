// 201814039 �ֵ���

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

	printf("%d�� %d��: %d��", year, month, day);
	return 0;
}