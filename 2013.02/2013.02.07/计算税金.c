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
	printf("��ѡ�����ࣨ�����ּ���ȷ����");
	printf("(1).����  (2).����  (3).�ѻ�  (4).����  \n");
	while(scanf("%d",&first)==1)
	{
	        if(first<0||first>=5)
		{
			printf("���������룡");
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
		printf("������Ǯ����");
		scanf("%d",&input);
		if(input<=first)
			tax=input*ONE;
		else
			tax=first*ONE+(input-first)*TWO;
		printf("\n����˰��Ϊ%.2f\n�����ѡ�����ͣ�",tax);
	}
	getch();
	return 0;
}


 
 
