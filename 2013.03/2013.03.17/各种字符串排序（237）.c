#include<stdio.h>
#include<conio.h>
#include<string.h>
#define A 10
#define B 30
void input(int n1,int n2,char ch[n1][n2]);
char menu(char input1);
void out1(int n1,int n2,char ch[n1][n2]);
void word_menu(void);
void asc(int n1,int n2,char ch[n1][n2]);
void word_input(void);
void word_now(void);
void word_choose(void);
void length(int n1,int n2,char ch[n1][n2]);
void order(int n1,int n2,char ch[n1][n2]);
int sort_word(char * ch);
int main(void)
{
	char ch[A][B];
	char menu1;
	input(A,B,ch);
	word_menu();
	while(menu1=getchar())
	{
		menu1=menu(menu1);
		if(menu1=='5')
			break;
		switch (menu1)
		{
			case '1':out1(A,B,ch);
				 break;
			case '2':asc(A,B,ch);
				 break;
			case '3':length(A,B,ch);
				 break;
			case '4':order(A,B,ch);
				 break;
		}	
		word_menu();
	}
		getch();
		return 0;
}
void input(int n1,int n2,char ch[n1][n2])
{
	int count;
    printf("输入10个字符串\n"); 
	for(count=0;count<n1;count++)
	{
		printf("%d   ",count+1);
        gets(ch[count]);
		if(ch[count][0]=='\0')
			break;
	}
}
void word_menu(void)
{
	printf("1.输出字符串列表\n");
	printf("2.按ASCII顺序输出字符串\n");
	printf("3.按长度递增输出字符串\n");
	printf("4.按字符串中第一个单词的长度输出字符串\n");
	printf("5.退出\n");
	word_now();
}
char menu(char input1)
{
		if(input1>'0'&&input1<='5')
		{
			while(getchar()!='\n')
				continue;
			return input1;
		}
		else
		{
			word_input();
			if(input1!='\n')
			{
				while(getchar()!='\n')
					continue;
			}
			word_now();
			while(input1=getchar())
			{
				if(input1>'0'&&input1<='5')
				{
					while(getchar()!='\n')
						continue;
					return input1;
				}
				else
				{
					word_input();
					if(input1!='\n')
					{
						while(getchar()!='\n')
							continue;
					}
				}
				word_now();

			}
		}
}
void out1(int n1,int n2,char ch[n1][n2])
{
	int n11;
	for(n11=0;n11<n1;n11++)
	{
		if(ch[n11][0]=='\0')
			break;
		printf("%d    ",n11+1);
		puts(ch[n11]);
	}	
	word_choose();
}
void asc(int n1,int n2,char ch[n1][n2])
{
	char * ch3;
        int n11,n22,n33;
        for(n11=0,n33=0;n11<n1;n11++)
	{
	        if(ch[n11][0]=='\0')
		       break;
	        n33++;
	}
	char * ch2[n33];	
	for(n11=0;n11<n33;n11++)
		ch2[n11]=ch[n11];
	for(n11=0;n11<n33;n11++)
	{
		for(n22=n11+1;n22<n33;n22++)
		{
			if(strcmp(ch2[n11],ch2[n22])==1)
			{
				ch3=ch2[n11];
				ch2[n11]=ch2[n22];
				ch2[n22]=ch3;
			}
		}
	}
	for(n11=0;n11<n33;n11++)
	{
		printf("%d    ",n11+1);
		puts(ch2[n11]);
	}
	word_choose();
}
void word_input(void)
{
	printf("请重新输入\n");
}
void word_now (void)
{
	printf("now  input:  ");
}
void word_choose(void)
{
	printf("\n现在重新选择：\n");
}
void length(int n1,int n2,char ch[n1][n2])
{
	int n11,n22,n33=0;
	for(n11=0;n11<n1;n11++)
	{
		if(ch[n11][0]=='\0')
			break;
		n33++;
	}
	char * ch2[n33];
	char * ch3;
	for(n11=0;n11<n33;n11++)
		ch2[n11]=ch[n11];
	for(n11=0;n11<n33;n11++)
	{
                           
		for(n22=n11;n22<n33;n22++)
		{
			if(strlen(ch2[n11])>strlen(ch2[n22]))
			{
				ch3=ch2[n11];
				ch2[n11]=ch2[n22];
				ch2[n22]=ch3;
			}
		}
	}
	for(n11=0;n11<n33;n11++)
	{
		printf("%d    ",n11+1);
		puts(ch2[n11]);
	}
	word_choose();
}
void order(int n1,int n2,char ch[n1][n2])
{
	int n11,n22,n33=0;
	for(n11=0;n11<n1;n11++)
	{
		if(ch[n11][0]=='\0')
			break;
		n33++;
	}
	char * ch1[n33];
	char * ch2;
	for(n11=0;n11<n33;n11++)
		ch1[n11]=ch[n11];
	for(n11=0;n11<n33;n11++)
	{
		for(n22=n11+1;n22<n33;n22++)
		{
			if(sort_word(ch1[n11])>sort_word(ch1[n22]))
			{
				ch2=ch1[n11];
				ch1[n11]=ch1[n22];
				ch1[n22]=ch2;
			}
		}
	}
	for(n11=0;n11<n33;n11++)
	{
		printf("%d    ",n11+1);
		puts(ch1[n11]);
	}
	word_choose();
}
int sort_word(char * ch)
{
	int n1,n2;
	while(isalnum(*ch)==0)
		ch++;
	for(n1=1;*ch;n1++)
	{
		if(isalnum(*ch)==0)
			break;
		ch++;
	}
	return n1;
}



			







