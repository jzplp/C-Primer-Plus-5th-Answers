#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include "queue.h"
#define MIN_PER_HR 60

bool newcustomer(double x);     
Item customertime(long when);

int main()
{
	Queue line1;
	Queue line2;
	
	Item temp;
	int hours;         //Сʱ�� 
	int perhour;       //ÿСʱƽ���˿��� 
	long cycle,cyclelimit;               
	long turnaways=0;                    //���ܾ��Ĺ˿��� 

	long customers=0;
	long customers1=0;	//������Ĺ˿���
	long customers2=0;                     
	
	long served1=0;                       //�õ�����Ĺ˿��� 
	long served2=0;
	
	long sum_line1=0;                     //�ۻ��Ķ��г��� 
	long sum_line2=0;
	
	int wait_time1=0;                     //��ǰ�����˿��еȴ�ʱ�� 
	int wait_time2=0;
	
    double min_per_cust;                  //�˿͵�����ƽ��ʱ�� 
	long line_wait1=0;                     //�����ۼƵȴ�ʱ�� 
	long line_wait2=0;


	Initialize_Queue(&line1);
	Initialize_Queue(&line2);

	srand(time(0));
	puts("case study:");
	puts("enter the average number");
	scanf("%d",&hours);
	cyclelimit=MIN_PER_HR*hours;
	puts("enter perhour");
	scanf("%d",&perhour);
	min_per_cust=MIN_PER_HR/(double)perhour;

	for(cycle=0;cycle<cyclelimit;cycle++)
	{
		if(newcustomer(min_per_cust))
		{
			if(Queue_IsFull(&line1)&&Queue_IsFull(&line2))
				turnaways++;
			else
			{
				customers++;
				temp=customertime(cycle);
				if(Queue_Item_Count(&line1)>=Queue_Item_Count(&line2))
				{
					customers2++;
					Queue_Add_Item(temp,&line2);
				}
				else
				{
					customers1++;
					Queue_Add_Item(temp,&line1);
				}
			}
		}
		if(wait_time1<=0&&!Queue_IsEmpty(&line1))
		{
			Queue_Detele_Item(&temp,&line1);
			wait_time1=temp.processtime;
			line_wait1+=cycle-temp.arrive;
			served1++;
		}
		if(wait_time1>0)
			wait_time1--;
		sum_line1+=Queue_Item_Count(&line1);

		if(wait_time2<=0&&!Queue_IsEmpty(&line2))
		{
			Queue_Detele_Item(&temp,&line2);
			wait_time2=temp.processtime;
			line_wait2+=cycle-temp.arrive;
			served2++;
		}
		if(wait_time2>0)
			wait_time2--;
		sum_line2+=Queue_Item_Count(&line2);
	}
	if(customers>0)
	{
		printf("customers accepted(������еĹ˿�����):%ld\n",customers);
		printf("1. %ld  2. %ld \n",customers1,customers2);
		printf("customers served��������Ĺ˿�������:\n");
		printf("1. %ld  2. %ld \n",served1,served2);
		printf("turnaways���ܾ��Ĺ˿�����:%ld\n",turnaways);
		printf("average queue size��ƽ�����鳤�ȣ�:\n");
		printf("1. %.2lf  2. %.2lf \n",(double)sum_line1/cyclelimit,(double)sum_line2/cyclelimit);
		printf("average wait time ��ƽ���ȴ�ʱ�䣩: minutes\n");
		printf("1. %.2lf  2. %.2lf \n",(double)line_wait1/served1,(double)line_wait2/served2);
	}
	else
		puts("no customs!");
	Queue_Empty(&line1);
	Queue_Empty(&line2);
	puts("bye");
	getch();
	return 0;
}

bool newcustomer(double x)
{
	if(rand()*x/RAND_MAX<1)
		return true;
	else
		return false;
}

Item customertime(long when)
{
	Item cust;
	cust.processtime=rand()%3+1;
	cust.arrive=when;
	return cust;
}



