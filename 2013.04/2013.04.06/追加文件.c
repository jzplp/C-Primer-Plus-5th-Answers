#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define BUFSIZE 1024
void append(FILE * source,FILE * dest);
int main(int argc,char * argv[])
{
	int count,n=0;
	if(argc<3)
		exit(EXIT_FAILURE);
	FILE * fsource,* fp;
	if((fsource=fopen(argv[1],"a"))==NULL)
		exit(EXIT_FAILURE);
	for(count=2;count<argc;count++)
	{
		if(strcmp(argv[1],argv[count])==0)
		{
			printf("不能追加自身！\n");
			continue;
		}	
		else if((fp=fopen(argv[count],"r"))==NULL)
		{
			printf("con`t open %s",argv[count]);
			continue;
		}
		else 
		{
			if(setvbuf(fsource,NULL,_IOFBF,BUFSIZE)!=0)
			{
				printf("con`t new setvbuf\n");
				continue;
			}
			append(fsource,fp);
			if(ferror(fsource)!=0)
				printf("file : %s ,io error\n",argv[1]);
			else if(ferror(fp)!=0)
				printf("file : %s ,io error\n",argv[count]);
			else
				printf("file : %s , it`s OK\n",argv[count]);
			fclose(fp);
			n++;
			putc('\n',fsource);
		}
	}
	fclose(fsource);
	printf("file is %d",n);
	getch();
	return 0;
}
void append (FILE * source,FILE * dest)
{
	size_t bytes;
	static char temp[BUFSIZE];
	while((bytes=fread(temp,sizeof(char),BUFSIZE,dest))>0)
		fwrite(temp,sizeof(char),bytes,source);
}


			



		


