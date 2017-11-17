#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#define LEN 80
int main()
{
	FILE * fin,*fout;
	char in[LEN],out[LEN],ch;
	int count=0;
	printf("input fin\n");
	gets(in);
	if((fin=fopen(in,"r"))==NULL)
		exit(EXIT_FAILURE);
	strcpy(out,in);
	strcat(out,".red");
	if((fout=fopen(out,"w"))==NULL)
		exit(EXIT_FAILURE);
	while((ch=getc(fin))!=EOF)
	{
		if(count++%3==0)
			putc(ch,fout);
	}
	fclose(fin);
	fclose(fout);
	getch();
	return 0;
}




