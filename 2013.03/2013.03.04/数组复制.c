#include<stdio.h>
#include<conio.h>
void copy_arr(double [],double [],int );
void copy_ptr(double *,double *,int );
void show(double [],int );
int main()
{
	const int array=5;
	double source[5]=
	{1.1,2.2,3.3,4.4,5.5};
	double target1[array];
	double target2[array];
	copy_arr(source,target1,array);
	copy_ptr(source,target2,array);
	show(source,array);
	show(target1,array);
	show(target2,array);
	getch();
	return 0;
}
void copy_arr(double arr[],double copy[],int n)
{
	int a;
	for(a=0;a<n;a++)
		copy[a]=arr[a];
}
void copy_ptr(double * arr,double * copy,int n)
{
	int a;
	for(a=0;a<n;a++)
		*(copy+a)=*(arr+a);
}
void show(double arr[],int n)
{
	int a;
	for(a=0;a<n;a++)
		printf("%.2lf ",arr[a]);
	printf("\n");
}


