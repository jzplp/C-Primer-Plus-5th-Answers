#include<stdio.h>
#include<conio.h>
int main ()
{
	char ch;
	int count=0;
	while((ch=getchar())!=EOF)
	{
		count++;
	}
	printf("%d",count);
	getch();
	return 0;
}

