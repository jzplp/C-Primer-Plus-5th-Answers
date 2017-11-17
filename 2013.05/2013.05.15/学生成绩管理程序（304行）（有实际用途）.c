#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define STUD 270
struct pero
{
	int number;
	char name[20];
	int sports;
	int english;
	int chemistry;
	int engineer;
	int math;
	int pack;
	int law;
	int profession;
	int sum;
};
FILE * file_open(void);
char menu(void);
void initialize(struct pero * student);
int pero_input(struct pero * student,FILE * fp);
void number_input(struct pero * student,int student_count);
void collage_number_show(struct pero * student,int student_count);
void student_sum(struct pero * student,int student_count);
void collage_list_show(struct pero * student,int student_count);
void class_number(struct pero * student,int student_count,char v);
int main(void)
{
	struct pero student[STUD];
	char ch[30];
	char v;
	int student_count;
	printf("�����Ϊѧ���ɼ������ã�\n�뽫����򿪵��ļ��뱾������ŵ������ϡ�\n");
	FILE * fp;
	fp=file_open();
	initialize(student);
	student_count=pero_input(student,fp);//����ѧ�������� 
	student_sum(student,student_count);
	while((v=menu())!='e')
	{
		switch(v)
		{
			case 'a':collage_number_show(student,student_count);
				 break;
			case 'b':collage_list_show(student,student_count);
				 break;			
			case 'c':class_number(student,student_count,v);
				 break;
			case 'd':class_number(student,student_count,v);
				 break;
			case 'f':number_input(student,student_count);
				 break;
		}
	}
	fclose(fp); 
	getch();
	return 0;
}
FILE * file_open(void)
{
	char ch[50];
	FILE * fp;
	printf("��������Ҫ�򿪵��ļ���������׺txt�����������enter����\n");
	gets(ch);
	while((fp=fopen(ch,"r+"))==NULL)  // yuanwenjian.txt
	{
		printf("�ļ��򲻿������������룡���������enter����\n");
		gets(ch);
	}
	return fp;
}
char menu(void)
{
	char ch[10];
	printf("������ѡ��ǰ����ĸ�� �����enter��\n");
	printf("a)����ѧ�����ȫԺѧ���ɼ��ļ���\n");
	printf("b)�����ܳɼ���߷����ȫԺѧ���ɼ��ļ�\n");
	printf("c)����༶ѧ��ѧ���ļ�����ѧ������༶ѧ���ɼ��ļ���\n");
	printf("d)����༶ѧ���ļ������ܳɼ��ߵ�����༶ѧ���ɼ��ļ�\n");
	printf("e)�˳�����\n");
	printf("f)��������Աʹ�ã���������ѧ���ļ�\n");
	printf("g)��������Աʹ�ã�����ṹ�ɼ��ļ�\n");
	gets(ch);
	while(ch[0]>'g'||ch[0]<'a')
	{
		printf("���������������Ч�ַ���\n");
		gets(ch);
	}
	return ch[0];
}
void initialize(struct pero * student)
{
	int i;
	for(i=0;i<270;i++)
	{
		student[i].number=0;
		student[i].name[0]='\0';
		student[i].sports=0;
		student[i].english=0;
		student[i].chemistry=0;
		student[i].engineer=0;
		student[i].math=0;
		student[i].pack=0;
		student[i].law=0;
		student[i].profession=0;
		student[i].sum=0;
	}
}
int pero_input(struct pero * student,FILE * fp)
{
	char ch[200];
	int pero_count=0,student_count=0,ch_select;
	while(fgets(ch,200,fp)!=NULL&&ch[0]!='\0')
	{ 
        ch_select=0;
		if(pero_count!=6)
			for(ch_select=12;ch[ch_select]!=9;ch_select++)
				continue;
		switch(pero_count)
		{
			case 0:student[student_count].sports=atol(ch+ch_select);
			       break;
			case 1:student[student_count].english=atol(ch+ch_select);
			       break;
			case 2:student[student_count].chemistry=atol(ch+ch_select);
			       break;
			case 3:student[student_count].engineer=atol(ch+ch_select);
			       break;
			case 4:student[student_count].math=atol(ch+ch_select);
			       break;
			case 5:student[student_count].pack=atol(ch+ch_select);
			       break;
			case 7:student[student_count].law=atol(ch+ch_select);
			       break;
			case 8:student[student_count].profession=atol(ch+ch_select);
			       break;
		}
		if(pero_count==0)
			student[student_count].number=atol(ch);
		pero_count++;
		if(pero_count==9)
		{
			pero_count=0;
			student_count++;
        }
	}
	return student_count;
}
void number_input(struct pero * student,int student_count)
{
	char fch[40],ch[80];
	FILE * fp;
	int i1;
	printf("input file name:\n");
	gets(fch);
	while((fp=fopen(fch,"r+"))==NULL)  //xuehao.txt
	{
		printf("con`t open,input again!:\n");
		gets(fch);
	}
	for(i1=0;i1<student_count+1;i1++)
	{
		fgets(ch,80,fp);
		sprintf(student[i1].name,"%s",ch+11);
	}
	fclose(fp);
}
void collage_number_show(struct pero * student,int student_count)
{
	int n;
	FILE * fp;
	printf("�����collage_number_show.txt�ļ���\n\n");
	fp=fopen("collage_number_show.txt","w");
	for(n=0;n<student_count;n++)
	{
		fprintf(fp,"%10d %10s ����%2d Ӣ��%2d ��ѧ%2d ",student[n].number,student[n].name,student[n].sports,student[n].english,student[n].chemistry);
		fprintf(fp,"��ͼ%2d ��ѧ%2d ����%2d ����%2d ְҵ���Ĺ滮%2d �ܷ�%2d\n",student[n].engineer,student[n].math,student[n].pack,student[n].law,student[n].profession,student[n].sum);
	}
	fclose(fp);
}
void student_sum(struct pero * student,int student_count)
{
	int n;
	for(n=0;n<=student_count;n++)
		student[n].sum=student[n].sports+student[n].english+student[n].chemistry+student[n].engineer+student[n].math+student[n].pack+student[n].law+student[n].profession;
}
void collage_list_show(struct pero * student,int student_count)
{
    int n,i1,i2,detection;
    FILE * fp;
    struct pero transition;
    fp=fopen("collage_list_show.txt","w+");
    struct pero pstr[student_count];   //only c99
    for(n=0;n<student_count;n++)
      pstr[n]=student[n];
    for(i1=student_count-1;i1>0;i1--)
    {
        detection=0;
        for(i2=0;i2<i1-1;i2++)
        {
            if((pstr[i2].sum)<(pstr[i2+1].sum))
            {
                detection=1;
                transition=pstr[i2];
                pstr[i2]=pstr[i2+1];
                pstr[i2+1]=transition;
             }
        }
    }
    for(n=0;n<student_count;n++)
    {
        fprintf(fp,"%3d %10d %10s ����%2d Ӣ��%2d ��ѧ%2d ",n+1,pstr[n].number,pstr[n].name,pstr[n].sports,pstr[n].english,pstr[n].chemistry);
        fprintf(fp,"��ͼ%2d ��ѧ%2d ����%2d ˼��%2d ְҵ�滮%2d �ܷ�%2d\n",pstr[n].engineer,pstr[n].math,pstr[n].pack,pstr[n].law,pstr[n].profession,pstr[n].sum);
    }
    fclose(fp);
    printf("����� collage_list_show.txt\n\n");
}
void class_number(struct pero * student,int student_count,char v)
{
	FILE * fp;
	int class_count=0,i1,i2,detection,transition;
	int class_number[55]={0};
	char fch[80];
	struct pero transition1; 
	printf("input file:");
	gets(fch);
	while((fp=fopen(fch,"r+"))==NULL) //banji.txt
	{
		printf("con`t open %s file,input again!\n",fch);
		gets(fch);
	}
	FILE * fout1;
	FILE * fout2;
	while(fgets(fch,80,fp)!=NULL&&fch[0]!='\0')
	{
		class_number[class_count]=atol(fch);
		class_count++;
	}
	struct pero class_student[class_count];
	for(i1=class_count;i1>0;i1--)
	{
		detection=0;
		for(i2=0;i2<class_count-1;i2++)
		{
			if(class_number[i2]>class_number[i2+1])
			{
				detection=1;
				transition=class_number[i2];
				class_number[i2]=class_number[i2+1];
				class_number[i2+1]=transition;
			}
		}
	}
	if(v=='c')
	{
		printf("�����class_number_show.txt �ļ���\n\n");
		fout1=fopen("class_number_show.txt","w+");
		for(i1=0,i2=0;i2<class_count;i1++)
		{
			if(student[i1].number==class_number[i2])
			{
				fprintf(fout1,"%10d %10s ����%2d Ӣ��%2d ��ѧ%2d ",student[i1].number,student[i1].name,student[i1].sports,student[i1].english,student[i1].chemistry);
				fprintf(fout1,"��ͼ%2d ��ѧ%2d ����%2d ����%2d ְҵ���Ĺ滮%2d �ܷ�%2d\n",student[i1].engineer,student[i1].math,student[i1].pack,student[i1].law,student[i1].profession,student[i1].sum);
				i2++;
			}
		}
		fclose(fout1);
	}
	if(v=='d')
	{
		printf("�����class_list_show.txt �ļ���\n\n");
		fout2=fopen("class_list_show.txt","w+");
		for(i1=0,i2=0;i2<class_count;i1++)
		{
			
			if(student[i1].number==class_number[i2])
			{
				class_student[i2]=student[i1];
				i2++;
			}
		}
		for(i1=class_count-1;i1>0;i1--)
        	{
            		detection=0;
            		for(i2=0;i2<i1-1;i2++)
           	 	{
            			if((class_student[i2].sum)<(class_student[i2+1].sum))
           			{
                			detection=1;
                			transition1=class_student[i2];
                			class_student[i2]=class_student[i2+1];
               				class_student[i2+1]=transition1;
             			}
        		}
    		}
		for(i1=0;i1<class_count;i1++)
		{
			 fprintf(fout2,"%2d %10d %10s ����%2d Ӣ��%2d ��ѧ%2d ",i1+1,class_student[i1].number,class_student[i1].name,class_student[i1].sports,class_student[i1].english,class_student[i1].chemistry);
			 fprintf(fout2,"��ͼ%2d ��ѧ%2d ����%2d ����%2d ְҵ���Ĺ滮%2d �ܷ�%2d\n",class_student[i1].engineer,class_student[i1].math,class_student[i1].pack,class_student[i1].law,class_student[i1].profession,class_student[i1].sum);
		}
		fclose(fout2);
	}
}








