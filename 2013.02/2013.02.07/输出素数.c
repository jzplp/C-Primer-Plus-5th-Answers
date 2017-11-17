#include<stdio.h>
#include<conio.h>
int main(void)
{
	int input,one,two,i,a;
	while(scanf("%d",&input)==1) 
	{
		
		for(i=2;i<=input;i++)
		{
			one=0;
			for(a=1;a*a<=i;a++)
			{
				if(i%a==0)
				{
					one++;
				}
			}
			if (one<2)
			printf("%d ",i);
		}
		printf("\n");
	}
	getch();
	return 0;
}
			


 			



