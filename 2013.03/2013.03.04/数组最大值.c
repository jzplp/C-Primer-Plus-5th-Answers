#include<stdio.h>
#include<conio.h>
int arr(const int [],int n);
int main()
{
	int array[5]=
	{1,15461,84,4,6463}; 
	printf("%d",arr(array,5));
	getch();
	return 0;
}
int arr(const int tot[],int n)
{
	int e,a=0;
	for(e=0;e<n;e++)
	{
		if(tot[e]>a)
			a=tot[e];
	}
	return a;
}



