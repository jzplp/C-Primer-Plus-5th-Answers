#include<stdio.h>
int main()
{
	unsigned x=0x89abcdef;
	unsigned y=0x76543210;
	printf("%#x\n",(x&0xff)+(y&(~0xff)));
	return 0;
}

