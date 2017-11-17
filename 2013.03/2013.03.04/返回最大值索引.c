#include<stdio.h>
#include<conio.h>
int arr(double group[],int n);
int main()
{
	int n=5;
	double array[5]={36.2,263.5,3.5,8.51,856};
	printf("%d",arr(array,n));
	getch();
	return 0;
}
int arr(double group[],int n)
{
	int a,c=0;
	double b=group[0];
	for(a=0;a<n;a++)
	{
		if(group[a]>b)
		{
			b=group[a];
			c=a;
		}
	}
	return c;
}


