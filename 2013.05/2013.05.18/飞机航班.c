#include<stdio.h>         //必须先创建文件 
#include<conio.h>
#define QUANTITY 12
struct plane
{
	int number;
	int distribute;
	char surname[20];
	char title[20];
};
char menu(void);
void first(struct plane * planes);
void read(struct plane * planes,FILE * fp);
void write(struct plane * planes,FILE * fp);
void number_show(struct plane * planes);
void list_show(struct plane * planes);
void name_show(struct plane * planes);
void input(struct plane * planes);
void detele(struct plane * planes);
int main()
{
	struct plane planes[QUANTITY];
	char select;
	FILE * fp;
	char file[30];
	printf("please input file name:\n");
	gets(file);
	if((fp=fopen(file,"r+"))==NULL)
	{
		printf("error, file con`t open,please input file again:\n");
		gets(file);
	}
	rewind(fp);
	read(planes,fp);
	while((select=menu())!='f')
	{
		switch (select)
		{
                case 'a':
			number_show(planes);
			break;
		case 'b':
			list_show(planes);
			break;
		case 'c':
			name_show(planes);
			break;
		case 'd':
			input(planes);
			break;
		case 'e':
			detele(planes);
			break;
		case 'g':          //隐藏命令，此命令对他初始化。 
			first(planes);
			break;
		}

	}
	rewind(fp);
	write(planes,fp);
	fclose(fp);
	printf("thank you for use.\n");
	getch();
	return 0;
}
char menu()
{
	char select[20];
	printf("To choose a function ,enter its letter label:\n");
	printf("a) Show number of empty seats\n");
	printf("b) Show list of empty seats\n");
	printf("c) Show alphabetical list of seats\n");
	printf("d) Assign a customer to a seat assignment\n");
	printf("e) delete a seat assignment\n");
	printf("f) Quit\n");
	gets(select);
	while(select[0]>'g'||select[0]<'a')
	{
		printf("error,please input your select again:");
		gets(select);

	}
	return select[0];
}
void read(struct plane * planes,FILE * fp)
{
	fread(planes,sizeof(struct plane),QUANTITY,fp);
}
void number_show(struct plane * planes)
{
	int n;
	for(n=0;n<QUANTITY;n++)
	{
		if(planes[n].distribute==0)
			printf("%2d %5s %6s %6s\n",planes[n].number,"false","null","null");
		else
			printf("%2d %5s %6s %6s\n",planes[n].number,"ture",planes[n].surname,planes[n].title);
	}
	printf("\n\n\n\n");
}
void list_show(struct plane * planes)
{
	int n;
	for(n=0;n<QUANTITY;n++)
	{
		if(planes[n].distribute==0)
			printf("%2d %5s \n",planes[n].number,"false");
	}
	printf("\n\n\n\n");
}
void name_show(struct plane * planes)
{
	int n,i1,i2,flag,n1=0;
	struct plane * ppr[QUANTITY],* pppr;
	for(n=0;n<QUANTITY;n++)
	{
		if(planes[n].distribute!=0)
		{
			ppr[n]=&(planes[n]);
			n1++;
		}
	}
	for(i1=0;i1<n1;i1++)
	{
		flag=0;
		for(i2=0;i2<n1-i1-1;i2++)
		{	
			if(strcmp(ppr[i2]->surname,ppr[i2+1]->surname)>0)
			{
				pppr=ppr[i2];
				ppr[i2]=ppr[i2+1];
				ppr[i2+1]=pppr;
				flag=1;
			}
		}
	}
	for(i1=0;i1<n1;i1++)
		printf("%2d %5s %6s %6s\n",ppr[i1]->number,"ture",ppr[i1]->surname,ppr[i1]->title);
	printf("\n\n\n\n");
}
void input(struct plane * planes)
{
     int n;
	char surname[20];
	char title[20];
	printf("input your surname:\n");
	gets(surname);
	while(surname[0]=='\0')
	{
		printf("null? input again!\n");
		gets(surname);
	}
	printf("input your title:\n");
	gets(title);
	while(title[0]=='\0')
	{
		printf("null? input again!\n");
		gets(title);
	}
	for(n=0;n<QUANTITY;n++)
	{
		if(planes[n].distribute==0)
			break;
	}
	printf("您的座位是%d\n\n\n",n+1);
	planes[n].distribute=1;
	strcpy(planes[n].surname,surname);
	strcpy(planes[n].title,title);
}
void detele(struct plane * planes)
{
	int count[20],n=0,i1,i2,count_than[20],than=0;
	printf("input detele number(空格隔开)\n");
	scanf("%d",&count[n]);
	while(count[n]>0)
	{
		n++;
		scanf("%d",&count[n]);
    }
	while(getchar()!='\n')
		continue;
	for(i1=0,i2=0;i1<n;i1++)
	{
		if(count[i1]>QUANTITY)
		{
			printf("%d,",count[i1]);
			count[i2]=count[i1+1];
		}
		else
			i2++;
	}
	printf("大于座位号，无法删除，其余都已删除\n");
	for(i1=0;i1<i2;i1++)
	{
		planes[count[i1]-1].distribute=0;
		planes[count[i1]-1].surname[0]='\0';
		planes[count[i1]-1].title[0]='\0';
	}
}
void write(struct plane * planes,FILE * fp)
{
	fwrite(planes,sizeof(struct plane),QUANTITY,fp);
}
void first(struct plane * planes)
{
	int n;
	for(n=0;n<QUANTITY;n++)
	{
		planes[n].number=n+1;
		planes[n].distribute=0;
		planes[n].surname[0]='\0';
		planes[n].title[0]='\0';
	}
	printf("初始化完成.\n\n\n");
}








