#include<stdio.h>
#include<conio.h>
#define N 5
struct title
{
	char ming[20];
	char among[20];
	char surname[20];
};
struct social
{
	int number;
	struct title name;
};
void output_indicator(struct social * people,int n);
void output_struct(struct social person);
int main()
{
 	int i;
	struct social people[N]=
	{
		{145687,"fhjkse","wefaj","k"},
		{4863,"ei","e","af"},
		{463,"jrj","","jtd"},
		{416387,"gvk","gre","ehag"},
		{4387,"byikf","giykf","cujt"}
	};
	printf("one:\n");	
	output_indicator(people,N);
	printf("two:\n");
	for(i=0;i<N;i++)
		output_struct(people[i]);
	getch();
	return 0;
}
void output_indicator(struct social * people,int n)
{
	int i;
	char ch[5];
	for(i=0;i<n;i++)
	{
		sprintf(ch,"");
		if(people[i].name.among[0]!='\0')
		{
			sprintf(ch,"%c.",people[i].name.among[0]);
		}
		printf("%10s , %10s %3s - %10d \n",people[i].name.ming,people[i].name.surname,ch,people[i].number);
	}
}
void output_struct(struct social person)
{
	char ch[5]="";
	if(person.name.among[0]!='\0')
		sprintf(ch,"%c.",person.name.among[0]);
	printf("%10s , %10s %3s - %10d \n",person.name.ming,person.name.surname,ch,person.number);
}





