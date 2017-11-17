#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h> 
#define ASD 18
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
int notes_show(FILE * fp);
void notes_lineinput(FILE * fp,int i,char v);
void notes_delete(FILE * fp,int * array,int arraylong,int filelength);
void notes_modification(FILE * fp,int * array,int arraylong,int filelength);
char menu(void);
int main()
{
	FILE * fp;
	fp=open_file();
	char v;
	int i;
	struct player play[ASD];
	initialize(play);
	while((v=menu())!='q')
	{
		switch(v)
		{
			case 'a':
				notes_show(fp);
				break;
			case 'b':
				 input(play,fp);
				 calculate(play);
				 show(play);
				 break;
			case 'c':
			case 'd':
				 i= notes_show(fp);
				 fseek(fp,0L,SEEK_SET);
				 notes_lineinput(fp,i,v);
				 break;
			default:
				 printf("error,input menu again!: ");
				 break;		 
		}
		putchar('\n');
		initialize(play);
		fseek(fp,0L,SEEK_SET);
	}
	fclose(fp); 
	getch();
	return 0;
}
int notes_show(FILE * fp)
{
    int i=0;
    char ch[80]; 
    while(fgets(ch,80,fp)!=NULL&&ch[0]!='\0')
    {
	    i++;
	    printf(" %d   %s\n",i,ch);
    }
    return i;
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
	int number,end,i0,i1,i2,i3,i4,i5,i6,in;
	while(fgets(ch,80,fp)!=NULL&&ch[0]!='\0')
	{
    		        for(end=0;ch[end]!='\0';end++)
    		        	continue;
    	        	for(i0=0;ch[i0]!=' ';i0++)
    		        	continue;
    	        	number=atoi(ch)-1;
    	        	play[number].number=number+1;
    	        	for(i1=i0+1;ch[i1]!=' ';i1++)
    		        	continue;
    	        	for(in=0;in<i1-(i0+1);in++)
    	        		play[number].title[in]=ch[in+i0+1];
    	        	play[number].title[in]='\0';
    	        	i1+=1;
    	        	for(i2=i1;ch[i2]!=' ';i2++)
    		        	continue;
    	        	for(in=0;in<i2-i1;in++)
    		        	play[number].surname[in]=ch[in+i1];
    	        	play[number].surname[in]='\0';
    	        	i2=i2+1;
    	        	play[number].stage+=atoi(ch+i2);
    	        	for(i3=i2;ch[i3]!=' ';i3++)
    	        		continue;
    	        	i3++;
    	        	play[number].hit+=atoi(ch+i3);
    	        	for(i4=i3;ch[i4]!=' ';i4++)
    		        	continue;
    	        	i4++;
    	        	play[number].base+=atoi(ch+i4);
    	        	for(i5=i4;ch[i5]!=' ';i5++)
    		        	continue;
    	        	i5++;
    	        	play[number].rbi+=atoi(ch+i5);
                
	}
}
void initialize(struct player * play)
{
	int i;
	for(i=0;i<ASD;i++)
	{
		play[i].number=0;
		play[i].title[0]='\0';
		play[i].surname[0]='\0';
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
	{
		printf("%2d  %7s %7s %2d %2d %2d %2d %.2f\n",play[i].number,play[i].title,play[i].surname,
				play[i].stage,play[i].hit,play[i].base,play[i].rbi,play[i].succeed);
        }
}
char menu(void)
{
	char ch[20];
	printf("     a)查看球员记录  b).查看球员总计\n");
	printf("     c).修改球员记录  d).删除球员记录\n");
	printf("     q).退出\n");
	while(gets(ch)==NULL||((ch[0]<'a'||ch[0]>'d')&&ch[0]!='q'))
		printf("error,input menu again!: ");
	return ch[0];
}
void notes_lineinput(FILE * fp,int i,char v)
{
	int array[40];
	printf("input 行号(空格分隔，-1结束)\n");
	int i1=0,n;
	int n1,n2,detection;
	while(scanf("%d",&n)==1&&n!=-1)
	{
		if(n>i)
		{
			printf("%d 大于最大行号，系统无法接受，其余行号已经接收，-1结束输入\n",n);
			continue;
		}
		array[i1]=n;
		i1++;
	}
	while(getchar()!='\n')
		continue;
	for(n1=i1;n1>=0;n1--)
	{
		detection=0;
		for(n2=0;n2<n1-1;n2++)
		{
			if(array[n2]>array[n2+1])
			{
				n=array[n2];
				array[n2]=array[n2+1];
				array[n2+1]=n;
				detection=1;
			}
		}
		if(detection==0)
			break;
	}
	if(v=='d')
		notes_delete(fp,array,i1,i);  //i1为array的最后一个数的下标+1。i为文件中字符串个数
	else if(v=='c')
		notes_modification(fp,array,i1,i);

}
void notes_delete(FILE * fp,int * array,int arraylong,int filelength)
{
	FILE * fdelete;
	int n1=0,n2;
	if((fdelete=fopen("flia_delete_ok.txt","w"))==NULL)
	{
		printf("无法建立删除文件副本，现在按enter键关闭程序");
		getchar();
		exit(EXIT_FAILURE);
	}
	char ch[filelength+1][80];//只能在c99下运行，如果不是c99，则把filelength变量换为大于行号的一个常数。
	while(fgets(ch[n1],80,fp)!=NULL&&ch[n1][0]!='\0')
		n1++;
	for(n2=0;n2<arraylong;n2++)
		ch[array[n2]-1][0]='\0';
	for(n2=0;n2<=n1;n2++)
		fputs(ch[n2],fdelete);
	fclose(fdelete);
	printf("删除成功！\n");
}
void notes_modification(FILE * fp,int * array,int arraylong,int filelength)
{
	FILE * fmod;
	int n1=0,n2;
	if((fmod=fopen("flia_mod_ok.txt","w"))==NULL)
	{
		printf("无法建立修改文件副本，现在按enter键关闭程序");
		getchar();
		exit(EXIT_FAILURE);
	}
	char ch[filelength+1][80];
	while(fgets(ch[n1],80,fp)!=NULL&&ch[n1][0]!='\0')
		n1++;
	for(n2=0;n2<arraylong;n2++)
	{
		printf("现在修改第%d行：",array[n2]);
		fgets(ch[array[n2]-1],80,stdin);
	}
	for(n2=0;n2<n1;n2++)
		fputs(ch[n2],fmod);
	fclose(fmod);
	printf("修改成功！\n");
}














