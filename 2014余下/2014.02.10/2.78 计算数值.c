#include<stdio.h>
int mul5div(int x)
{
	x=(x<<2)+x;
	printf("%#x \n",x);
	int w_1=(sizeof(int)<<3)-1;
	int x_msb=x>>w_1;
	x_msb&&(x=x+(1<<3)-1);
	x=x>>3;
	return x;
}
int main()
{
	int x=0x12345678;
	printf("%#x \n",mul5div(x));
	return 0;
}

