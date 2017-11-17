#include<stdio.h>
#include<conio.h>
void space(char * ch);
int main(void)
{
	char ch[30];
	while(gets(ch))
	{
		space(ch);
		puts(ch);
	}
	getch();
	return 0;
}
void space(char * ch)
{
	int count=0,n1,n2=0;
	while(ch[count])
		count++;
	for(n1=0;n1<=count;n1++)
	{
		ch[n1-n2]=ch[n1];
		if(ch[n1]==' ')
			n2++;
	}
}


	
	
