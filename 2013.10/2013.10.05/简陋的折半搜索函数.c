#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
#define N 30

bool binary_search(int array[],int n,int find);
int main()
{
	int array[N];
	int n;
	int find;
	for(n=0;n<N;n++)
		array[n]=2*n;
	printf("input find\n");
	while(scanf("%d",&find)!=0)
	{
		printf("find ?   %d  \n",binary_search(array,N,find));
		printf("input find\n");
	}
	getch();
	return 0;
}
bool binary_search(int array[],int n,int find)
{
	int cfront=0,crear=n;
	while(array[(cfront+crear)/2]!=find)
	{
		if(cfront==crear-1)
		{
			if((array[cfront]==find)||(array[crear]==find))
				return true;
			return false;
		}
		if(array[(cfront+crear)/2]>find)
		{
			crear=(cfront+crear)/2;
			continue;
		}
		else if(array[(cfront+crear)/2]<find)
		{
			cfront=(cfront+crear)/2;
			continue;
		}
	}
	return true;
}






