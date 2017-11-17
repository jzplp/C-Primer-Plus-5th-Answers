#include<stdio.h>
#include<conio.h>
int main(void)
{
	int input,count,even,odd;
	float evenmean,oddmean;
	count=even=odd=0;
        evenmean=oddmean=0.0;
        while(scanf("%d",&input)==1)
	{
		if(input==0)
			break;
		count++;
		if(input%2==0)
		{
			even++;
			evenmean+=input;
		}
		else
		{
			odd++;
			oddmean+=input;
		}
	}
	evenmean/=even;
	oddmean/=odd;
	printf("count=%d,even=%d,evenmean=%f,odd=%d,oddmean=%f",count,even,evenmean,odd,oddmean);
        getch();
	return 0;
}

