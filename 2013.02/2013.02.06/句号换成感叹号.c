#include<stdio.h>
#include<conio.h>
int main (void)
{
	char ch;
	int a;
	while((ch=getchar())!='#')
	{
		if(ch=='.')
		{
			ch='!';
			a++;
		}
		putchar(ch);
	}
	getch();
	return 0;
}

