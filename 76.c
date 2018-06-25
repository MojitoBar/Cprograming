// 201814039 주동석
#include <stdio.h>
#include <string.h>
void main()
{
	char s[100], *p;
	puts(strcpy(s, "ab#"));
	// ab#
	puts(strncpy(s, "ABC", 2));
	// AB#
	puts(strncpy(s, "12", 3));
	// 12
	strcpy(s, "AB"), puts(strcat(s, "123"));
	// AB123
	strcpy(s, "AB"), puts(strncat(s, "123", 2));
	// AB12
	printf("%d\n", strcmp("가", "a"));
	// +    
	printf("%d\n", strcmp("a", "A"));
	// +
	printf("%d\n", strcmp("A", "0"));
	// +
	printf("%d\n", strcmp("ab", "ab"));
	// 0
	printf("%d\n", strcmp("ab", "abc"));
	// -
	if (!strncmp("abc", "abC", 2)) 
		printf("equal\n");	
	// equal
	if ((p = strchr("abab", 'b')))
		puts(p);
	// bab
	if ((p = strrchr("abab", 'a')))
		puts(p);	
	// ab 
	if ((p = strstr("AABC", "AB")))
		puts(p);	
	// ABC
}