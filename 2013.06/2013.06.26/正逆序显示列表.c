#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TSIZE 45
struct film
{
	char title[TSIZE];
	int rating;
	struct film * next;
};
void reversed_list(struct film * head);
int main()
{
	struct film * head=NULL;
	struct film * prev,* current;
	char input[TSIZE];
	int order;

	puts("enter the first title");
	while(gets(input)!=NULL&&input[0]!='\0')
	{
		current=(struct film *)malloc(sizeof(struct film));
		if(head==NULL)
			head=current;
		else
			prev->next=current;
		current->next=NULL;
		strcpy(current->title,input);
		puts("enter the rating<0~10>");
		scanf("%d",&(current->rating));
		while(getchar()!='\n')
			continue;
		puts("enter next movie title ");
		prev=current;
	}
	if(head==NULL)
		printf("no data entered\n");
	else
	{
		printf("input 1 positive 2 reversed\n");
		scanf("%d",&order);
		while(order>2||order<0)
		{
			printf("input again\n");
			scanf("%d",&order);
		}
		if(order==1)
		{
			printf("here is the movie positive list\n");
			current=head;
			while(current!=NULL)
			{
				printf("movies:%s rating:%d\n",current->title,current->rating);
				current=current->next;
			}
		}
		else if(order==2)
		{
			reversed_list(head);
		}
		current=head;
		while(current!=NULL)
		{
			prev=current->next;
			free(current);
			current=prev;
		}
	}
	printf("bye");
	getch();
	return 0;
}
void reversed_list(struct film * current)
{
	if(current->next!=NULL)
		reversed_list(current->next);
	printf("movies:%s rating:%d\n",current->title,current->rating);
}














