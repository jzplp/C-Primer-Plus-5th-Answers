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
	printf("����sets:(q�˳�)");
	while(scanf("%d",&sets)||sets<=0)
	{
		input(&sides,&dices);
		srand((int)time(0));
		printf("���%d�Σ�%d�棬%d��\n",sets,sides,dices);
		for(n1=0;n1<sets;n1++)
			die(sides,dices);
		putchar('\n');
		printf("����sets:(q�˳�)");
	}
	getch();
	return 0;
}
void input(int * sides,int * dices)
{
	int side,dice;
	printf("����sides and dices��");
	scanf("%d %d",&side,&dice);
	if(side<=1||dice<=1)
	{
		printf("��Ч��������");
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












