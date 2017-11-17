#include<stdio.h>
#include<conio.h>
void input(double [],int n);
double average_1(double [],int n);
double average_2(int n1,int n2,double [n1][n2]);
double max(int n1,int n2,double [n1][n2]);
void show(int n1,int n2,double [n1][n2]);
int main()
{
	int n1;
	double arr[3][5];
	for(n1=0;n1<3;n1++)
		input(arr[n1],5);
	show(3,5,arr);
	getch();
	return 0;
}
void show(int n1,int n2,double arr[n1][n2])
{
	int n;
	for(n=0;n<n1;n++)
		printf("平均数%d  %.2lf\n",n1,average_1(arr[n],n2));
	printf("总平均数  %.2lf\n",average_2(n1,n2,arr));
	printf("最大值  %.2lf\n",max(n1,n2,arr));
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
double average_2(int n1,int n2,double arr[n1][n2])
{
	int n11,n22;
	double total=0;
	for(n11=0;n11<n1;n11++)
	{
		for(n22=0;n22<n2;n22++)
			total+=arr[n11][n22];
	}
	return total/(n1*n2);
}
double max(int n1,int n2,double arr[n1][n2])
{
	int n11,n22;
	double maxi=arr[0][0];
	for (n11=0;n11<n1;n11++)
	{
		for(n22=0;n22<n2;n22++)
		{
			if(arr[n11][n22]>maxi)
				maxi=arr[n11][n22];
		}
	}
	return maxi;
}





