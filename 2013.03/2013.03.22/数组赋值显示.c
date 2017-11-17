#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int * make_array(int elem,int val);
void show_array(const int ar[],int n);
int main()
{
	int *pa;
	int size;
	int value;
	printf("enter size:");
	while(scanf("%d",&size)||size<0)
	{
		printf("enter value:");
		scanf("%d",&value);
		pa=make_array(size,value);
		if(pa)
		{
			show_array(pa,size);
			free(pa);
		}
		printf("enter size:");
	}
	printf("Done!/n");
	getch();
	return 0;
}
int * make_array(int elem,int val)
{
	int *ptr,n;
	ptr=(int *)malloc(elem*sizeof(int));
	for(n=0;n<elem;n++)
		ptr[n]=val;
	return ptr;
}
void show_array(const int ar[],int n)
{
	const int rule=8;
	int n1;
	for(n1=0;n1<n;n1++)
	{
		printf("%d ",ar[n1]);
		if(n1%8==7)
			putchar('\n');
	}
	putchar('\n');
}

