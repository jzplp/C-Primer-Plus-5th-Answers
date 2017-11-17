#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void input(char * ,int n);
int main()
{
	char character[100];
	input(character,100);
	puts(character);
	getch();
	return 0;
}
void input(char * chars,int n)
{
	int count;
	for(count=0;count<n;count++,chars++)
	{
		*chars=getchar();
		if(isalnum(*chars)==0)
			break;
	}
	*(++chars)='\n';
}





