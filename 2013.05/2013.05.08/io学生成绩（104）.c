#include<stdio.h>
#include<conio.h>
#define CSIZE 4
#define ARRAY 3
struct name
{
        char surname[20];
        char title[20];
};
struct student
{
        struct name name1;
        double grade[ARRAY];
        double average;
};
void input(struct student * pup);
void aver(struct student * pup);
void output(struct student * pup);
void output_aver(struct student * pup);
int main()
{
        struct student pup[CSIZE];
	input(pup);
	aver(pup);
	output(pup);
	output_aver(pup);
	getch();
	return 0;
}
void input(struct student * pup)
{
	char ch[20];
	int n,g;
	double grade;
	for(n=0;n<CSIZE;n++)
	{
		printf("%d input surname:  ",n+1);
		while(gets(ch)==NULL||ch[0]=='\0')
			printf("%d input surname again!   ",n+1);
		sprintf(pup[n].name1.surname,"%s",ch);
		
		printf("%d input title:  ",n+1);
		while(gets(ch)==NULL||ch[0]=='\0')
			printf("%d input title again!   ",n+1);
		sprintf(pup[n].name1.title,"%s",ch);
		
		for(g=0;g<ARRAY;g++)
		{
			printf("%d input grade %d   ",n+1,g+1);
			while(scanf("%lf",&grade)==0)
			{
				while(getchar()!='\n')
					continue;
				printf("%d input grade %d again!   ",n+1,g+1);
			}
			pup[n].grade[g]=grade;
			while(getchar()!='\n')
				continue;
		}
		printf("\n  input next student\n");
	}
}
void aver(struct student * pup)
{
	double sum;
	int n,g;
	for(n=0;n<CSIZE;n++)
	{
		sum=0;
		for(g=0;g<ARRAY;g++)
			sum+=pup[n].grade[g];
		pup[n].average=sum/ARRAY;
	}
}
void output(struct student * pup)
{
	int n,g;
	printf("\n  now output ! \n");
	for(n=0;n<CSIZE;n++)
	{
		printf("%d output \n   surname: %s   title: %s\n",n,pup[n].name1.surname,pup[n].name1.title);
		for(g=0;g<ARRAY;g++)
		{
			printf("grade %d %6.2lf   ",g+1,pup[n].grade[g]);
		}
		putchar('\n');
	}
}
void output_aver(struct student * pup)
{
	int n,g;
	double aver;
	printf("\n   output average\n");
	for(g=0;g<ARRAY;g++)
	{
		aver=0;
		for(n=0;n<CSIZE;n++)
		{
			aver+=pup[n].grade[g];
		}
		aver/=CSIZE;
		printf("%d aver: %6.2lf\n",g+1,aver);
	}
}

			















