// 201814039 주동석

#include <stdio.h>

int main(void)
{
	int time;
	int age;

	scanf("%d %d", &time, &age);

	if (time < 17)
	{
		if ((age >= 3 && age <= 12) || age >= 65)
		{
			printf("요금은 25000원 입니다.");
		}
		else if (age < 3)
		{
			printf("놀이 공원에 입장할 수 없는 나이 입니다.");
		}
		else
		{
			printf("요금은 34000원 입니다.");
		}
	}

	else if (time >= 17 && time <= 24)
	{
		printf("요금은 10000원 입니다.");
	}
	return 0;
}