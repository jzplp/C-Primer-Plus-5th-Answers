#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h> 
#define ORIGINAL "-p"
#define UPPER "-u"
#define LOWER "-l"
void upper(char *ch);
void lower(char *ch);
int main(int argc,char * argv[])
{
	if(argc!=2)
	{
		printf("fack!");
	}
	else
	{
		char ch[100];
		gets(ch);
		if(strcmp(argv[1],ORIGINAL)==0)
			puts(ch);
		else if(strcmp(argv[1],UPPER)==0)
			upper(ch);
		else if(strcmp(argv[1],LOWER)==0)
			lower(ch);
		else
			printf("fack!");
	
	}
	getch();
	return 0;
}
void upper(char *ch)
{
	while(*ch)
	{
		printf("%c",toupper(*ch));
		ch++;
	}
}
void lower(char *ch)
{
	while(*ch)
	{
		printf("%c",tolower(*ch));
		ch++;
	}
}





