#include<stdio.h>
int any_even_one(unsigned x);
int main()
{
	int a1=0x00000000;
	int a2=0xffffffff;
	printf("%d  %d\n",any_even_one(a1),any_even_one(a2));
	return 0;
}
int any_even_one(unsigned x)
{
	return !!(x&0xaaaaaaaa);
}
