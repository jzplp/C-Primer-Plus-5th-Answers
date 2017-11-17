#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define LONG 32
unsigned int transition(char * ch);
void output (unsigned int count,char *ch);
int main(int argc,char * argv[])
{
	if(argc!=3)
	    exit(EXIT_FAILURE);
	char ch1[32+1],ch2[32+1];
	unsigned int count1,count2;
	count1=transition(argv[1]);
	count2=transition(argv[2]);
	printf("first number \n");
	output(count1,ch1);
	printf("    %s   %d\n",ch1,count1);
	
    output(~count1,ch1);
	printf(" ~  %s   %d\n",ch1,~count1);
	printf("second number \n");
	
    output(count2,ch2);
	printf("    %s   %d\n",ch2,count2);
	output(~count2,ch2);
	printf(" ~  %s   %d\n",ch2,~count2);
	output(count1&count2,ch1);
	printf(" &  %s   %d\n",ch1,count1&count2);
	output(count1|count2,ch2);
	printf(" |  %s   %d\n",ch2,count1|count2);
	output(count1^count2,ch1);
	printf(" ^  %s   %d\n",ch1,count1^count2);
	getch();
	return 0;
}
unsigned int transition (char * ch)
{
	unsigned int n,count=0;
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
void output (unsigned int count,char * ch)
{
	int i,n;
	for(i=LONG-1,n=0;n<32;i--,n++)
	{
		 ch[i]=((count>>n)&1)+'0';
	}
	ch[LONG]='\0';
}





