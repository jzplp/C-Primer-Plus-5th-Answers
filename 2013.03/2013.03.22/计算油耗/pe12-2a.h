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
		printf("请输入百公里数~:");
	else
		printf("请输入英里数：");
	scanf("%lf",&length);
	if(mode1==0)
		printf("输入升数:");
	else
		printf("输入加仑数：");
	scanf("%lf",&measure);
}
void show_info(void)
{
	if(mode1==0)
		printf("欧洲的！");
	else
		printf("美国的！");
	printf("  %.2lf\n\n",length/measure);
}


