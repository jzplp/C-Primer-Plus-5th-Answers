#include<stdio.h>
int calculate(int a,int b); 
int main(void)
{
	int a,b,sum;
	printf("�������������� �ÿո������q�˳���\n");
	while(scanf("%d %d",&a,&b)==2)
	{
		sum=calculate(a,b);
		printf("��Ϊ%d\n",sum);
		printf("�������������� �ÿո������q�˳���\n");
	}
	return 0;
}
int calculate(int a,int b)
{
	int sum;
	sum=a+b;
	return sum;
}
