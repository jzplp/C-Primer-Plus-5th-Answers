#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<stdarg.h>
void show_array(const double ar[],int n);
double * new_d_array(int n,...);
int main()
{
	double * p1;
	double * p2;
	p1=new_d_array(5,1.2,2.3,3.4,4.5,5.6);
	p2=new_d_array(4,100.0,20.00,8.08,-1890.0);
	show_array(p1,5);
	show_array(p2,4);
	free(p1);
	free(p2);
	getch();
	return 0;
}
void show_array(const double ar[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%.2lf ",*(ar+i));
		putchar('\n');
}
double * new_d_array(int n,...)
{
	double * p1;
	int i;
	va_list ap;
	va_start(ap,n);
	p1=(double *)malloc(n*sizeof(double));
	for(i=0;i<n;i++)
		*(p1+i)=va_arg(ap,double);
	return p1;
}



