#include<stdio.h>
int sra(int x,int k);
unsigned srl(unsigned x,int k);
int main()
{
	int x1=-12345;
	unsigned x2=12345;
	printf("%d  %d \n%u  %u\n",sra(x1,2),x1>>2,srl(x2,2),x2>>2);
	return 0;
}
int sra(int x,int k)
{
	int xsrl=(unsigned)x>>k;
	int temp=~(!!(x&(1<<(8*sizeof(int)-1)))-1)<<(8*sizeof(int)-k);
	xsrl+=temp;
	return xsrl;
}
unsigned srl(unsigned x,int k)
{
	unsigned xsra=(int)x>>k;
	unsigned temp=~(!!(x&(1<<(8*sizeof(int)-1)))-1)<<(8*sizeof(int)-k);
	xsra-=temp;
	return xsra;
}
