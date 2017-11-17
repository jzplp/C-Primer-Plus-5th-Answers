#include<stdio.h>
#include<conio.h>
#include<string.h>
void capital(char * ch);
void lower(char * ch);
int main()
{
	char ch[100];
	char menu[20];
	while(gets(ch))
	{
		gets(menu);
		if(strcmp(menu,"-p")==0)
			puts(ch);
		else if(strcmp(menu,"-u")==0)
		{
			capital(ch);
			puts(ch);
		}
		else if(strcmp(menu,"-l")==0)
		{
			lower(ch);
			puts(ch);
		}
		else
			printf("no!!!\n");
	}
	getch();
	return 0;
}
void capital(char * ch)
{
	while(*ch)
	{
		*ch=toupper(*ch);
		ch++;
	}
}
void lower (char * ch)
{
	while(*ch)
	{
		*ch=tolower(*ch);
		ch++;
	}
}


