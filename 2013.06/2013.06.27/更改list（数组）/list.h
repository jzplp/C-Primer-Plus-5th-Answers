#ifndef _STACK_H_
#define _STACK_H_
#include<stdbool.h>
#define TSIZE 45
#define MAXSIZE 100
struct film
{
	char title[TSIZE];
	int rating;
};
typedef struct film Item;
typedef struct list
{
	Item entries[MAXSIZE];
	int items;
} List;

//操作：初始化一个list
//之前：一个未初始化的list
//之后：list被初始化
void Initialize_List(List * list);

//操作：确定list是否为空
//之前：list指向一个list
//之后：若为空则返回ture 不为空则返回false
bool List_IsEmpty(const List * list);

//操作：确定list是否已满
//之前：list指向一个list
//之后：若为满则返回ture，不为满则返回false
bool List_IsFull(const List * list);

//操作：确定队列中项目的个数
//之前：list指向一个list
//之后：返回list中项目中的个数
int List_Item_Count(const List * list);

//操作：向list中添加一个项目
//之前：list指向一个list
//之后：若项目未满，则list增加了一个项目item，返回true，
//若项目已满，则返回false
bool List_Add_Item(Item item,List * list);

//操作：从list中删除一个项目,并把删除的项目复制到pitem
//之前：list指向一个list
//之后：若成功删除了一个项目，则返回true
//若删除后list为空则初始化list
//若list开始为空，则返回false
bool List_Detele_Item(Item * pitem,List * list);

//操作：清空list
//之前：list指向一个已经初始化的list
//之后：list被清空
void List_Empty(List * list);

//操作：把一个函数作用于list中每个项目
//之前：list指向一个已经初始化的列表
//pfun指向一个要作用的函数
//之后：pfun作用于每个项目一次
void Traverse(const List * list,void (* pfun) (Item item));
#endif





