#include<stdio.h>
#include<conio.h>
#include<ctype.h> 
char get_first (void);
int main()
{
	char ch;
	while((ch=get_first())!=EOF)
	{
		putchar(ch);
	}
	getch();
	return 0;
}
char get_first(void)
{
	char ch1,ch2;
	int input=0;
	ch1=getchar();
	while(isspace(ch1))
	{
		ch2=ch1;
		ch1=getchar();
		if(!isspace(ch1))
		{
			input=1;
			break;
		}
		else
		{
			ch1=getchar();
		}
	}
	while(!isspace(ch2=getchar()))
		continue;
	return ch1; 
	
}


 



