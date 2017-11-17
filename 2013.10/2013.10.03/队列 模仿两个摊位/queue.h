#ifndef _STACK_H_
#define _STACK_H_
#include<stdbool.h>
#define MAXQUEUE 10
typedef struct item
{
	long arrive;
	int processtime;
} Item;
typedef struct node
{
	Item item;
	struct node * next;

} Node;
typedef struct queue
{
	Node * front;
	Node * rear;
	int items;
} Queue;

//操作：初始化一个queue
//之前：一个未初始化的queue
//之后：queue被初始化
void Initialize_Queue(Queue * queue);

//操作：确定queue是否为空
//之前：queue指向一个queue
//之后：若为空则返回ture 不为空则返回false
bool Queue_IsEmpty(const Queue * queue);

//操作：确定queue是否已满
//之前：queue指向一个queue
//之后：若为满则返回ture，不为满则返回false
bool Queue_IsFull(const Queue * queue);

//操作：确定队列中项目的个数
//之前：queue指向一个queue
//之后：返回queue中项目中的个数
int Queue_Item_Count(const Queue * queue);

//操作：向queue中添加一个项目
//之前：queue指向一个queue
//之后：若项目未满，则queue增加了一个项目item，返回true，
//若项目已满，则返回false
bool Queue_Add_Item(Item item,Queue * queue);

//操作：从queue中删除一个项目,并把删除的项目复制到pitem
//之前：queue指向一个queue
//之后：若成功删除了一个项目，则返回true
//若删除后queue为空则初始化queue
//若queue开始为空，则返回false
bool Queue_Detele_Item(Item * pitem,Queue * queue);

//操作：清空queue
//之前：queue指向一个已经初始化的queue
//之后：queue被清空
void Queue_Empty(Queue * queue);

#endif




