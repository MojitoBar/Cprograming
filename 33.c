// 201814039 �ֵ���

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
			printf("����� 25000�� �Դϴ�.");
		}
		else if (age < 3)
		{
			printf("���� ������ ������ �� ���� ���� �Դϴ�.");
		}
		else
		{
			printf("����� 34000�� �Դϴ�.");
		}
	}

	else if (time >= 17 && time <= 24)
	{
		printf("����� 10000�� �Դϴ�.");
	}
	return 0;
}