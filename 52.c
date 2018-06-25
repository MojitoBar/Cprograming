// 201814039 주동석

#include <stdio.h>

void print_binary(unsigned x) {
	if (x / 2) print_binary(x / 2);	// 순환 호출
	printf("%d", x % 2);		// 나머지 출력
}

void main()
{
	print_binary(5);
}