#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()
{
	char ch;
	int lower=0,upper=0;
	while((ch=getchar())!=EOF)
	{
		if(islower(ch)!=0)
			lower++;
		else if(isupper(ch!=0))
			upper++;
	}
	printf("lower:%d upper:%d",lower,upper);
	getch();
	return 0;
}
