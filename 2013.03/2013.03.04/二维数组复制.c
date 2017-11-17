#include<stdio.h>
#include<conio.h>
void copy(int n1,int n2,double [n1][n2],double [n1][n2]);
void copy_ptr(double * arr,double * copy,int n);
void show(int n1,int n2,double arr[n1][n2]);
int main()
{
	double arr1[5][5];
	double arr2[5][5];
	double source[5]=
	{1.1,2.2,3.3,4.4,5.5};
	int n;
	for(n=0;n<5;n++)
		copy_ptr(source,arr1[n],5);
	copy(5,5,arr1,arr2);
	show(5,5,arr1);
	putchar('\n');
	show(5,5,arr2);
	getch();
	return 0;
}
void copy_ptr(double * arr,double * copy,int n)
{
	int a;
	for(a=0;a<n;a++)
		*(copy+a)=*(arr+a);
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
void copy(int n1,int n2,double arr1[n1][n2],double arr2[n1][n2])
{
	int n11,n22;
	for(n11=0;n11<n1;n11++)
	{
		for(n22=0;n22<n2;n22++)
			arr2[n11][n22]=arr1[n11][n22];
	}
}





