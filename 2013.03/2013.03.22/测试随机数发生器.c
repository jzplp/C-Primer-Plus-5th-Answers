#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#define TEN 10
#define QUANTITY 1000

int main()
{
	int array[TEN][TEN];
	int n1,n2,n3;
	for(n1=0;n1<TEN;n1++)
	{
		for(n2=0;n2<TEN;n2++)
			array[n1][n2]=0;
	}
	for(n1=0;n1<TEN;n1++)
	{
		srand(n1);
		for(n2=0;n2<QUANTITY;n2++)
		{
			n3=rand()%10;
			array[n1][n3]++;
		}
	}
	for(n1=0;n1<TEN;n1++)
	{
		putchar('\n');
		printf("µÚ%d×é£º",n1+1);
		for(n2=0;n2<TEN;n2++)
			printf("%dÊ±£º%d ",n2+1,array[n1][n2]);
	}
	getch();
	return 0;
}





			
			





