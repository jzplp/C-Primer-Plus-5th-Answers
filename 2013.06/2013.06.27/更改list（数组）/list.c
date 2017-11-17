#include<stdio.h>
#include<stdlib.h>
#include "list.h"

static void CopyToNode(Item * item1,Item item);

void Initialize_List(List * list)
{
	list->items=0;
}

bool List_IsEmpty(const List * list)
{
	if(list->items==0)
		return true;
	return false;
}

bool List_IsFull(const List * list)
{
	if(list->items==MAXSIZE)
		return true;
	else
		return false;
}

int List_Item_Count(const List * list)
{
	return list->items;
}

bool List_Add_Item(Item item,List * list)
{
	
    //printf("rghyu4qjhu4q6tj\n");
	
    if(list->items==MAXSIZE)
		return false;
    
    //printf("rghyu4qjhu4q6tj\n");
	
    CopyToNode(list->entries+list->items,item);
	
    //printf("rghyu4qjhu4q6tj\n");
    
    list->items++;
    return true;
}

void CopyToNode(Item * item1,Item item)
{
	*item1=item;
}

void List_Empty(List * list)
{
	list->items=0;
}

void Traverse(const List * list,void (* pfun)(Item item))
{
	int i;
	for(i=0;i<(list->items);i++)
	{
		(* pfun)(list->entries[i]);
	}
}




	







