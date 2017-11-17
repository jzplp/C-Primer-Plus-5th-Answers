#include<stdio.h>
#include<conio.h>
int antitone(char * ch);
int main(void)
{
	char ch[30];
	while(gets(ch))
	{
                   antitone(ch);
                   puts(ch);
	}
	
	getch();
	return 0;
}
int antitone(char * ch)
{
	int count=0;
	int n1,n2;
	char * ptr;
	for(ptr=ch;*ptr;ptr++)
		count++;
	char ch1[count+2];
	ch1[count+1]='\0'; 
	for(n1=count-1,n2=0;n2<count;n1--,n2++)
    {
        ch1[n2]=ch[n1];
		}
	
	for(n1=0;n1<=count;n1++)
		ch[n1]=ch1[n1];
}


