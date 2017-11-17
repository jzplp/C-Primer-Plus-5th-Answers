#include<stdio.h>
#include<conio.h>
void input(double [],int n);
double average_1(double [],int n);
double average_2(double [][5],int n);
double max(double [][5],int n);
void show(double [][5],int n);
int main()
{
	int n1;
	double arr[3][5];
	for(n1=0;n1<3;n1++)
		input(arr[n1],5);
	show(arr,3);
	getch();
	return 0;
}
void show(double arr[][5],int n)
{
	int n1;
	for(n1=0;n1<3;n1++)
		printf("平均数%d  %.2lf\n",n1,average_1(arr[n1],5));
	printf("总平均数  %.2lf\n",average_2(arr,3));
	printf("最大值  %.2lf\n",max(arr,3));
}
void input(double array[],int n)
{
	int n1;
	for(n1=0;n1<n;n1++)
		scanf("%lf",&array[n1]);
	printf("\nnext\n");
}
double average_1(double arr[],int n)
{
	int n1;
	double total=0;
	for(n1=0;n1<n;n1++)
		total+=arr[n1];
	return total/n;
}
double average_2(double arr[][5],int n)
{
	int n1,n2;
	double total=0;
	for(n1=0;n1<n;n1++)
	{
		for(n2=0;n2<5;n2++)
			total+=arr[n1][n2];
	}
	return total/(n*5);
}
double max(double arr[][5],int n)
{
	int n1,n2;
	double maxi=arr[0][0];
	for (n1=0;n1<n;n1++)
	{
		for(n2=0;n2<5;n2++)
		{
			if(arr[n1][n2]>maxi)
				maxi=arr[n1][n2];
		}
	}
	return maxi;
}







