#include<stdio.h>
double mean (double a,double b);
int main(void)
{
	double x,y;
	while(scanf("%lf %lf",&x,&y)==2)
	{
		printf("%.2lf\n",mean(x,y));
	}
	return 0;
}
double mean (double a,double b)
{
	return 1/((1/a+1/b)/2);
}
