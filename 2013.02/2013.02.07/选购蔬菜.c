#include<stdio.h>
#include<conio.h>
#define CCC 1.25
#define TC 0.65
#define HLB 0.89
#define ONE 5
#define ONE1 3.50
#define TWO 20
#define TWO1 10.00
#define TWO2 8
#define TWO3 0.1
#define FAVORABLE 100
#define FAVORABLE1 0.05
void a();
void b();
int main(void)
{
	float hlb,ccc,tc,sum,pound,hlbp,cccp,tcp,rebate,transport,put;
	char input;
	b();
	printf("a.����ȱ  b.���  c.���ܲ�  q.�˳�����\n");
	ccc=tc=hlb=0;
	while(scanf("%c",&input)==1)
	{
		switch(input)
		{
			case 'a':a();
				 scanf("%f",&cccp);
				 break;
			case 'b':a();
				 scanf("%f",&tcp);
				 break;
			case 'c':a();
				 scanf("%f",&hlbp);
				 break;
			case 'q':goto end;
			case '\n':b();
                 break;
			default:printf("���������룡\n");
			     break;
		}
	}
	end:printf("ѡ������");
	pound=cccp+tcp+hlbp;
	ccc=CCC*cccp;
	tc=TC*tcp;
	hlb=HLB*hlbp;
	sum=ccc+tc+hlb;
	if(pound<ONE)
		transport=ONE1;
	else if(pound>TWO)
		transport=TWO2+pound*TWO3;
	else 
		transport=TWO1;
	if(sum>FAVORABLE)
	{
		rebate=sum*FAVORABLE1;
		put=sum-rebate;
	}
	else
		put=sum;
	put+=transport;
	printf("������:%.2f,���%.2f ���:%.2f,���%.2f ���ܲ�:%.2f,���%.2f��\n",cccp,ccc,tcp,tc,hlbp,hlb);
	printf("��Ʒ���:%.2f ������:%.2f�����:%.2f �ۿ�:%.2f,Ӧ����:%.2f",sum,pound,transport,rebate,put);
	getch();
	return 0;
}
void a()
{
	printf("����������");
}
void b()
{
     printf("���������\n");
} 
 

