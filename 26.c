// 201814039	�ֵ���

#include <stdio.h>

void main()
{
	char op;
	int x, y, result;

	printf("������ �Է��Ͻÿ�.\n");
	printf("(��: 2 + 5)\n");
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
		printf("�������� �ʴ� �������Դϴ�.\n");
		break;
	}

	printf("%d %c %d = %d\n", x, op, y, result);
}