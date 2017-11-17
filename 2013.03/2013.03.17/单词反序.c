#include<stdio.h>
#include<conio.h>
#include<string.h>
void opposite(char * ch);
int main()
{
	char ch[100];
	while(gets(ch))
	{
		opposite(ch);
	}
	getch();
	return 0;
}
void opposite(char * ch)
{
	int size=strlen(ch);
	char oppo[size+1];
	oppo[size]='\0';
	char word[size];
	int n1,n2,n11,n22;
	for(n1=0,n2=size-1;n1<size;n1++,n2--)
		oppo[n1]=ch[n2];
	for(n1=0;n1<size;n1++)
	{
		if(isalnum(oppo[n1]))
		{
			n2=0;
			while(isalnum(oppo[n1])&&n1<size)
			{
				word[n2]=oppo[n1];
				n2++;
				n1++;
			}
			for(n11=n1-1,n22=0;n22<n2;n22++,n11--)
				oppo[n11]=word[n22];
		}
	}
	puts(oppo);
}


			







