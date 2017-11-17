#include<stdio.h>
#include<conio.h> 
#define AA 30
int stren(char *,int a);
int main()
{
	char abc[AA];
        int n;
		scanf("%s",abc);
	printf("% d ",stren(abc,AA));
	getch();
    return 0;
}
int stren(char abc[],int a)
{
	int n;
	for(n=0;n<a,(*abc)!='\0';n++)
	{
        abc++;
        }
	return n+1;
	}
