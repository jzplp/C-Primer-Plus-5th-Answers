#include<stdio.h>
#include<conio.h>
#define LINE 10
#define ADD 64
int main()
{
	char ch;
	int count=0;
	while((ch=getchar())!=EOF)
	{
		count++;
		if(ch==0)
			printf("^@ %d ",ch);
		else if(ch>0&&ch<27)
			printf("^%c %d ",ch+64,ch);
		else if(ch==27)
			printf("^] %d ",ch);
		else if(ch==28)
			printf("^\ %d ",ch);
		else if(ch==29)
			printf("^] %d ",ch);
		else if(ch==30)
			printf("^^ %d ",ch);
		else if(ch==31)
			printf("^_ %d ",ch);
		else if(ch>32&&ch<=127)
			printf("%c %d ",ch,ch);
		if(count==10)
			{ 
            printf("\n");
            count=0; 
            }
	}
	getch();
	return 0;
}






