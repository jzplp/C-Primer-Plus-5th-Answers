#include<stdio.h>
typedef unsigned float_bits;
float_bits float_twice(float_bits f);
int main()
{
	unsigned x1=0xfa700000;
	unsigned x2=float_twice(x1);
	float f=*((float*)(&x1));
	printf("%f\n",f);
	f=*((float*)(&x2));
	printf("%f\n",f);
	return 0;	

}
float_bits float_twice(float_bits f)
{
	unsigned sign=f>>31;
	unsigned exp=f>>23&0xff;
	unsigned frac=f&0x7fffff;
	if(exp==0xff)
		return f;
	else if(exp==0)
	{
		if(frac<(1<<22))
			frac=frac<<1&0x7fffff;
		else
		{
			frac=frac<<1&0x7fffff;
			exp++;
		}
	}
	else if(exp==0xff-1)
		frac=0x7fffff;
	else
		exp++;
	return (sign<<31)|(exp<<23)|frac;
}


