#include<stdio.h>
double min (double x,double y);
int main()
{
	double x,y;
	while(scanf("%lf %lf",&x,&y)==2)
	{
		x=min(x,y);
		printf("%.2lf\n",x);
	}
	return 0;
}
double min (double x,double y)
{
	if(x>y)
		return y;
	return x;
}
