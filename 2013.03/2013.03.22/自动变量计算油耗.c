#include<stdio.h>
#include<conio.h>
void get_info(int mode,double * length,double * oil);
void show_info(double length,double oil);
int main()
{
	int mode;
	double length,oil;
	printf("美国是1，欧洲是0:");
	scanf("%d",&mode);
	while(mode>=0)
	{
		get_info(mode,&length,&oil);
		show_info(length,oil);
		printf("美国是1，欧洲是0,-1退出:");
		scanf("%d",&mode);
	}
	printf("bye~\n");
	getch();
	return 0;
}
void get_info(int mode,double * length,double *oil)
{
	if(mode==0)
		printf("请输入百公里数：");
	else
		printf("请输入英里数");
	scanf("%lf",length);
	if(mode==0)
		printf("请输入升数");
	else
		printf("请输入加仑数");
	scanf("%lf",oil);
}
void show_info(double length,double oil)
{
	printf("油耗是%.2lf\n1",oil/length);
}



