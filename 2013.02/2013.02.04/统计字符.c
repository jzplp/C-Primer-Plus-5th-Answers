#include<stdio.h>
#include<conio.h>
int main(void)
{
	char ch;
	int lc=0;
	int uc=0;
	int oc=0;
	while ((ch=getchar())!='#')
	{
		if(ch>='a'&&ch<='z')
			lc++;
		else if(ch>='A'&&ch<='Z')
			uc++;
		else
			oc++;
	}
	printf("%d  %d  %d",lc,uc,oc);
	getch();
	return 0;
}

