#include<stdio.h>
#include<stdbool.h>
#include<limits.h>
int saturating(int x,int y)
{
	int w=(sizeof(int)<<3)-1;
	int mask=1<<w;
	int x_msb=x&mask;
	int y_msb=y&mask;
	int sum=x+y;
	int sum_msb=sum&mask;
	int overflow=!x_msb&&!y_msb&&sum_msb;
	int underflow=x_msb&&y_msb&&!sum_msb;
	//printf("%d  %d %#x %#x %#x %#x %#x \n",overflow,underflow,x_msb,y_msb,sum_msb,x,y);
	overflow&&(sum=INT_MAX);
	underflow&&(sum=INT_MIN);
	return sum;
}
int main()
{
	int x1=0x7ffffff1;
	int x2=0x80000500;
	printf("%#x \n",saturating(1,1));
	printf("%#x\n",saturating(x2,x2));
	return 0;
}



