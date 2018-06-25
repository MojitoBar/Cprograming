// 201814039 주동석
#include <stdio.h> 

double get_tax(int income)
{
	if (income > 1000)
	{
		return income * 0.1f;
	}
	else
	{
		return income * 0.08f;
	}
}

int main()
{
	int income;
	printf("소득을 입력하시오(만원): ");
	scanf("%d", &income);

	printf("소득세는 %g만원 입니다.", get_tax(income));
	return 0;
}