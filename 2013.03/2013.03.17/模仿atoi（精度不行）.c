#include<stdio.h>
#include<ctype.h>
#include<conio.h>
#include<math.h>
int atoii(char * ch);
int main()
{
	char ch[100];
	while(gets(ch))
		printf(" %d \n",atoii(ch));
	getch();
	return 0;
}
int atoii(char * ch)
{
	int n1,count;
int sum=0;
	int n11,n22;
int c[20];
		while(isspace(*ch)&&*ch)
			ch++;
		n1=0;
		while(isdigit(*ch))
		{
			c[n1]=*ch-48;
			n1++;
			ch++;
			
		}
		for(n11=0;n11<n1;n11++)
			c[n11]=c[n11]*pow(10,n1-n11-1);
		for(n11=0;n11<n1;n11++)
		{
        	sum=c[n11]+sum;
         }
        return sum;
}








