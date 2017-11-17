#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(int argc,char * argv[])
{
	if(argc==1)
		printf("no file!\n");
	else
	{
		int count;
		FILE * fp;
		char ch;
		for(count=1;count<argc;count++)
		{
			if((fp=fopen(argv[count],"r"))==NULL)
			{
				printf("con`t open %s",argv[count]);
				continue;
			}
			printf("       file %d  \n",count);
			while((ch=getc(fp))!=EOF)
				putchar(ch);
			printf("\n\n");
			fclose(fp);
		}
	}
	getch();
	return 0;
}





			




