#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int words(char * ch);
int capital(char * ch);
int lower(char * ch);
int pun(char * ch);
int figure(char * ch);
int main()
{
	char ch[100];
	int n1,n2,count;
	while(gets(ch))
	{
		printf("words:    %d\n",words(ch));
		printf("capital:  %d\n",capital(ch));
		printf("lower:    %d\n",lower(ch));
		printf("pun:      %d\n",pun(ch));
		printf("figure:   %d\n",figure(ch));
        }
	getch();
	return 0;
}
int words(char * ch)
{
	int n1,n2,count=0;
	int length=strlen(ch);
	while(*ch)
	{
		while(isalnum(*ch)==0&&*ch)
			ch++;
		if(*ch)
		{
			count++;
			while(isalnum(*ch)&&*ch)
				ch++;
		}
	}
	return count;
}
int capital(char * ch)
{
	int cap=0;
	while(*ch)
	{
		if(isupper(*ch))
			cap++;
		ch++;
	}
	return cap;
}
int lower(char * ch)
{
	int low=0;
	while(*ch)
	{
		if(islower(*ch))
			low++;
		ch++;
	}
	return low;
}
int pun(char * ch)
{
	int p=0;
	while(*ch)
	{
		if(ispunct(*ch))
			p++;
		ch++;
	}
	return p;
}
int figure(char * ch)
{
	int fig=0;
	while(*ch)
	{
		if(isdigit(*ch))
			fig++;
		ch++;
	}
	return fig;
}












