// 201814039 ¡÷µøºÆ

#include <stdio.h>
#include <string.h>
int main(void)
{
	char string[100];
	strcpy(string, "Hello world from ");
	strcat(string, "strcpy ");
	strcat(string, "and ");
	strcat(string, "strcat!");
	printf("string = %s\n", string);
	return 0;
}