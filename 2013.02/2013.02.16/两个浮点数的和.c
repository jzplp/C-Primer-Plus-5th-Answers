#include<stdio.h>
double calculate(double a,double b); 
int main(void)
{
	double a,b;
	printf("������������ �ÿո������q�˳���\n");
	while(scanf("%lf %lf",&a,&b)==2)
	{
		printf("��Ϊ%.2lf\n",calculate(a,b));
		printf("������������ �ÿո������q�˳���\n");
	}
	return 0;
}
double calculate(double a,double b)
{
	return a+b;
}


