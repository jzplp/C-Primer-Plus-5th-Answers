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
	printf("������Դ�ļ���:\n");
	gets(cin);
	if((fin=fopen(cin,"r"))==NULL)
		exit(EXIT_FAILURE);
	printf("������Ŀ���ļ���:\n");
	gets(cout);
	if((fout=fopen(cout,"w"))==NULL)
		exit(EXIT_FAILURE);
	while((ch=getc(fin))!=EOF)
	{
		ch=toupper(ch);
		putc(ch,fout);
	}
	if(fclose(fin)!=0)
		printf("�رղ����ļ�%s\n",cin);
	if(fclose(fout)!=0)
		printf("�رղ����ļ�%s\n",cout);
	getch();
	return 0;
}




