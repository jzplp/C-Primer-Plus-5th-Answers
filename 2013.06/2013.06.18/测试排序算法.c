#include<stdio.h>
#include<conio.h>
#define LONG 20
void show_array(const int * array,int n);
void list1(int * array,int n);
void list2(int * array,int n);
int main()
{
	int array[LONG];
	int i;
	for(i=LONG/2;i>0;i--)
		array[LONG/2-i]=i+3;
	for(i=0;i<LONG/2;i++)
		array[LONG/2+i]=i*3;
		array[3]=520;
		array[1]=630;
	show_array(array,LONG);
	list2(array,LONG);
	putchar('\n');
	show_array(array,LONG);
	getch();
	return 0;
}
void show_array(const int * array,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%6d ",*(array+i));
		if((i+1)%10==0&&i!=0)
			putchar('\n');
	}
}
void list1(int * array,int n)
{
	int i1,i2,among,flag;
	for(i1=0;i1<n;i1++)
	{
		among=i1;
		for(i2=i1+1;i2<n;i2++)
		{
			if(array[i2]<array[among])
				among=i2;
		}
		if(among!=i1)
		{
			flag=array[i1];
			array[i1]=array[among];
			array[among]=flag;
		}

	}
}
void list2(int * array,int n)
{
	int i1,i2,among,flag=0;
	for(i1=0;i1<n-1;i1++)
	{
		flag=0;
		for(i2=0;i2<n-1-i1;i2++)
		{
			if(array[i2]>array[i2+1])
			{
				flag=1;
				among=array[i2];
				array[i2]=array[i2+1];
				array[i2+1]=among;
			}
		}
		if(flag==0)
			break;
	}
}

			



