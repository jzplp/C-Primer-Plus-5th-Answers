#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define LONG 32
int number(int count);
int main()
{
	int count;
	while(scanf("%d",&count)!=0)
		printf("     number is %d\n",number(count));
	getch();
	return 0;
}
int number(int count)
{
	int sum=0,i;
	for(i=0;i<LONG;i++)
	{
		if((count>>i)&01==1)
			sum++;
	}
	return sum;
}




