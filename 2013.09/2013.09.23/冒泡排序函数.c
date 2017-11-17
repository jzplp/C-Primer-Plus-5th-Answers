#include<stdio.h>
#include<conio.h>
#define LONG 10  //数组长度
int sort_mp(int * a,int n);
int main()
{
	int i1,count;
	int a[LONG]={1,2,3,7,46,43,6,76,48,3};
	for(i1=0;i1<LONG;i1++)           //显示数组
		printf("%d ",a[i1]);
	putchar('\n');
	//进行排序
	count=sort_mp(a,LONG);
	// 显示排好的数组
	for(i1=0;i1<LONG;i1++)                 
		printf("%d ",a[i1]);
	putchar('\n');
	printf("count= %d ",count);
	getch();
	return 0;
}
int sort_mp(int * a,int n)
{
	int i1,i2,count,flag,t;
	count=0;
	for(i1=0;i1<n;i1++)
	{
		flag=0;
		for(i2=0;i2<n-i1-1;i2++)
		{
			count++;
			if(a[i2]>a[i2+1])
			{
				t=a[i2];
				a[i2]=a[i2+1];
				a[i2+1]=t;
				flag=1;
			}
		}
		if(flag==0)
			break;
	}
	return count;
}





