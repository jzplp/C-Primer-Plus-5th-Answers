#include<stdio.h>
#include<conio.h>
#include<time.h>
void delay(double sec);
int main()
{
	double sec;
	while(scanf("%lf",&sec)==1)
	{
		delay(sec);
		printf("time over!\n");
	}
	getch();
	return 0;
}
void delay(double sec)
{
	clock_t timea;
	clock_t timeb;
	timea=clock();
	timeb=clock();
	while(((double)timeb-timea)/CLOCKS_PER_SEC<=sec)
	{
		timeb=clock();
	}
}



