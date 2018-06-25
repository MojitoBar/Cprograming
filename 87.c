// 201814039 ÁÖµ¿¼®
#include <stdio.h>

union ip_address 
{
	unsigned char saddr[4];
	unsigned int iaddr;
};

int main(void) 
{
	union ip_address addr =
	{ 0x7F, 0x00, 0x00, 0x01 };
	printf("%08X\n", addr.iaddr);
	return 0;
}
