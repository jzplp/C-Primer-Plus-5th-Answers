#include<stdio.h>
#include<conio.h>
int main ()
{
	char ch1,ch2;
	int a;

	printf("请输入\n");
	while((ch1=getchar())!=EOF)
	{  
	     if(ch1=='y')
	     {
	        ch2=getchar();
		if(ch2=='\n')
		{
		     a=1;
		     break;
		}
		else
		{
		    while(getchar()!='\n')
		         continue;
		    printf("请重新输入\n");
		}
	     }
	     else if(ch1=='n')
	     {
	            ch2=getchar();
		    if(ch2=='\n')
		      { a=0;
		       break;}
		    else
		    {
		        while(getchar()!='\n')
		            continue;
			printf("请重新输入\n");
		    }
	     }
	     else if(ch1=='\n')
	     {
		     printf("请重新输入\n");
	     }
	     else
	     {
		     while(getchar()!='\n')
			     continue;
		     printf("请重新输入\n");
	     }
	}
	printf("\n%d",a);
	getch();
	return 0;
}




