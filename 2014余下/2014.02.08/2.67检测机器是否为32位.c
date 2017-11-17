#include<stdio.h>
int int_size_is_32_1();
int main()
{
	printf("%d \n",int_size_is_32_1());
	printf("%d \n",int_size_is_32_2());
	return 0;
}
int int_size_is_32_1()
{
	unsigned set_msb=1<<31;
	unsigned reversal=((unsigned)(~0)>>1)+1;
	printf("%#x %#x \n",set_msb,reversal);
	return reversal==set_msb;
}
int int_size_is_32_2()
{
	unsigned set_msb=1<<15;
	set_msb=set_msb<<15;	
	set_msb=set_msb<<1;
	unsigned reversal=((unsigned)(~0)>>1)+1;
	printf("%#x %#x \n",set_msb,reversal);
	return reversal==set_msb;
}
