#include<stdio.h>
#include"stack.h"
#include<stdbool.h>
#include<stdlib.h>

static void CopyToNode(Item item1,Node * pn);
static void CopyToItem(Node * pn,Item * pi);


void Initialize_Stack(Stack * stack)
{
	stack->start=stack->end=NULL;
	stack->count=0;
}

bool Stack_IsEmpty(const Stack * stack)
{
	if(stack->count==0)
		return true;
	return false;
}

bool Stack_IsFull(const Stack * stack)
{
	if(stack->count>=MAXSTACK)
		return true;
	return false;
}
int Stack_Item_Count(const Stack * stack)
{
	return stack->count;
}

bool Stack_Add_Item(Item item,Stack * stack)
{
	if(Stack_IsFull(stack))
		return false;
	
	Node * temp;
	temp=(Node *)malloc(sizeof(Node));
	if(temp==NULL)
	{
		fprintf(stderr,"no memory!\n");
		exit(EXIT_FAILURE);
	}
	CopyToNode(item,temp);
	temp->next=NULL;

	if(Stack_IsEmpty(stack))
	{
		stack->count=1;
		stack->start=stack->end=temp;
	}
	else
	{
		temp->next=stack->start;
		stack->start=temp;
		stack->count++;
	}
	return true;
}

bool Stack_Delete_Item(Item * pitem,Stack * stack)
{
	Node * pnode;
	if(Stack_IsEmpty(stack))
		return false;
	CopyToItem(stack->start,pitem);
	if(stack->count==1)
	{
		free(stack->start);
		stack->start=stack->end=NULL;
		stack->count=0;
	}
	else
	{
		pnode=stack->start;
		stack->start=pnode->next;
		stack->count--;
		free(pnode);
	}
	return true;
}

void Stack_Empty(Stack * stack)
{
	Item * pitem;
	while(!Stack_IsEmpty(stack))
	{
		Stack_Delete_Item(pitem,stack);
	}
}

static void CopyToNode(Item item1,Node * pn)
{
	pn->item=item1;
}
static void CopyToItem(Node * pn,Item * pi)
{
	*pi=pn->item;
}







