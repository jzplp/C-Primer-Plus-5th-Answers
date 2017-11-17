#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char ch[50];
	char open[200];
	gets(open);
	if((fp=fopen(open,"r"))==NULL)
		exit(EXIT_FAILURE);
	fgets(ch,5,fp);
	printf("***\n%s***",ch);
	getch();
	return 0;
}

