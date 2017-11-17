#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	while((ch=getchar())!='#')
	{
		if(ch!='\n') 
		{
			printf("step 1");
			if(ch!='c')
			{	
			    if(ch=='b')
				break;  
			    else if(ch!='g')
                     printf("stap 2"); 
                     printf("step 3");
             }
		}
	}
	printf("done");
	getch();
	return 0;
}

