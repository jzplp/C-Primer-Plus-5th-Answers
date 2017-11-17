#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#define LONG 80
int main()
{
	char cin[LONG];
	char cout[LONG];
	FILE * fin,* fout;
	char ch;
	printf("请输入源文件名:\n");
	gets(cin);
	if((fin=fopen(cin,"r"))==NULL)
		exit(EXIT_FAILURE);
	printf("请输入目标文件名:\n");
	gets(cout);
	if((fout=fopen(cout,"w"))==NULL)
		exit(EXIT_FAILURE);
	while((ch=getc(fin))!=EOF)
	{
		ch=toupper(ch);
		putc(ch,fout);
	}
	if(fclose(fin)!=0)
		printf("关闭不了文件%s\n",cin);
	if(fclose(fout)!=0)
		printf("关闭不了文件%s\n",cout);
	getch();
	return 0;
}




