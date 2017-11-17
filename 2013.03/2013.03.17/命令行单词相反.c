#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(int argc,char *argv[])
{
	int n1,n2;
	for(n1=1;n1<argc;n1++)
	{
		for(n2=strlen(argv[n1])-1;n2>=0;n2--)
			printf("%c",argv[n1][n2]);
		putchar('\n');
	}
	getch();
    return 0; 
}


