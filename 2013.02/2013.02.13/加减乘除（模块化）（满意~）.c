#include<stdio.h> 
char menu();
float input();
void count (float first,float second,char menu1);
int main()
{
	char menu1;
	float first,second;
	while((menu1=menu())!='q')
	{
		printf("Enter first number:");
		first=input();
		printf("Enter the second number:"); 
		second=input();
		count(first,second,menu1);
	}
	return 0;
}
char menu()
{
	int menu1;
	printf("��ѡ���������\n");
	printf("a.��              s.��\n");
	printf("m.��              d.��\n");
	printf("q.�˳�\n");
	menu1=getchar();
	while(getchar()!='\n')
		continue;
	while((((menu1!='a'&&menu1!='s')&&menu1!='m')&&menu1!='d')&&menu1!='q')
	{
		printf("���������룡\n");
		menu1=getchar();
		while(getchar()!='\n')
		      continue;
	}
	return menu1;
}
float input()
{
	float input1;
	while(scanf("%f",&input1)==0)
	{
		printf("����������,���� 2.5,-1.78E8,����3:");
		while(getchar()!='\n')
			continue;
	}
	while(getchar()!='\n')
		continue;

	return input1;
}
void count (float first,float second,char menu1)
{
	float total;
	switch(menu1)
	{
		case 'a':
			total=first+second;
			printf("%.2f+%.2f=%.2f\n",first,second,total);
			break;
		case 's':
			total=first-second;
			printf("%.2f-%.2f=%.2f\n",first,second,total);
			break;
		case 'm':
			total=first*second;
			printf("%.2f*%.2f=%.2f",first,second,total);
			break;
		case 'd':
			if(second==0)
			{
				printf("��������Ϊ0�����������룡");
				second=input();
			}
			total=first/second;
			printf("%.2f/%.2f=%.2f",first,second,total);
			break;
	}
}







	



