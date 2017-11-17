#include<stdio.h>
#include<conio.h>
int main(void)
{
	int input;
	int add=0,even=0;
	float addmean=0.0,evenmean=0.0;
	while(scanf("%d",&input)==1 && input!=0)
	{
		switch(input%2)
		{
			case 0:even++;
			evenmean+=input;
			break;
			case 1:add++;
			addmean+=input;
			break;
		}
	}
	addmean/=add;
	evenmean/=even;
	printf("add=%d,addmean=%f,even=%d,evenmean=%f",add,addmean,even,evenmean);
	getch();
	return 0;
}
