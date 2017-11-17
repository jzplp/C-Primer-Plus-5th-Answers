#include<stdio.h>
#include<conio.h>
#define LONG 10
void sort_selection(int * a,int n);
int main()
{
	int i1;
	int a[LONG]={49,18,79,79,13,4,38,79,84,31};
	for(i1=0;i1<LONG;i1++)
		printf("%d ",a[i1]);
	putchar('\n');

	sort_selection(a,LONG);

	for(i1=0;i1<LONG;i1++)
		printf("%d ",a[i1]);
	getch();
	return 0;
}
void sort_selection(int * a,int n)
{
	int i1,i2,t,min;
	for(i1=0;i1<n;i1++)
	{
		min=i1;
		for(i2=i1+1;i2<LONG;i2++)
		{
			if(a[i2]<a[min])
				min=i2;
		}
		if(min!=i1)
		{
			t=a[i1];
			a[i1]=a[min];
			a[min]=t;
		}
	}
}
			



