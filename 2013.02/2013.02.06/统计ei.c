#include<stdio.h>
#include<conio.h>
int main()
{
	char input,input1;
	int count=0;
	while((input=getchar())!='#')
	{
		
		if(input1=='e'&&input=='i')
		count++;
        input1=input;
	}
	printf("%d",count);
	getch();
	return 0;
}
