#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
#define A 30
int is_within(char * ch,char a);
int main()
{
	char character[A];
	char ch;
	while(fgets(character,A,stdin))
	{
		ch=getchar();
		while(getchar()!='\n')
			continue;
		printf("   %d  \n",is_within(character,ch));
	}
	getch();
	return 0;
}
int is_within(char * ch,char a)
{
	while(*ch!='\0')
	{
		if(*ch==a)
			return 1;
			ch++;
	}
	return 0;
}


