#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n;
	FILE * fp;
	char ch[50];
	gets(ch);
	fp=fopen(ch,"r");
	fgets(ch,80,fp);
	for(i=0;ch[i]!='\0';i++)
		printf("%d ",ch[i]);//�м�Ŀ�ascii��9 
	getch();
		return 0;
}

