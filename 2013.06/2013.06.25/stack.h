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

//��������ʼ��һ��ջ
//֮ǰ��һ��δ��ʼ����ջ
//֮��ջ����ʼ��
void Initialize_Stack(Stack * stack);

//������ȷ��ջ�Ƿ�Ϊ��
//֮ǰ��stackָ��һ��ջ
//֮����Ϊ���򷵻�ture ��Ϊ���򷵻�false
bool Stack_IsEmpty(const Stack * stack);

//������ȷ��ջ�Ƿ�����
//֮ǰ��stcakָ��һ��ջ
//֮����Ϊ���򷵻�ture����Ϊ���򷵻�false
bool Stack_IsFull(const Stack * stack);

//������ȷ����������Ŀ�ĸ���
//֮ǰ��stackָ��һ��ջ
//֮�󣺷���ջ����Ŀ�еĸ���
int Stack_Item_Count(const Stack * stack);

//��������ջ�����һ����Ŀ
//֮ǰ��stackָ��һ��ջ
//֮������Ŀδ������stack������һ����Ŀitem������true��
//����Ŀ�������򷵻�false
bool Stack_Add_Item(Item item,Stack * stack);

//��������ջ��ɾ��һ����Ŀ,����ɾ������Ŀ���Ƶ�pitem
//֮ǰ��stackָ��һ��ջ
//֮�����ɹ�ɾ����һ����Ŀ���򷵻�true
//��ɾ����ջΪ�����ʼ��ջ
//��ջ��ʼΪ�գ��򷵻�false
bool Stack_Delete_Item(Item * pitem,Stack * stack);

//���������ջ
//֮ǰ��stackָ��һ���Ѿ���ʼ����ջ
//֮��ջ�����
void Stack_Empty(Stack * stack);
#endif




