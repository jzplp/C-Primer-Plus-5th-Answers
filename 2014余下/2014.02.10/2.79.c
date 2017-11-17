#include<stdio.h>
#include<limits.h>
int fiveeighths(int x)
{
	int w_1=(sizeof(int)<<3)-1;
	int x_msb=x>>w_1;
	int x_4=(x<<2);
	//printf("%#x \n",x);
	int x_4_msb=x_4>>w_1;
	!(x_msb==x_4_msb)&&(((x_msb==0)&&(x_4=INT_MAX))||(x_4=INT_MIN));
	int x_product=x+x_4;
	int x_p_msb=x_product>>w_1;
	!(x_msb==x_p_msb)&&(((x_msb==0)&&(x_product=INT_MAX))||(x_product=INT_MIN));
	x_msb&&(x_product=x_product+(1<<3)-1);
	x_product=x_product>>3;
	return x_product;
}
int main()
{
	int x=0x70345678;
	printf("%#x \n",fiveeighths(x));
	return 0;
}
