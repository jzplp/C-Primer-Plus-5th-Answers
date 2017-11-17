#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define LONG 10 
int main()
{
	char file[80];
	int a[LONG][LONG];
	FILE * fp;
	int n1,n2;
	int ch;
	printf("input the file:");
	gets(file);
	if((fp=fopen(file,"r"))==NULL)
		exit(EXIT_FAILURE);
	for(n1=0;n1<LONG;n1++)
	{
		for(n2=0;n2<LONG;n2++)
		{
			while((ch=getc(fp))=='\n'||ch==' ')
				continue;
				switch(ch)
			       {
				case '0':ch=0;
				       break;
				case '1':ch=1;
				       break;
				case '2':ch=2;
				       break;
				case '3':ch=3;
				       break;
				case '4':ch=4;
				       break;
				case '5':ch=5;
				       break;
				case '6':ch=6;
				       break;
				case '7':ch=7;
				       break;
				case '8':ch=8;
				       break;
				case '9':ch=9;
				       break;
			       }
			a[n1][n2]=ch;
		}
	}
	if(fclose(fp)==EOF)
		exit(EXIT_FAILURE);
	for(n1=0;n1<LONG;n1++)
	{
		for(n2=0;n2<LONG;n2++)
		{
			if(n1==0)
			{
				if(n2==0)
				{
					if((a[n1][n2]-a[n1][n2+1])>1||(a[n1][n2]-a[n1+1][n2])>1)
						a[n1][n2]=(a[n1][n2+1]+a[n1+1][n2])/2;
				}
				else if(n2==9)
				{
					if((a[n1][n2]-a[n1][n2-1])>1||(a[n1][n2]-a[n1+1][n2])>1)
						a[n1][n2]=(a[n1][n2-1]+a[n1+1][n2])/2;
				}
				else
					if((a[n1][n2]-a[n1][n2-1])>1||(a[n1][n2]-a[n1][n2+1])>1||(a[n1][n2]-a[n1+1][n2])>1)
						a[n1][n2]=(a[n1][n2-1]+a[n1][n2+1]+a[n1+1][n2])/3;
			}
			else if(n1==9)
			{
				if(n2==0)
				{
					if((a[n1][n2]-a[n1][n2+1])>1||(a[n1][n2]-a[n1-1][n2])>1)
						a[n1][n2]=(a[n1][n2+1]+a[n1-1][n2])/2;
				}
				else if(n2==9)
				{
					if((a[n1][n2]-a[n1][n1-1])>1||(a[n1][n2]-a[n1-1][n2])>1)
						a[n1][n2]=(a[n1][n2-1]+a[n1-1][n2])/2;
				}
				else
					if((a[n1][n2]-a[n1][n1-1])>1||a[n1][n2]-a[n1][n2+1]>0||(a[n1][n2]-a[n1-1][n2])>1)
						a[n1][n2]=(a[n1][n2-1]+a[n1][n2+1]+a[n1-1][n2])/3;
			}
			else if(n2==0)
			{
				if((a[n1][n2]-a[n1-1][n2])>1||(a[n1][n2]-a[n1+1][n2])>1||(a[n1][n2]-a[n1][n2+1])>1)
					a[n1][n2]=(a[n1-1][n2]+a[n1+1][n2]+a[n1][n2+1])/3;
			}
			else if(n2==9)
			{
				if((a[n1][n2]-a[n1-1][n2])>1||(a[n1][n2]-a[n1+1][n2])>1||(a[n1][n2]-a[n1][n2-1])>1)
					a[n1][n2]=(a[n1-1][n2]+a[n1+1][n2]+a[n1][n2-1])/3;
			}
			else
				if((a[n1][n2]-a[n1-1][n2])>1||(a[n1][n2]-a[n1+1][n2])>1||(a[n1][n2]-a[n1][n2+1])>1||(a[n1][n2]-a[n1][n2-1])>1)
					a[n1][n2]=(a[n1-1][n2]+a[n1+1][n2]+a[n1][n2+1]+a[n1][n2-1])/4;
		}
	}	


	if((fp=fopen("2.txt","w"))==NULL)
		exit(EXIT_FAILURE);
	for(n1=0;n1<LONG;n1++)
	{
		for(n2=0;n2<LONG;n2++)
		{
			putc(a[n1][n2]+64,fp);
			putc(' ',fp);
		}
		putc('\n',fp);
	}
	fclose(fp);
	printf("ok");
	getch();
	return 0;
}


	

