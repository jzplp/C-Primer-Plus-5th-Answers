#include<stdio.h>
int divide_power2(int x,int k)
{
	int w=sizeof(int)<<3;
	int x_msb=x>>w-1;
	(!x_msb)&&(x=(x>>k));
	int temp=1<<k;
	x_msb&&(x=(x+temp-1)>>k);
	return x;
}
int main()
{
	int x=0xff0fffff;
	printf("%#x \n",divide_power2(x,20));
	return 0;
}
