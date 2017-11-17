#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 200
int main(int argc,char * argv[])
{
	FILE * fp;
	char ch[MAX];
	char a;
	int n,yes;
	if(argc!=3)
	{
		printf("没有输入文件和字符！\n");
		exit(EXIT_FAILURE);
	}
	if((fp=fopen(argv[2],"r"))==NULL)
	{
		printf("打开文件失败！\n");
		exit(EXIT_FAILURE);
	}
	a=*argv[1];
	while(fgets(ch,MAX,fp)!=NULL&&ch[0]!='\0')
	{
		for(n=0,yes=0;n<MAX;n++)
		{
			if(a==ch[n])
			{
				yes=1;
				break;
			}
			if(ch[n]=='\n')
				break;
		}
		if(yes==1)
			fputs(ch,stdout);
	}
	fclose(fp);
	printf("\n\n OK!\n");
	getch();
	return 0;
}


			


