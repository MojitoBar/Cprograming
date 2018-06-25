#include <stdio.h>
#define TAX_RATE 0.2

int main(void)
{
	const int MONTHS = 12;
	int m_salary, y_salary;

	printf("월급을 입력하시오 : ");
	scanf("%d", &m_salary);

	y_salary = m_salary * MONTHS;

	printf("연봉은 %d 입니다.\n", y_salary);
	printf("세금은 %f 입니다.\n", y_salary * TAX_RATE);

	return 0;
}