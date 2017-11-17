#include<stdio.h>
int calculate(int a,int b); 
int main(void)
{
	int a,b,sum;
	printf("请输入两个整数 用空格隔开（q退出）\n");
	while(scanf("%d %d",&a,&b)==2)
	{
		sum=calculate(a,b);
		printf("和为%d\n",sum);
		printf("请输入两个整数 用空格隔开（q退出）\n");
	}
	return 0;
}
int calculate(int a,int b)
{
	int sum;
	sum=a+b;
	return sum;
}
