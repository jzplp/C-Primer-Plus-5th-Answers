#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(int argc,char *argv[])
{
	int n1,n2;
	char * antitone[argc-1];
	for(n1=0,n2=argc-1;n1<argc;n1++,n2--)
		antitone[n1]=argv[n2];
	for(n1=0;n1<argc-1;n1++)
		puts(antitone[n1]);
	getch();
    return 0; 
}


