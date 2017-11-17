#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	char ch;
	FILE * fp;
	int n=2,character,file1;
	if(argc<2)
		exit(EXIT_FAILURE);
	ch=argv[1][0];
	for(n=1;n<argc;n++)
	{
		if(argc==2)
			fp=stdin;
		else if(n==1)
			continue;
		else
        if((fp=fopen(argv[n],"r"))==NULL)
		{
			printf("con`t open %s",argv[n]);
			continue;
		}
		for(file1=0;(character=getc(fp))!=EOF;)
		{
			if(character==ch)
				file1++;
		}
		printf("file %s, have %d\n",argv[n],file1);
	}
	printf("OK\n");
	getch();
	return 0;
}


		
		

			







