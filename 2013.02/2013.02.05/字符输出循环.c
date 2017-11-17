#include<stdio.h>
#include<conio.h>
#define loop 8
int main(void)
{
	char ch;
	int count;
        count=0;
	while((ch=getchar())!='#')
	{
		if(count!=0&&count%loop==0)
			printf("\n");
		putchar(ch);
		printf(" %d||",ch);
		
         count++;
	}
	printf("\ncount=%d",count);
	getch();
	return 0;
}

