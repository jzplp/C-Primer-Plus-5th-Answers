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

//��������ʼ��һ��queue
//֮ǰ��һ��δ��ʼ����queue
//֮��queue����ʼ��
void Initialize_Queue(Queue * queue);

//������ȷ��queue�Ƿ�Ϊ��
//֮ǰ��queueָ��һ��queue
//֮����Ϊ���򷵻�ture ��Ϊ���򷵻�false
bool Queue_IsEmpty(const Queue * queue);

//������ȷ��queue�Ƿ�����
//֮ǰ��queueָ��һ��queue
//֮����Ϊ���򷵻�ture����Ϊ���򷵻�false
bool Queue_IsFull(const Queue * queue);

//������ȷ����������Ŀ�ĸ���
//֮ǰ��queueָ��һ��queue
//֮�󣺷���queue����Ŀ�еĸ���
int Queue_Item_Count(const Queue * queue);

//��������queue�����һ����Ŀ
//֮ǰ��queueָ��һ��queue
//֮������Ŀδ������queue������һ����Ŀitem������true��
//����Ŀ�������򷵻�false
bool Queue_Add_Item(Item item,Queue * queue);

//��������queue��ɾ��һ����Ŀ,����ɾ������Ŀ���Ƶ�pitem
//֮ǰ��queueָ��һ��queue
//֮�����ɹ�ɾ����һ����Ŀ���򷵻�true
//��ɾ����queueΪ�����ʼ��queue
//��queue��ʼΪ�գ��򷵻�false
bool Queue_Detele_Item(Item * pitem,Queue * queue);

//���������queue
//֮ǰ��queueָ��һ���Ѿ���ʼ����queue
//֮��queue�����
void Queue_Empty(Queue * queue);

#endif




