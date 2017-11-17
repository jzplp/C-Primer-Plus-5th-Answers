#include<stdio.h>
#include<conio.h>
#define LONG 10
void sort_insert(int * a,int n);
int main()
{
	int a[LONG]={15,7,46,13,23,4,7,1,6,48};
	int i1;
	for(i1=0;i1<LONG;i1++)
		printf("%d ",a[i1]);
	putchar('\n');
 
	sort_insert(a,LONG);

	for(i1=0;i1<LONG;i1++)
		printf("%d ",a[i1]);
	getch();
	return 0;
}
void sort_insert(int * a,int n)
{
	int i1,i2,t;

	for(i1=1;i1<n;i1++)
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
}

