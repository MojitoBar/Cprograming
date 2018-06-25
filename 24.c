// 201814039 주동석

#include <stdio.h>

int main(void)
{
	int x, y, result;
	char c;
	printf("수식을 입력하시요.\n");
	printf("(예: 2 + 5)\n");
	printf(">> ");

	scanf("%d %c %d", &x, &c, &y);


	if (c == '+')
		result = x + y;
	else if (c == '-')
		result = x - y;
	else if (c == '*')
		result = x * y;
	else if (c == '/')
		result = x / y;
	else if (c == '%')
		result = x % y;
	else
	{
		printf("지원하지 않는 연산자입니다.");
		return 1;
	}

	printf("%d %c %d = %d", x, c, y, result);
	
	return 0;
}