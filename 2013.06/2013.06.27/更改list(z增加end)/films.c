#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include "list.h"

void showmovies(Item item);

int main()
{
	List movies;
	Item temp;

	//初始化
	Initialize_List(&movies);
	if(List_IsFull(&movies))
	{
		fprintf(stderr,"No memory !\n");
		exit(EXIT_FAILURE);
	}

	//收集并存储
	puts("enter first movies title :");
	while(gets(temp.title)!=NULL&&temp.title[0]!='\0')
	{
		puts("enter the rating <0~10>");
		scanf("%d",&temp.rating);
		
		//printf("%d \n",temp.rating);
		
        while(getchar()!='\n')
			continue;
		if(List_Add_Item(temp,&movies)==false)
		{
			fprintf(stderr,"problem momory");
			break;
		}
		//printf("%d \n",temp.rating);
		
        if(List_IsFull(&movies))
		{
			puts("list is full");
			break;
		}
		puts("enter next movie title (empty line to stop)");
	}
	if(List_IsEmpty(&movies))
		printf("no data\n");
	else
	{
		printf("here is the movie list\n");
		Traverse(&movies,showmovies);
	}
	printf("count :    %d \n",List_Item_Count(&movies));

	List_Empty(&movies);
	printf("bye\n");
	getch();
	return 0;
}
void showmovies(Item item)
{
	printf("movie :%s  rating : %d \n",item.title,item.rating);
}


