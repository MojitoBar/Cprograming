// 201814039 주동석

#include <stdio.h>

int main(void)
{
	char c;
	scanf("%c", &c);

	if ('a' <= c && c <= 'z')
	{
		printf("%c 는 소문자 입니다.", c);
	}
	else if ('A' <= c && c <= 'Z')
	{
		printf("%c 는 대문자 입니다.", c);
	}
	else if ('0' <= c && c <= '9')
	{
		printf("%c 는 숫자 입니다.", c);
	}
	else
	{
		printf("%c 는 기타문자 입니다.", c);
	}
	return 0;
}