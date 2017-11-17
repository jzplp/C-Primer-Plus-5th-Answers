#include<stdio.h>
#include<conio.h>
void input(int * pointer);
void in(char * pointer,int n);
int main(void)
{
	int n;
	puts("你想输入几个字符？\n");
	input(&n);
	char character[n+1];
	in(character,n);
	puts(character);
	getch();
	return 0;
}
void input(int * pointer)
{
	while(scanf("%d",pointer)==0)
	{
		puts("请重新输入！");
		while(getchar()!='\n')
			continue;
	}
	while(getchar()!='\n')
			continue;
}
void in(char * pointer,int n)
{
	int count;
	for(count=0;count<n;count++,pointer++)
	{
		*pointer=getchar();
		if(*pointer=='\n'||*pointer==' '||*pointer=='\t'||*pointer=='\v')
		break;
	}
	*(++pointer)='\0';
}

		
