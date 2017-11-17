#include<stdio.h>
#include<conio.h>
#define A 30
#define B 10
void copy(char * s1,char * s2,int n);
int main()
{
	char s1[A];
	char s2[B];
	int n;
	printf("输入s1和s2\n");
	while(gets(s1)&&gets(s2))
	{
		printf("输入n ");
		scanf("%d",&n);
		while(getchar()!='\n')
			continue;
		copy(s1,s2,n);
		printf("%s\n",s1);
		printf("输入s1和s2\n");
	}
	getch();
	return 0;
}
void copy(char * s1,char * s2,int n)
{
	int count;
	while(*s1)
		s1++;
	for(count=0;count<n;count++,s1++,s2++)
	{
		*s1=*s2;
		if(*s1=='\0')
			break;
	}
}








		
