#include<stdio.h>
#include<conio.h>
int transition(char * ch);
int main()
{
	char ch[20];
	printf("���������Գ���0��1֮����ַ���\n");
	while(gets(ch)!=NULL&&ch[0]!='\0')
		printf("     %d\n\n",transition(ch));
	getch();
	return 0;
}
int transition (char * ch)
{
	int n,count=0;
	for(n=0;ch[n]!='\0';n++)
	{
		if(ch[n]>='0'&&ch[n]<'2')
		{
			count<<=1;
			count|=(ch[n]-'0');
		}
	}
	return count;
}







