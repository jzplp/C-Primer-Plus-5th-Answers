#include<stdio.h>
#include<conio.h>
#define LONG 32
unsigned int spin(unsigned int count,int i); 
void show(unsigned int count ,char * ch);
int main()
{
	int count,i;
	char ch[30];
	printf("input count and i\n");
	while(scanf("%d%d",&count,&i)==2)
	{
		if(i>=LONG)
		{
			printf("%d>=32,input again!\n");
			continue;
		}
		show(spin(count,i),ch);
		printf("%d  %s\n",spin(count,i),ch);
	}
	getch();
	return 0;
}
unsigned int spin(unsigned int count,int i)
{
	int n1,n2,mas=0;
	for(n1=0,n2=LONG-1;n1<i;n1++,n2--)
		 mas=mas|((count>>n2)&1)<<n1;
	count<<=i;
	count|=mas;
	return count;
}
void show(unsigned int count,char * ch)
{
	int i1,i2;
	for(i1=LONG-1,i2=0;i1>=0;i1--,i2++)
		ch[i2]=48+((count>>i1)&1);
	ch[i2]='\0';
}




