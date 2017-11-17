#include<stdio.h>
#include<conio.h>
struct gas
{
	float distance;
	float gals;
	float mpg;
};
struct gas count(struct gas);
int main()
{
	struct gas one; 
	while(scanf("%f %f",&(one.distance),&(one.gals))==2)
	{
		one=count(one);
		printf("%f\n",one.mpg);
	}
	getch();
	return 0;
}
struct gas count(struct gas one)
{
	one.mpg=one.gals/one.distance;
	return one;
}




