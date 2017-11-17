#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	int ch;
	FILE * fin,*fout;
	if(argc<3)
		exit(EXIT_FAILURE);
	if((fin=fopen(argv[1],"rb"))==NULL)
		exit(EXIT_FAILURE);
	if((fout=fopen(argv[2],"wb"))==NULL)
		exit(EXIT_FAILURE);
	while((ch=getc(fin))!=EOF)
		putc(ch,fout);
	fclose(fin);
	fclose(fout);
	printf("END\n");
	getch();
	return 0;
}









		
