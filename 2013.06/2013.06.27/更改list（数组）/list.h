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

//��������ʼ��һ��list
//֮ǰ��һ��δ��ʼ����list
//֮��list����ʼ��
void Initialize_List(List * list);

//������ȷ��list�Ƿ�Ϊ��
//֮ǰ��listָ��һ��list
//֮����Ϊ���򷵻�ture ��Ϊ���򷵻�false
bool List_IsEmpty(const List * list);

//������ȷ��list�Ƿ�����
//֮ǰ��listָ��һ��list
//֮����Ϊ���򷵻�ture����Ϊ���򷵻�false
bool List_IsFull(const List * list);

//������ȷ����������Ŀ�ĸ���
//֮ǰ��listָ��һ��list
//֮�󣺷���list����Ŀ�еĸ���
int List_Item_Count(const List * list);

//��������list�����һ����Ŀ
//֮ǰ��listָ��һ��list
//֮������Ŀδ������list������һ����Ŀitem������true��
//����Ŀ�������򷵻�false
bool List_Add_Item(Item item,List * list);

//��������list��ɾ��һ����Ŀ,����ɾ������Ŀ���Ƶ�pitem
//֮ǰ��listָ��һ��list
//֮�����ɹ�ɾ����һ����Ŀ���򷵻�true
//��ɾ����listΪ�����ʼ��list
//��list��ʼΪ�գ��򷵻�false
bool List_Detele_Item(Item * pitem,List * list);

//���������list
//֮ǰ��listָ��һ���Ѿ���ʼ����list
//֮��list�����
void List_Empty(List * list);

//��������һ������������list��ÿ����Ŀ
//֮ǰ��listָ��һ���Ѿ���ʼ�����б�
//pfunָ��һ��Ҫ���õĺ���
//֮��pfun������ÿ����Ŀһ��
void Traverse(const List * list,void (* pfun) (Item item));
#endif





