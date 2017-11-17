#include<stdio.h>
void calculate(int *,int *);
int main()
{
	int x,y;
	while(scanf("%d %d",&x,&y)==2)
	{
		calculate(&x,&y);
		printf("%d %d",x,y);
	}
	return 0;
}
void calculate(int * x,int * y)
{
	int middle;
	middle=* x;
	* x+=* y;
	* y=middle-*y;
}





