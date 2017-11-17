#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define LONG 80
int main()
{
	FILE * fp;
	char ch[LONG];
	long n;
	char character;
	puts("input file:");
	gets(ch); 
	if((fp=fopen(ch,"r"))==NULL)
		exit(EXIT_FAILURE);
	puts("input n\n");
	while(scanf("%ld",&n)==1)
	{
		if(fseek(fp,n,SEEK_SET)!=0)
		{
			printf("not find %ld ,bak and input it\n",n);
			continue;
		}
		while((character=getc(fp))!=EOF&&character!='\n')
			putc(character,stdout);
		putchar('\n');
		printf("now,input it:");
	}
	printf("OK\n");
	getch();
	return 0;
}


