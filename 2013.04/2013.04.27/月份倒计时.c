#include<stdio.h>
#include<conio.h>
#define MONTH 12
int day(int month);
struct months
{
	char name[20];
	char abbr[5];
	int days;
	int number;
}; 
int main()
{
	int month;
	printf("input month:"); 
		while(scanf("%d",&month))
		{
			printf("æ‡¿Îªπ”–%dÃÏ°£\n",day(month));
			printf("input month:"); 
		}
	getch();
	return 0;
}
int day(int month)
{
	struct months year[MONTH]=
	{
		{"january","jan",31,1},
		{"february","feb",28,2},
		{"march","mar",31,3},
		{"april","apr",30,4},
		{"may","may",31,5},
		{"june","jun",30,6},
		{"july","jul",31,7},
		{"august","aug",31,8},
		{"september","sep",30,9},
		{"october","oct",31,10},
		{"november","nov",30,11},
		{"december","dec",31,12}
	};
	int n,sum=0;
	for(n=month-1;n<MONTH;n++)
		sum+=year[n].days;
	return sum;
}







