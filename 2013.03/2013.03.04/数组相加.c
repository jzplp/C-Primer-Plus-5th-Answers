#include<stdio.h>
#include<conio.h>
#define QQQ 4
void add(int arr1[],int arr2[],int arr3[],int n);
void show(int arr[],int n);
int main()
{
	int arr1[QQQ]={2,4,5,8},
	    arr2[QQQ]={3,4,9,14},
	    arr3[QQQ];
	add(arr1,arr2,arr3,QQQ);
	show(arr3,QQQ);
	getch();
	return 0;
}
void add(int arr1[],int arr2[],int arr3[],int n)
{
	int a;
	for(a=0;a<n;a++)
		arr3[a]=arr1[a]+arr2[a];
}
void show(int arr[],int n)
{
	int a;
	for(a=0;a<n;a++)
		printf("%d ",arr[a]);
}

