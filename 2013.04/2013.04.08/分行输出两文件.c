#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define LONG 100
int main()
{
	FILE *f1,*f2;
	char fone[LONG],ftwo[LONG],a[LONG],b[LONG];
	int n=0;
	printf("input file 1:\n");
	gets(fone);
	if((f1=fopen(fone,"r"))==NULL)
		exit(EXIT_FAILURE);
	printf("input file 2:\n");
	gets(ftwo);
	if((f2=fopen(ftwo,"r"))==NULL)
		exit(EXIT_FAILURE);
	while((fgets(a,LONG,f1)!=NULL&&a[0]!='\0')&&(fgets(b,LONG,f2)!=NULL&&b[0]!='\0'))
	{
            for(n=1;a[n]!='\0';n++)
	    {
		    if(a[n]=='\n')
			    a[n]=' ';
		    n++;
	    }
            fputs(a,stdout); 
			fputs(b,stdout);
	}
	putchar('\n');
	if(feof(f1)==0)
	{
                   while(fgets(a,LONG,f1)!=NULL&&a[0]!='\0')
                       fputs(a,stdout);
                       
    }
    
    else
    {
        while(fgets(b,LONG,f2)!=NULL&&b[0]!='\0')
            fputs(b,stdout);
    }
    
        printf("OK\n");
	fclose(f1);
	fclose(f2);
	getch();
	return 0;
}


