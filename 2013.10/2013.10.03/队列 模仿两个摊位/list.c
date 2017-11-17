#include<stdio.h>
#include<stdlib.h>
#include "queue.h"

static void CopyToNode(Item item1,Node * pn);
static void CopyToItem(Node * pn,Item * pi);

void Initialize_Queue(Queue * queue)
{
	queue->front=queue->rear=NULL;
	queue->items=0;
}

bool Queue_IsEmpty(const Queue * queue)
{
	return queue->items==0;
}

bool Queue_IsFull(const Queue * queue)
{
	return queue->items==MAXQUEUE;
}

int Queue_Item_Count(const Queue * queue)
{
	return queue->items;
}

bool Queue_Add_Item(Item item,Queue * queue)
{
	if(Queue_IsFull(queue))
		return false;
	Node * pnew;
	pnew=(Node *)malloc(sizeof(Node));
	if(pnew==NULL)
	{
		fprintf(stderr,"no memory!\n");
		exit(EXIT_FAILURE);
	}
	CopyToNode(item,pnew);
	pnew->next==NULL;
	if(Queue_IsEmpty(queue))
		queue->front=pnew;
	else
		queue->rear->next=pnew;
	queue->rear=pnew;
	queue->items++;
	return true;
}

bool Queue_Detele_Item(Item * pitem,Queue * queue)
{
	Node * pt;
	if(Queue_IsEmpty(queue))
	{
		fprintf(stderr,"no data");
		return false;
	}
	CopyToItem(queue->front,pitem);
	pt=queue->front;
	queue->front=queue->front->next;
	free(pt);
	queue->items--;
	if(queue->items==0)
		queue->rear=NULL;
	return true;
}

void CopyToNode(Item item,Node * pn)
{
	pn->item=item;
}

void Queue_Empty(Queue * queue)
{
	Item perv;
	while(!Queue_IsEmpty(queue))
		Queue_Detele_Item(&perv,queue);
}

void CopyToItem(Node * pn,Item * pi)
{
	*pi=pn->item;
}


