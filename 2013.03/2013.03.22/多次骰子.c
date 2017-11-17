#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
void die(int sides,int dices);
void input(int * sides,int * dices);
int main()
{
	int sides,dices,sets;
	int n1,n2,n3;
	printf("输入sets:(q退出)");
	while(scanf("%d",&sets)||sets<=0)
	{
		input(&sides,&dices);
		srand((int)time(0));
		printf("输出%d次，%d面，%d次\n",sets,sides,dices);
		for(n1=0;n1<sets;n1++)
			die(sides,dices);
		putchar('\n');
		printf("输入sets:(q退出)");
	}
	getch();
	return 0;
}
void input(int * sides,int * dices)
{
	int side,dice;
	printf("输入sides and dices：");
	scanf("%d %d",&side,&dice);
	if(side<=1||dice<=1)
	{
		printf("无效！请重新");
		input(&side,&dice);
	}
	*sides=side;
	*dices=dice;
}
void die(int sides,int dices)
{
	int dice,sum=0;
        int *ptr;
	ptr=(int *)malloc(dices*sizeof(int));
	for(dice=0;dice<dices;dice++)
		ptr[dice]=rand()%sides+1;
	for(dice=0;dice<dices;dice++)
		sum+=ptr[dice];
	printf("%d ",sum);
	free(ptr);
}












