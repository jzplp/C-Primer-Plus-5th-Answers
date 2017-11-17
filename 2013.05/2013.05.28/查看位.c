#include<stdio.h>
#include<conio.h>
int back(int count ,int i);
int main()
{
	int count,i;
	printf("input count and i\n");
	while(scanf("%d%d",&count,&i)==2)
	{
		printf("   output  %d\n",back(count,i));
		printf("\ninput count and i\n");
	}
	getch();
	return 0;
}
int back(int count ,int i)
{
	int n;
	n=(count>>(i-1))&1;
	return n;
}


