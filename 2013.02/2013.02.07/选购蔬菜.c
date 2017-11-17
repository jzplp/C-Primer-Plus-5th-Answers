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
	printf("a.朝鲜缺  b.甜菜  c.胡萝卜  q.退出订购\n");
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
			default:printf("请重新输入！\n");
			     break;
		}
	}
	end:printf("选购结束");
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
	printf("朝鲜咸:%.2f,金额%.2f 甜菜:%.2f,金额%.2f 胡萝卜:%.2f,金额%.2f。\n",cccp,ccc,tcp,tc,hlbp,hlb);
	printf("物品金额:%.2f 总重量:%.2f运输费:%.2f 折扣:%.2f,应付款:%.2f",sum,pound,transport,rebate,put);
	getch();
	return 0;
}
void a()
{
	printf("请输入重量");
}
void b()
{
     printf("请输入类别\n");
} 
 

