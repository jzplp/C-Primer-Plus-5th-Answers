#include<stdio.h>
#include<conio.h>
int call(int a);
int main()
{
	int a;
	while(scanf("%d",&a))
	{
		printf("  %d  \n",a);
		printf("     %d\n",call(a));
	}
	getch();
	return 0;
}
int call(int a)
{
	a++;
	printf("   %d\n",a);
	return a;
}

