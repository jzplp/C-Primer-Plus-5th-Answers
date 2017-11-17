#include<stdio.h>
unsigned replace_byte(unsigned x,unsigned char b,int i);
int main()
{
	unsigned x=0x12345678;
	char b=0xab;
	printf("%#x\n",replace_byte(x,b,0));
	printf("%#x\n",replace_byte(x,b,2));
	return 0;
}
unsigned replace_byte(unsigned x,unsigned char b,int i)
{
	x&=~(0xff<<(i*8)); 
	x+=((int)b)<<i*8;
	return x;
}
