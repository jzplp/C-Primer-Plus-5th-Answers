#include<stdio.h>
#include<conio.h>
int main(int argc,char * argv[])
{
	float sum=0,ch;
	int n=0;
	FILE *fp;
	if(argc==1)
	{
		printf("û�������ļ���\n");
		fp=stdin;
	}
	else
	{
		if((fp=fopen(argv[1],"r"))==NULL)
		{
			printf("���ļ�ʧ�ܣ�\n");
			fp=stdin;
		}
	}
	printf("OK!\n"); 
	while(fscanf(fp,"%f",&ch)==1)
	{
		sum+=ch;
		n++;
	}
	fclose(fp);
	printf("ƽ��ֵΪ��%.2f",sum/n);
	getch();
	return 0;
}






