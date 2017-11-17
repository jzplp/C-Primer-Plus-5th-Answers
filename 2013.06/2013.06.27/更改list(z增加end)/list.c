#include<stdio.h>
#include<stdlib.h>
#include "list.h"

static void CopyToNode(Item item,Node * pnode);

void Initialize_List(List * list)
{
	list->head=NULL;
	list->end=NULL;
}

bool List_IsEmpty(const List * list)
{
	if(list->head==NULL)
		return true;
	return false;
}

bool List_IsFull(const List * list)
{
	Node * node=(Node *)malloc(sizeof(Node));
	if(node==NULL)
		return true;
	else
		free(node);
	return false;
}

int List_Item_Count(const List * list)
{
	Node * perv;
	int count=0;
	perv=list->head;
	while(perv!=NULL)
	{
		count++;
		perv=perv->next;
	}
	return count;
}

bool List_Add_Item(Item item,List * list)
{
	Node * node=(Node *)malloc(sizeof(Node));
	Node * perv;
	
    //printf("rghyu4qjhu4q6tj\n");
	
    if(node==NULL)
		return false;
    
    //printf("rghyu4qjhu4q6tj\n");
	
    node->next=NULL;
	CopyToNode(item,node);
	
    //printf("rghyu4qjhu4q6tj\n");
	
	if(list->head==NULL)
	{
                       //printf("rghyu4qjhu4q6tj\n");
		list->head=node;
		list->end=node;
		//printf("rghyu4qjhu4q6tj\n");
	}
	else
	{
		(list->end)->next=node;
		list->end=node;
	}
	return true;
}

void CopyToNode(Item item,Node * node)
{
	node->item=item;
}

void List_Empty(List * list)
{
	Node * node,* perv;
	node=list->head;
	while(node!=NULL)
	{
		perv=node->next;
		free(node);
		node=perv;
	}
	list->end=NULL;
}

void Traverse(const List * list,void (* pfun)(Item item))
{
	Node * node;
	node=list->head;
	while(node!=NULL)
	{
		(*pfun)(node->item);
		node=node->next;
	}
}




	









