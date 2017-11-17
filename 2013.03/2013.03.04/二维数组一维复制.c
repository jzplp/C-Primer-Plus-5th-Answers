#include<stdio.h>
#include<conio.h>
void copy_ptr(double *,double *,int );
void show(int n1,int n2,double [n1][n2]);
int main()
{
	double arr[5][5];
	double source[5]=
	{1.1,2.2,3.3,4.4,5.5};
	int n1,n2;
	for (n1=0;n1<5;n1++)
	{
		copy_ptr(source,arr[n1],5);
	}
	show(5,5,arr);
	getch();
	return 0;
}
void show(int n1,int n2,double arr[n1][n2])
{
	int n11,n22;
	for(n11=0;n11<n1;n11++)
	{
		for(n22=0;n22<n2;n22++)
			printf("%.1lf ",arr[n11][n22]);
		printf("\n");
	}
}
void copy_ptr(double * arr,double * copy,int n)
{
	int a;
	for(a=0;a<n;a++)
		*(copy+a)=*(arr+a);
}



