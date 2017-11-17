#include<stdio.h>
#include<conio.h>
#include<time.h>
#define MATCH 100
#include<stdlib.h>
void random(int * array,int n,int many);
int main()
{
	int i,many;
	int array[MATCH];
	for(i=0;i<MATCH;i++)
		array[i]=i*2;
	while(scanf("%d",&many)==1)
	{
		if(many>MATCH)
		{
			printf("i>MATCH! input again!\n");
			continue;
		}
		random(array,MATCH,many);
	}
	getch();
	return 0;
}
void random(int * array,int n,int many)
{
	int i=0,i1;
	int among;
	int how[many];
	int timea;
	timea=time(0);
 srand(timea);
	while(i<many)
	{
		among=rand()%100;
		for(i1=0;i1<i;i1++)
		{
			if(among==how[i1])
			{
				among=-1;
				break;
			}
		}
		if(among!=-1)
		{
			how[i]=among;
			i++;
			printf("%d ",*(array+among));
		}
	}
	putchar('\n');
}








