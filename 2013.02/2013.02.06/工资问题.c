#include<stdio.h>
#include<conio.h>
#define BASIC 10.00
#define OVER 40
#define OVERTIME 1.5
#define ONE 300
#define ONE1 0.15
#define TWO 150
#define TWO2 0.20
#define THREE 0.25
int main(void)
{
	int worktime;
	float sum,tax,net;
	printf("�����빤��ʱ�䣺");
	scanf("%d",&worktime);
	if(worktime<=OVER)
	{
		sum=BASIC*worktime;
		if(sum<=ONE)
			tax=sum*ONE1;
		else
			tax=ONE*ONE1+(sum-ONE)*TWO2;
	}
	else
	{
		sum=OVER*BASIC+(worktime-OVER)*OVERTIME*BASIC;
		if(sum<=(ONE+TWO))
			tax=ONE*ONE1+(sum-ONE)*TWO2;
		else
			tax=ONE*ONE1+TWO*TWO2+(sum-ONE-TWO)*THREE;
	}
	net=sum-tax;
	printf("�ܹ���Ϊ:%.2f,˰��Ϊ:%.2f,������Ϊ:%.2f",sum,tax,net);
	getch();
	return 0;
}


