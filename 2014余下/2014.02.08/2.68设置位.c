#include<stdio.h>
//#include
int lower_bits(int x,int n);
int main()
{
	int x=0x12345678;
	printf("%#x  \n",lower_bits(x,20));
	return 0;
}
int lower_bits(int x,int n)
{
	int temp;
	if(n==sizeof(int))
		return ~0;
	else
		temp=(1<<n)-1;
	return x|temp;
}
