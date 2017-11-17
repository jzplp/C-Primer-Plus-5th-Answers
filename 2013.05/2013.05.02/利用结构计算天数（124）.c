#include<stdio.h>
#include<conio.h>
#define MONTH 12
struct mmm 
{
	char name[20];
	char abbr[20];
	int day;
	int number;
};
struct mmm year[MONTH]=
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
void year_judge(int years);
int month_judge();
int day_judge(const int month);
int count(const int month,const int day);
int main(void)
{
	int years,months,days,sum;
	printf("input year:(q to quit)");
	while(scanf("%d",&years)==1&&years>=0)
	{
		year_judge(years);
		if((months=month_judge())==-2)
			break;
		if((days=day_judge(months))==-2)
        		break;
			sum=count(months,days);
		printf("The days is %d days!!!\n\n",sum);
		printf("now input year:(0 to quit)");
	}
	printf("\n      bye~~~\n");
	getch();
	return 0;
}
void year_judge(int years)
{
	if(years%4==0&&years%100!=0)
		year[1].day=29;
	else if(years%400==0)
		year[1].day=29;
	else 
		year[1].day=28;
}
int month_judge()
{
	char months[20];
	int month=-1;
	int i;
	printf("input month:(-2 to quit)");
	while(getchar()!='\n')
	    continue;
	while(month==-1)
	{
		gets(months);
		if(months[0]=='\0')
			continue;
		else if((month=atoi(months))!=0)
		{
			if((month>(MONTH+1)||month<0)&&month!=-2)                                  
				month=-1;
			else 
				return month;
		}
		else
		{
            month=-1;
			for(i=0;i<MONTH;i++)
			{
				if((strcmp(months,year[i].name)==0)||(strcmp(months,year[i].abbr)==0))
				{
					month=i+1;
					return month;
				}
			}
		}
	    printf("error,input month again:(-2 to quit)");
	}
}
int day_judge(const int month)
{
	int days=-1;
    printf("input day:(-2 to quit)");
	while(days==-1)
	{
		if(scanf("%d",&days)!=0)
		{
            if(days>(year[month-1].day))
		    {
			    days=-1;
		    }
		    else
		    {   
			    return days;
            }
	    }
	    printf("error,input day again! (-2 to quit):");
        while(getchar()!='\n')
            continue;
     }
}
int count(const int month,const int day)
{
	int i,sum=0;
	for(i=0;i<(month-1);i++)
	{
		sum+=year[i].day;
	}
	sum+=day;
	return sum;
}














		

		
