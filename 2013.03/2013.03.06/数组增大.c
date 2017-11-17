#include<stdio.h>
#include<conio.h>
void copy_ptr(double *,double *,int );
void show(int n1,int n2,double [n1][n2]);
void grow(int n1,int n2,double [n1][n2]);
int main()
{
	int i;
	double array[3][5];
	double source[5]=
	{1.1,2.2,3.3,4.4,5.5};
	for(i=0;i<3;i++)
    copy_ptr(source,array[i],5);
	grow(3,5,array);
	show(3,5,array);
	getch();
	return 0;
}
void grow(int n1,int n2,double arr[n1][n2])
{
	int n11,n22;
	for(n11=0;n11<n1;n11++)
	{
		for(n22=0;n22<n2;n22++)
			arr[n11][n22]*=2;
	}
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

