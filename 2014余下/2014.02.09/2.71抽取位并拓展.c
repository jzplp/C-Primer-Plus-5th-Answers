#include<stdio.h>
int xbyte(unsigned word,int bytenum);
int main()
{
	unsigned x=0x12f456f8;
	printf("%#x\n",xbyte(x,0));
	return 0;
}
int xbyte(unsigned word,int bytenum)
{
	//int x=word;
	return ((int)word<<(3-bytenum<<3))>>24;
}
