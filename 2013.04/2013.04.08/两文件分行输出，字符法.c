#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define LONG 100
int main()
{
	FILE *f1,*f2;
	char fone[LONG],ftwo[LONG],a[LONG],b[LONG];
	int n=0;
	int n1,n2;
	printf("input file 1:\n");
	gets(fone);
	if((f1=fopen(fone,"r"))==NULL)
		exit(EXIT_FAILURE);
	printf("input file 2:\n");
	gets(ftwo);
	if((f2=fopen(ftwo,"r"))==NULL)
		exit(EXIT_FAILURE);
	while(n1!=EOF||n2!=EOF)
	{
		n1=getc(f1);
		while(n1!=EOF&&n1!='\n')
		{
			putc(n1,stdout);
			n1=getc(f1);
		}
		if(n1!=EOF)
		{
			putchar(n1);
			n1=getc(f1);
		}
		n2=getc(f2);
		while(n2!=EOF&&n2!='\n')
		{
			putc(n2,stdout);
			n2=getc(f2);
		}
	
		if(n2!=EOF)
		{
			putchar(n2);
			n2=getc(f2);
		}
	}
        printf("OK\n");
	fclose(f1);
	fclose(f2);
	getch();
	return 0;
}

