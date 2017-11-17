#include<stdio.h>
int fit_bits(int x,int n);
int main()
{
	int x1=0x0fffff23;
	int x2=0x00000fff;
	printf("%#x   %#x \n",fit_bits(x1,12),fit_bits(x2,12));
	return 0;
}
int fit_bits(int x,int n)
{
	int count=sizeof(int)<<3;
	return x==(x<<(count-n)>>count-n);
}

