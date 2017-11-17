#include<stdio.h>
#include<conio.h>
#define MAXTITL 40
#define MAXAUTL 40
#define MAXBKS 100
struct book
{
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};
void output_title (struct book * books[],int n);
void output_value (struct book * books[],int n);
int main()
{
	struct book library[MAXBKS];
	int count=0;
	int i;

	printf("enter title:\n");
	while(count<MAXBKS&&gets(library[count].title)!=NULL&&library[count].title[0]!='\0')
	{
		printf("enter author:\n");
		gets(library[count].author);
		printf("enter value\n");
		scanf("%f",&library[count++].value);
		while(getchar()!='\n')
			continue;
		if(count<MAXBKS)
			printf("next, enter the title\n");
	}
	if(count>0)
	{
		struct book *pk[count];
		for(i=0;i<count;i++)
			pk[i]=&library[i];
		printf("\nfirst :  order output\n");
		for(i=0;i<count;i++)
		{
			printf("%d . title %s  author %s  value %f\n",i+1,library[i].title,library[i].author,library[i].value);
		}
		printf("\nsecond : title order output\n");
		output_title(pk,count);
		for(i=0;i<count;i++)
			pk[i]=&library[i];
		printf("\nthird : value order output\n");
		output_value(pk,count);

	}
	else
		printf("NO BOOK?......\n");
	getch();
	return 0;
}
void output_title(struct book * books[],int n)
{
	struct book * pr;
	int i1,i2;
	for(i1=0;i1<n;i1++)
	{
		for(i2=i1;i2<n;i2++)
		{
			if(strcmp(books[i1]->title,books[i2]->title)>0)
			{
				pr=books[i1];
			    books[i1]=books[i2];
				books[i2]=pr;
			}
		}
	}

	for(i1=0;i1<n;i1++)
		printf("%d .title %s author %s value %f\n",i1+1,books[i1]->title,books[i1]->author,books[i1]->value);
}
void output_value (struct book * books[],int n)
{
	struct book* pr;
	int i1,i2;
	for(i1=0;i1<n;i1++)
	{
		for(i2=i1;i2<n;i2++)
		{
			if(books[i1]->value>books[i2]->value)
			{
				pr=books[i1];
				books[i1]=books[i2];
				books[i2]=pr;
			}
		}
	}
	for(i1=0;i1<n;i1++)
		printf("%d .title %s author %s value %f\n",i1+1,books[i1]->title,books[i1]->author,books[i1]->value);
}





