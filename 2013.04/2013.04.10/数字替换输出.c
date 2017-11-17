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
				case '0':ch=' ';
				       break;
				case '1':ch='.';
				       break;
				case '2':ch=':';
				       break;
				case '3':ch=';';
				       break;
				case '4':ch='=';
				       break;
				case '5':ch='(';
				       break;
				case '6':ch='!';
				       break;
				case '7':ch='*';
				       break;
				case '8':ch='$';
				       break;
				case '9':ch='#';
				       break;
			       }
			a[n1][n2]=ch;
		}
	}
	if(fclose(fp)==EOF)
		exit(EXIT_FAILURE);
	if((fp=fopen("2.txt","w"))==NULL)
		exit(EXIT_FAILURE);
	for(n1=0;n1<LONG;n1++)
	{
		for(n2=0;n2<LONG;n2++)
		{
			putc(a[n1][n2],fp);
			putc(' ',fp);
		}
		putc('\n',fp);
	}
	fclose(fp);
	printf("ok");
	getch();
	return 0;
}


	


