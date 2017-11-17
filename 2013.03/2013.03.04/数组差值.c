#include<stdio.h>
#include<conio.h>
#define AAA 5
double compare(double * array,int n);
int main()
{
	double arr[AAA];
        int n;
	printf("请输入任意数字进行程序，输入q退出\n");
	while(scanf("%d",&n)!=0)
	{
        printf("输入数字5次\n"); 
		for(n=0;n<AAA;n++)
		{
			scanf("%lf",&arr[n]);
		}
		printf("%.2lf\n",compare (arr,AAA));
		printf("请输入任意数字进行程序，输入q退出\n");
	}
	getch();
	return 0;
}
double compare(double array[],int n)
{
	double min=array[0],max=array[0];
	int a;
	for(a=0;a<n;a++)
	{
		if(array[a]>max)
			max=array[a];
		if(array[a]<min)
			min=array[a];
	}
	return max-min;
}



