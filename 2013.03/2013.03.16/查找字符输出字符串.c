#include<stdio.h>
#include<conio.h>
#define LENGTH 30
char * chr(const char * pointer,char a);
int main()
{
	char character[LENGTH];
	char chars;
	while(gets(character))
	{
		chars=getchar();
		while(getchar()!='\n')
			continue;
		printf("%p  %s\n",chr(character,chars),chr(character,chars));
	}
	getch();
	return 0;
}
char * chr(const char * pointer,char a)
{
	while(*pointer)
	{
		if(*pointer==a)
			return pointer;
		pointer++;
	}
	return 0;
}

		
		
		
		
