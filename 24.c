// 201814039 �ֵ���

#include <stdio.h>

int main(void)
{
	int x, y, result;
	char c;
	printf("������ �Է��Ͻÿ�.\n");
	printf("(��: 2 + 5)\n");
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
		printf("�������� �ʴ� �������Դϴ�.");
		return 1;
	}

	printf("%d %c %d = %d", x, c, y, result);
	
	return 0;
}