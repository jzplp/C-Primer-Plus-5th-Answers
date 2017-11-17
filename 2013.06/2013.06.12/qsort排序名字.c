#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define NUM 40
struct names
{
	char first[NUM];
	char last[NUM];
};
void showarray(const struct names * ar,int n);
int mycomp(const void * p1,const void * p2);
int main()
{
	struct names vals[7]=
	{
		{"eagh","erhbgra"},
		{"rgerash","ghwestj"},
		{"erahj","egherwh"},
		{"jyyu","jifyu"},
		{"rtwjo","ifdt"},
		{"rthtri","wujt"},
		{"erahj","ewhtteyh"}
	};
	puts("show list:");
	showarray(vals,7);
	qsort(vals,7,sizeof(struct names),mycomp);
	puts("\nshow number list:");
	showarray(vals,7);
	getch();
	return 0;
}
void showarray(const struct names * ar,int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%s %s\n",(ar+i)->first,(ar+i)->last);
}
int mycomp(const void * p1,const void * p2)
{
	struct names * p11=(struct names *)p1;
	struct names * p22=(struct names *)p2;
	int a=0;
	if((a=strcmp(p11->first,p22->first))==0)
		a=strcmp(p11->last,p22->last);
	return a;
}

		


