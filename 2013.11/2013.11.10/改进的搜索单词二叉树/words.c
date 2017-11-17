#include<stdio.h>
#include<conio.h>
#include"tree.h"
#include<ctype.h>
#include<string.h>

char show_list(void);
void dispose(FILE * fp,Tree * ptree);
void output(Tree * ptree);
void show(Item item);
void find(Tree * ptree);
int main()
{
	char filename[50];
	FILE * fp;
	printf("input file name!\n");
	gets(filename);
	fp=fopen(filename,"r");
	Tree wordss;
	InitializeTree(&wordss);
	dispose(fp,&wordss);
	char choose;
	while((choose=show_list())!='q')
	{
		switch(choose)
		{
			case 'a':Traverse(&wordss,show);
				 break;
			case 'b':find(&wordss);
				 break;
		}
	}
	DeleteAll(&wordss);
	getch();
	return 0;
}
char show_list(void)
{
	char choose;
	printf("\n\na) output words and n \n");
	printf("b) find word and show n\n");
	printf("q) quit\n");
	while((choose=getchar())!=EOF)
	{
		while(getchar()!='\n')
			continue;
		choose=tolower(choose);
		if(strchr("abq",choose)==NULL)
			puts("please enter an a b or q");
		else
			break;
	}
	return choose;
}
void dispose(FILE * fp,Tree * ptree)
{
	Item pi;
	char words[30];
	while(fscanf(fp,"%s",&words)==1)
	{
		strcpy(pi.word,words);
		pi.n=1;
		if(AddItem(&pi,ptree)==false)
		{
			printf("树已经满了\n");
			break;
		}
	}
	fclose(fp);
}
void show(Item item)
{
	printf("words %s |||  n:%d \n",item.word,item.n);
}
void find(Tree * ptree)
{
	Item item;
	int n;
	char wordname[30];
	gets(item.word);
	item.n=1;
	n=InTree(&item,ptree);
	printf("   出现次数为 %d\n",n);
}







