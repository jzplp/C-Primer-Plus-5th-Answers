#include<stdio.h>
int judge(char ch);
int main()
{
	char ch;
	while((ch=getchar())!=EOF)
	{
		printf("%d  ",judge(ch));
	}
	return 0;
}
int judge(char ch)
{
	if(ch>64&&ch<91)
		return ch-64;
	else if(ch>96&&ch<123)
		return ch-96;
	else
		return -1;
}
