#ifndef _STACK_H_
#define _STACK_H_
#include<stdbool.h>
#define MAXSTACK 20
struct ITEM
{
	char ch;
};
typedef struct ITEM Item;
struct node 
{
	Item item;
	struct node * next;
};
typedef struct node Node;
struct stack
{
	Node * start;
	Node * end;
	int count;
};
typedef struct stack Stack;

//操作：初始化一个栈
//之前：一个未初始化的栈
//之后：栈被初始化
void Initialize_Stack(Stack * stack);

//操作：确定栈是否为空
//之前：stack指向一个栈
//之后：若为空则返回ture 不为空则返回false
bool Stack_IsEmpty(const Stack * stack);

//操作：确定栈是否已满
//之前：stcak指向一个栈
//之后：若为满则返回ture，不为满则返回false
bool Stack_IsFull(const Stack * stack);

//操作：确定队列中项目的个数
//之前：stack指向一个栈
//之后：返回栈中项目中的个数
int Stack_Item_Count(const Stack * stack);

//操作：向栈中添加一个项目
//之前：stack指向一个栈
//之后：若项目未满，则stack增加了一个项目item，返回true，
//若项目已满，则返回false
bool Stack_Add_Item(Item item,Stack * stack);

//操作：从栈中删除一个项目,并把删除的项目复制到pitem
//之前：stack指向一个栈
//之后：若成功删除了一个项目，则返回true
//若删除后栈为空则初始化栈
//若栈开始为空，则返回false
bool Stack_Delete_Item(Item * pitem,Stack * stack);

//操作：清空栈
//之前：stack指向一个已经初始化的栈
//之后：栈被清空
void Stack_Empty(Stack * stack);
#endif




