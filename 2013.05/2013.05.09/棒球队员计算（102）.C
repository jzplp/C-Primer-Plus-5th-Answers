#include<stdio.h> 
#include<conio.h>
#include<string.h>
#include<stdlib.h> 
#define ASD 9  //仅能计算单个数字 
struct player
{
	int number;
	char title[20];
	char surname[20];
	int stage;
	int hit;
	int base;
	int rbi;
	float succeed;
};
FILE * open_file(void);
void input(struct player * play,FILE * fp);
void initialize(struct player * play);
void calculate(struct player * play);
void show(struct player * play);
int main()
{
	FILE * fp;
	fp=open_file();
	struct player play[ASD];
	initialize(play);
	input(play,fp);
	calculate(play);
	show(play);
	getch();
	return 0;
}
FILE * open_file(void)
{
	FILE * fp;
	char ch[40];
        printf("input file address:  ");
	gets(ch);
	while((fp=fopen(ch,"r"))==NULL)
	{
		printf("file open error,please input file sddress again: \n");
		gets(ch);
	}
	return fp;
}
void input(struct player * play,FILE * fp)
{
	char ch[80];
	int number,end,i1,i2,in;
	while(fgets(ch,80,fp)!=NULL&&ch[0]!='\0')
	{
		number=atoi(ch)-1;
		play[number].number=number+1;
		for(end=2;ch[end]!='\0';end++)
			continue;
		for(i1=2;ch[i1]!=' ';i1++)
			continue;
		for(in=0;in<i1-2;in++)
			play[number].title[in]=ch[in+2];
		play[number].title[in]='\0';
		i1+=1;
		for(i2=i1;ch[i2]!=' ';i2++)
			continue;
		for(in=0;in<i2-i1;in++)
			play[number].surname[in]=ch[in+i1];
		play[number].surname[in]='\0';
		play[number].stage+=atoi(ch+i2+1);
		play[number].hit+=atoi(ch+i2+3);
		play[number].base+=atoi(ch+i2+5);
		play[number].rbi+=atoi(ch+i2+7);
	}
}
void initialize(struct player * play)
{
	int i;
	for(i=0;i<ASD;i++)
	{
		play[i].stage=0;
		play[i].hit=0;
		play[i].base=0;
		play[i].rbi=0;
	}
}
void calculate(struct player * play)
{
	int i;
	for(i=0;i<ASD;i++)
	{
		if(play[i].stage!=0)
			play[i].succeed=(float)play[i].hit/play[i].stage;
		else
			play[i].succeed=0;
	}
}
void show(struct player * play)
{
	int i;
	for(i=0;i<ASD;i++)
		printf("%d  %s %s %d %d %d %d %.2f\n",play[i].number,play[i].title,play[i].surname,
				play[i].stage,play[i].hit,play[i].base,play[i].rbi,play[i].succeed);
}







	




