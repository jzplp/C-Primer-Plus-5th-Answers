#include<stdio.h>
#include<conio.h>
#define LONG 10
int main()
{
	int count,flag,i1,i2,t;
	count=0;
	int a[LONG]={1,2,3,7,46,43,6,76,48,3};
	for(i1=0;i1<LONG;i1++)
		printf("%d ",a[i1]);
	putchar('\n');
	for(i1=0;i1<LONG;i1++)
	{
		for(i2=0;i2<LONG-i1-1;i2++)
		{
			count++;
			if(a[i2]>a[i2+1])
			{
				t=a[i2];
				a[i2]=a[i2+1];
				a[i2+1]=t;
			}
		}
	}
	for(i1=0;i1<LONG;i1++)
		printf("%d ",a[i1]);
	putchar('\n');
	
	printf("count= %d \n",count);  //²éÕÒ´ÎÊý
	getch();
	return 0;
}



