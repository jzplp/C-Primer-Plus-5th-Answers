#include<stdio.h>
unsigned ratate_right(unsigned x,int n);
int main()
{
	unsigned x=0x12345678;
	printf("%#x\n",ratate_right(x,20));
	return 0;
}
unsigned ratate_right(unsigned x,int n)
{
	if(n==0)
		return x;
	unsigned temp=x&((1<<n)-1);
	printf("%#x\n",temp);
	x=x>>n;
	temp=temp<<((sizeof(int)<<3)-n);
	printf("%#x\n",temp);
	return x+temp;
}

