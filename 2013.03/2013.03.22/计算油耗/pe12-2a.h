#include<stdio.h>
int mode1;
double length;
double measure;
void set_mode(int a);
void get_info(void);
void show_info(void);
void set_mode(int a)
{
	mode1=a;
}
void get_info(void)
{
	if(mode1==0)
		printf("������ٹ�����~:");
	else
		printf("������Ӣ������");
	scanf("%lf",&length);
	if(mode1==0)
		printf("��������:");
	else
		printf("�����������");
	scanf("%lf",&measure);
}
void show_info(void)
{
	if(mode1==0)
		printf("ŷ�޵ģ�");
	else
		printf("�����ģ�");
	printf("  %.2lf\n\n",length/measure);
}


