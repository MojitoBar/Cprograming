// 201814039	주동석

#include <stdio.h>

void main()
{
	char op;
	int x, y, result;

	printf("수식을 입력하시요.\n");
	printf("(예: 2 + 5)\n");
	printf(">> ");
	scanf("%d %c %d", &x, &op, &y);

	switch (op)
	{
	case '+':
		result = x + y;
		break;
	case '-':
		result = x - y;
		break;
	case '*':
		result = x * y;
		break;
	case '/':
		result = x / y;
		break;
	case '%':
		result = x % y;
		break;
	default:
		printf("지원되지 않는 연산자입니다.\n");
		break;
	}

	printf("%d %c %d = %d\n", x, op, y, result);
}