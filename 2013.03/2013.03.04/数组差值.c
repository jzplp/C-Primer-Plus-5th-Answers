#include<stdio.h>
#include<conio.h>
#define AAA 5
double compare(double * array,int n);
int main()
{
	double arr[AAA];
        int n;
	printf("�������������ֽ��г�������q�˳�\n");
	while(scanf("%d",&n)!=0)
	{
        printf("��������5��\n"); 
		for(n=0;n<AAA;n++)
		{
			scanf("%lf",&arr[n]);
		}
		printf("%.2lf\n",compare (arr,AAA));
		printf("�������������ֽ��г�������q�˳�\n");
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



