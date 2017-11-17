#include<stdio.h>
#include<conio.h>
#define MONTHS 12 
#define YEARS 5
int main()
{
	const float rain[YEARS][MONTHS]=
	{
		{1100,1,1,1,1,1,1,1,1,1,1,1},
		[4]={16,35}
	}; 
	int year,month;
	float subtot,total;
	printf("*********************\n");
	for(year=0,total=0;year<YEARS;year++)
	{
		for(month=0,subtot=0;month<MONTHS;month++)
			subtot+=*(*(rain+year)+month);
		printf("year %d subtot  %f\n",year,subtot);
		total+=subtot;
	}
	printf("total=%.1f  Æ½¾ù %.1f\n",total,total/YEARS);
	for(month=0;month<MONTHS;month++)
	{
		for(year=0,subtot=0;year<YEARS;year++)
			subtot+=*(*(rain+year)+month);
		printf("%d   %.2f\n",month,subtot);
	}
	getch();
	return 0;
}



