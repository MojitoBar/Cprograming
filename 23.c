// 201814039 �ֵ���

#include <stdio.h>

int main(void)
{
	char c;
	scanf("%c", &c);

	if ('a' <= c && c <= 'z')
	{
		printf("%c �� �ҹ��� �Դϴ�.", c);
	}
	else if ('A' <= c && c <= 'Z')
	{
		printf("%c �� �빮�� �Դϴ�.", c);
	}
	else if ('0' <= c && c <= '9')
	{
		printf("%c �� ���� �Դϴ�.", c);
	}
	else
	{
		printf("%c �� ��Ÿ���� �Դϴ�.", c);
	}
	return 0;
}