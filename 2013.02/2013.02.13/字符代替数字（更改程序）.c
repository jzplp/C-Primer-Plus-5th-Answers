#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#define OVER 40
#define OVERTIME 1.5
#define ONE 300
#define ONE1 0.15
#define TWO 150
#define TWO2 0.20
#define THREE 0.25
#define Q1 8.75
#define Q2 9.33
#define Q3 10.00
#define Q4 11.20
#define LOOP1 70
#define LOOP2 20
int main(void)
{
	int worktime,loop,input;
	float sum,tax,net,basic;
	char interface='*',inter=' ';
	printf("\n\n���ʼ������\n\n");
	for(loop=0;loop<LOOP1;loop++)
		printf("%c",interface);
	printf("\n\n��ѡ���ʵȼ���(������벢��ȷ����)\n\n");
	printf("(a).8.75$/Сʱ");
	for(loop=0;loop<(LOOP2+1);loop++)
		printf("%c",inter);
	printf("(b).9.33$/Сʱ\n\n(c).10.00$/Сʱ");
	for(loop=0;loop<LOOP2;loop++)
		printf("%c",inter);
	printf("(d).11.20$/Сʱ\n\n");
	printf("(q).�˳�����\n\n");
	for(loop=0;loop<LOOP1;loop++)
		printf("%c",interface);
	printf("\n");
	while(scanf("%c",&input)==1)
	{		
		if((input>'d'||input<'a')&&input!='q')
		{
			printf("��������ʵ���ĸ��\n");
			continue;
		}
		switch(input)
		{
			case 'a':basic=8.75;
			       break;
	                case 'b':basic=9.33;
			       break;
	                case 'c':basic=10.00;
			       break;
	                case 'd':basic=11.20;
			       break;
	                case 'q':goto finish;
	        }
		printf("   �����빤��ʱ�䣺");
		scanf("%d",&worktime);
		if(worktime<=OVER)
		{
			sum=basic*worktime;
			if(sum<=ONE)
				tax=sum*ONE1;
			else
				tax=ONE*ONE1+(sum-ONE)*TWO2;
		}
		else
		{
			sum=OVER*basic+(worktime-OVER)*OVERTIME*basic;
			if(sum<=(ONE+TWO))
				tax=ONE*ONE1+(sum-ONE)*TWO2;
			else
				tax=ONE*ONE1+TWO*TWO2+(sum-ONE-TWO)*THREE;
		}
		net=sum-tax;
		printf("\n�ܹ���Ϊ:%.2f,˰��Ϊ:%.2f,������Ϊ:%.2f\n",sum,tax,net);
		printf("�����빤�ʵȼ�(������벢��ȷ��������5�˳�����\n"); 
	}
	getch();
        finish:return 0;
}
 
