#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#define QUANTITY 100
#define SCOPE 10
void sort(int * chara,int n);
int random(void);
int main()
{
	int ch[QUANTITY];
	int n;
	srand((int)time(0));
	for(n=0;n<QUANTITY;n++)
		ch[n]=random();
	for(n=0;n<QUANTITY;n++)
		printf("%d ",ch[n]);
	sort(ch,QUANTITY);
	getch();
	return 0;
}
int random(void)
{
	return rand()%10+1;
}
void sort(int * chara,int n)
{
	int * ch1[n];
	int * ptr;
	int n1,n2;
	for(n1=0;n1<n;n1++)
		ch1[n1]=chara+n1;
	for(n1=0;n1<n;n1++)
	{
		for(n2=n1;n2<n;n2++)
		{
			if(*ch1[n1]<*ch1[n2])
			{
				ptr=ch1[n1];
				ch1[n1]=ch1[n2];
				ch1[n2]=ptr;
			}
		}
	}
	printf("\nnow£¬Êä³öÀ²\n");
	for(n1=0;n1<n;n1++)
		printf("%d ",*ch1[n1]);
}



		


