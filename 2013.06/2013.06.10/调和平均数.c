#include<stdio.h>
#include<conio.h>
#define RECONILE(X,Y) (1/(1/(X)+1/(Y)))
int main ()
{
	double a,b;
	while(scanf("%lf %lf",&a,&b)==2)
		printf("%.2lf\n",RECONILE(a,b));
	getch();
	return 0;
}

