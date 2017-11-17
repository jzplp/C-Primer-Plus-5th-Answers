#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 80
int main()
{
	FILE * fp;
	int n;
	char words[MAX];
	if((fp=fopen("words.txt","a+"))==NULL)
	{
		fprintf(stdout,"can`t open \"word\" file.\n");
		exit(EXIT_FAILURE);
	}
	puts("enter words");
	while(gets(words)!=NULL&&words[0]!='\0')
		fprintf(fp,"%s ",words);
	puts("FILE con\n");
	rewind(fp);
	for(n=1;fscanf(fp,"%s",words)==1;n++)
	{
		printf("%d ",n);
		puts(words);
	}
	if(fclose(fp)!=0)
		fprintf(stderr,"error\n");
	getch();
	return 0;
}

	


