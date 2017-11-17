#include<stdio.h>
#include<conio.h>
void copy_arr(double [],double [],int );
int main()
{
	int n;
	double source[7]=
	{1.1,2.2,3.3,4.4,5.5,6.6,7.7};
	double arr3[3];
	copy_arr((source+2),arr3,3);
	for(n=0;n<3;n++)
		printf("%.1lf ",arr3[n]);
	getch();
	return 0;
}
void copy_arr(double arr[],double copy[],int n)
{
	int a;
	for(a=0;a<n;a++)
		copy[a]=arr[a];
}

