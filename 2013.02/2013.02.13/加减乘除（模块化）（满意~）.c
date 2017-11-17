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
	printf("请选择计算类型\n");
	printf("a.加              s.减\n");
	printf("m.乘              d.除\n");
	printf("q.退出\n");
	menu1=getchar();
	while(getchar()!='\n')
		continue;
	while((((menu1!='a'&&menu1!='s')&&menu1!='m')&&menu1!='d')&&menu1!='q')
	{
		printf("请重新输入！\n");
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
		printf("请输入数字,比如 2.5,-1.78E8,或者3:");
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
				printf("除数不能为0，请重新输入！");
				second=input();
			}
			total=first/second;
			printf("%.2f/%.2f=%.2f",first,second,total);
			break;
	}
}







	



