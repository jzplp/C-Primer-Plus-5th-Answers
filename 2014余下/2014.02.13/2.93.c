#include<stdio.h>
typedef unsigned float_bits;
float_bits float_half(float_bits f);
int main()
{
	unsigned x1=0x004fffff;
	unsigned x2=float_half(x1);
	float f=*((float*)(&x1));
	printf("%f\n",f);
	f=*((float*)(&x2));
	printf("%f\n",f);
	return 0;	

}
float_bits float_half(float_bits f)
{
	unsigned sign=f>>31;
	unsigned exp=f>>23&0xff;
	unsigned frac=f&0x7fffff;
	if(exp==0xff)
		return f;
	else if(exp==0)
	{
		if(frac&0x1==0)
			frac=frac>>1&0x7fffff;
		else
		{
			if(frac&0x2==0)
				frac=frac>>1&0x7fffff;
			else
				frac=(frac>>1&0x7fffff)+1;
		}
	}
	else if(exp==0x1)
	{
		exp=0;
		if(frac&0x1==0)
			frac=(frac>>1)+0x400000;
		else
		{
			if(frac&0x2==0)
				frac=(frac>>1)+0x400000;
			else
				frac=(frac>>1)+0x400000+1;
		}
	}
	else
		exp--;
	return (sign<<31)|(exp<<23)|frac;
}


