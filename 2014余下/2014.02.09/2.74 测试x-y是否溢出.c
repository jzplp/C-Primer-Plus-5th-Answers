#include<stdio.h>
int tsub_ovf(int x,int y);
int main()
{
	int x1=0x7fffffff;
	int y1=0xf0000000;
	int x2=0x00000011;
	int y2=0xffffff00;
	printf("%d ",tsub_ovf(x1,y1));
	printf("%d ",tsub_ovf(y1,x1));
	printf("%d \n",tsub_ovf(x2,y2));
	return 0;
}
int tsub_ovf(int x,int y)
{
	int sum=x-y;
	int w=(sizeof(int)<<3)-1;
	int mask=1<<w;
	int x_msb=x&mask;
	int y_msb=y&mask;
	int sum_msb=sum&mask;
	int overflow=!x_msb&&y_msb&&sum_msb;
	int underflow=x_msb&&!y_msb&&!sum_msb;
	return overflow||underflow;
}
