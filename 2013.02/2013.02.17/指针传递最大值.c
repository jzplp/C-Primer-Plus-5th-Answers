#include<stdio.h>
void larger_of(double * x1,double * y1);
int main(void)
{
	double x,y;
	while(scanf("%lf %lf",&x,&y)==2)
	{
		larger_of(&x,&y);
		printf("%.2lf %.2lf\n",x,y);
	}
	return 0;
}
void larger_of (double * x1,double * y1)
{
	if(*x1>*y1)
		*y1=*x1;
	else
		*x1=*y1;
}

