#include<stdio.h>
#include<conio.h>
int main()
{
	int n,count;
	while(scanf("%d",&n)&&n>0)
	{
		if(n==1)
			printf("%d.%d\n",n);
		else if(n==2)
			printf("1.1 2.2");
		else
		{
			int array[n];
			array[0]=1;
			array[1]=1;
			for(count=2;count<n;count++)
				array[count]=array[count-1]+array[count-2];
			for(count=0;count<n;count++)
			{
				printf("%d.%d ",count+1,array[count]);
			}
		}
		putchar('\n');
	}
	getch();
	return 0;
}




		


