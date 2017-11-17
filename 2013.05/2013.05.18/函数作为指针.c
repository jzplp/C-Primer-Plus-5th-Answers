#include<stdio.h>
#include<conio.h>
int a();
int e();
int i();
int o();
int u();
char menu();
int main()
{
	char v;
	int q;
	void (* fp[5])(void)=
	{
		a,e,i,o,u
	};
	while((v=menu())!='q')
	{
		switch(v)
		{
			case 'a':
			    fp[0]();
				break;
			case 'e':
				fp[1]();
				break;
			case 'i':
				fp[2]();
				break;
			case 'o':
				fp[3]();
				break;
			case 'u':
				fp[4]();
				break;
		}
	}
	printf("thank youfor use.\n");
	getch();
	return 0;
}
int a()
{
	printf("aaa%d\n",3);
	return 0;
}
int e()
{
	printf("eee\n");
return 1;
}
int i()
{
	printf("iii\n");
return 2;
}
int o()
{
	printf("ooo\n");
return 4;
}
int u()
{
	printf("uuu\n");
return 5;
}
char menu()
{
	char ch[20];
	char menuu[]="aeiouq";
	printf("input menu:");
	gets(ch);
	if(strchr(menuu,ch[0])==NULL)
	{
		printf("error input menu again:");
		gets(ch);
	}
	return ch[0];
}







