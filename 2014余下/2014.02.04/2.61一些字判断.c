#include<stdio.h>
#include<string.h>
int main()
{
	int x1=0xffffffff;
	int x2=0xffefffff;
	int x3=0x00000000;
	int x4=0x00010000;
	int x5=0xff00f125;
	int x6=0x00ffffff;

	printf("%d  %d\n",!(~x1),!(~x2));
	printf("%d  %d\n",!x3,!x4);
	printf("%d  %d\n",!~((char)(x5>>((sizeof(int)-1)<<3))),!~((char)(x6>>((sizeof(int)-1)<<3))));
	printf("%d  %d\n",!((char)(x5>>((sizeof(int)-1)<<3))),!((char)(x6>>((sizeof(int)-1)<<3))));
	return 0;
}


