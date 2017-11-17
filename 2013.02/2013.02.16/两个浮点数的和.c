#include<stdio.h>
double calculate(double a,double b); 
int main(void)
{
	double a,b;
	printf("请输入两个数 用空格隔开（q退出）\n");
	while(scanf("%lf %lf",&a,&b)==2)
	{
		printf("和为%.2lf\n",calculate(a,b));
		printf("请输入两个数 用空格隔开（q退出）\n");
	}
	return 0;
}
double calculate(double a,double b)
{
	return a+b;
}


