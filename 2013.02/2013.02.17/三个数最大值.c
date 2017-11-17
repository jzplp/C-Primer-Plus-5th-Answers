#include<stdio.h>
int mmax(int ,int ,int );
int main()
{
	int a,b,c;
	while(scanf("%d %d %d",&a,&b,&c)==3)
	{
		printf("%d\n",mmax(a,b,c)); 
	}
	return 0;
}
int mmax(int a,int b,int c)
{
	if(a>b)
	{
		if(a>c)
			return c;
		return a;
	}
	if(b>c)
		return b;
	return c;
}



