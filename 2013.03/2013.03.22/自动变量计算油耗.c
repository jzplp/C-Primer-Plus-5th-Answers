#include<stdio.h>
#include<conio.h>
void get_info(int mode,double * length,double * oil);
void show_info(double length,double oil);
int main()
{
	int mode;
	double length,oil;
	printf("������1��ŷ����0:");
	scanf("%d",&mode);
	while(mode>=0)
	{
		get_info(mode,&length,&oil);
		show_info(length,oil);
		printf("������1��ŷ����0,-1�˳�:");
		scanf("%d",&mode);
	}
	printf("bye~\n");
	getch();
	return 0;
}
void get_info(int mode,double * length,double *oil)
{
	if(mode==0)
		printf("������ٹ�������");
	else
		printf("������Ӣ����");
	scanf("%lf",length);
	if(mode==0)
		printf("����������");
	else
		printf("�����������");
	scanf("%lf",oil);
}
void show_info(double length,double oil)
{
	printf("�ͺ���%.2lf\n1",oil/length);
}



