#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<conio.h>
#include"stack.h"

void copyitem(Item * pitem,char ch);
void showitem(Item * pitem);
int main(void)
{
	Stack line;
	Item item1;
	
	Initialize_Stack(&line);
	char ch;
	while((ch=getchar())!='\n')
	{
		if(Stack_IsFull(&line))
		{
			printf("stack is full !\n");
			break;
		}
		copyitem(&item1,ch);
		Stack_Add_Item(item1,&line);
	}
	printf("now we delete and see it!\n");
	while(!Stack_IsEmpty(&line))
	{
		Stack_Delete_Item(&item1,&line);
		showitem(&item1);
	}

	getch();
	return 0;
}

void copyitem(Item * pitem,char ch)
{
	pitem->ch=ch;
}
void showitem(Item * pitem)
{
	putchar(pitem->ch);
}
