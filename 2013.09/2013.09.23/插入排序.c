#include<stdio.h>
#include<conio.h>
#define LONG 10
int main()
{
	int a[LONG]={49,15,3,9,7,9,3,14,67,15};
	int i1,i2,t;
	for(i1=0;i1<LONG;i1++)
		printf("%d ",a[i1]);
	putchar('\n');

	for(i1=1;i1<LONG;i1++)
	{

		for(i2=i1;i2>0;i2--)
		{
			if(a[i2]<a[i2-1])
			{
				t=a[i2];
				a[i2]=a[i2-1];
				a[i2-1]=t;
			}
			else
				break;
		}
	}
	for(i1=0;i1<LONG;i1++)
		printf("%d ",a[i1]);
	getch();
	return 0;
}




