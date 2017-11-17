#include<stdio.h>
#include<conio.h>
int critic(int units);
int main()
{
	int units=0;
	printf("how????????\n");
	scanf("%d",&units);
	while(units!=56)
		units=critic(units);
	printf("oh,看来要走了~\n");
	getch();
	return 0;
}
int critic(int units)
{
	printf("...做完这个题再走~\n");
	scanf("%d",&units);
	return units;
}



