#include<stdio.h>
typedef unsigned float_bits;
float_bits float_negate(float_bits f);
int main()
{
	unsigned x1=0x7c700000;
	x1=float_negate(x1);
	float f=*((float*)(&x1));
	printf("%f\n",f);
	return 0;
}
float_bits float_negate(float_bits f)
{
	unsigned exp=f>>23&0xff;
	if(exp==0xff)
		return f;
	return f^(1<<31);
}

