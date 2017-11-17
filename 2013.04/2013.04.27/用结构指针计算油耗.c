#include<stdio.h>
#include<conio.h>
struct gas 
{
	float distance;
	float gals;
	float mpg;
};
void count(struct gas *one);
int main()
{
	struct gas one;
	while(scanf("%f %f",&one.distance,&one.gals)==2)
	{
		count(&one);
		printf("%f\n",one.mpg);
	}
	getch();
	return 0;
}
void count(struct gas * one)
{
	one->mpg=one->gals/one->distance;
}



