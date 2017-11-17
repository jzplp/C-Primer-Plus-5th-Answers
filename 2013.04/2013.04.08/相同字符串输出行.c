#include<stdio.h>
#include<conio.h>
#include<stdlib.h> 
#define LONG 80
int main(int argc,char *argv[])
{
	char ch[LONG];
	FILE * fp;
	if(argc!=3)
		exit(EXIT_FAILURE);
	if((fp=fopen(argv[2],"r"))==NULL)
		exit(EXIT_FAILURE);
	while(fgets(ch,LONG,fp)!=NULL&&ch[0]!='\0')
	{
		if(strstr(ch,argv[1])!=NULL)
			fputs(ch,stdout);
	}
	printf("\nOK\n");
	getch();
	return 0;
}





