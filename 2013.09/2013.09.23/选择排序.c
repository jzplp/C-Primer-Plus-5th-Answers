#include<stdio.h>
#include<conio.h>
#define LONG 10
int main()
{
	int a[LONG]={86,48,7,9,6,2,7,99,23,65};
	int i1,i2,count,min,flag;
	count=0;
	for(i1=0;i1<LONG;i1++)
		printf("%d ",a[i1]);
	putchar('\n');

	for(i1=0;i1<LONG;i1++)
	{
		min=i1;
		for(i2=i1+1;i2<LONG;i2++)
		{
			if(a[i2]<a[min])
			{
				min=i2;
			}
		}
		if(min!=i1)
		{
			flag=a[i1];
			a[i1]=a[min];
			a[min]=flag;
		}
	}
	for(i1=0;i1<LONG;i1++)
		printf("%d ",a[i1]);
	getch();
	return 0;
}



