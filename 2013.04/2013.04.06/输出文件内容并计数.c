#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int ch;
	FILE * fp;
	long count=0;
	char file[80];
	printf("请输入文件名。\n");
	gets(file);
	if((fp=fopen(file,"r"))==NULL)
		exit(EXIT_FAILURE);
	while((ch=getc(fp))!=EOF)
	{
		putc(ch,stdout);
		count++;
	}
	fclose(fp);
	printf("\n%s %ld",file,count);
	getch();
	return 0;
}

