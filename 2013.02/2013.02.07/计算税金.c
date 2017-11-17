#include<stdio.h>
#include<conio.h>
#define SINGLE 17850
#define HEAD 23900
#define MARRIED 29750
#define DIVORCED 14875
#define ONE 0.15
#define TWO 0.28
int main(void)
{
	int first,second,input;
	float tax;
	printf("请选择种类（按数字键后按确定）");
	printf("(1).单身  (2).户主  (3).已婚  (4).离异  \n");
	while(scanf("%d",&first)==1)
	{
	        if(first<0||first>=5)
		{
			printf("请重新输入！");
			continue;
        }
		switch(first)
		{
			case 1:first=SINGLE;
			       break;
			case 2:first=HEAD;
			       break;
			case 3:first=MARRIED;
			       break;
			case 4:first=DIVORCED;
			       break;
		}
		printf("请输入钱数：");
		scanf("%d",&input);
		if(input<=first)
			tax=input*ONE;
		else
			tax=first*ONE+(input-first)*TWO;
		printf("\n您的税金为%.2f\n请继续选择类型：",tax);
	}
	getch();
	return 0;
}


 
 
