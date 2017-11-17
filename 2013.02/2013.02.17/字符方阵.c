#include<stdio.h>
void chline(char ch,int i,int j);
int main()
{
	char ch;
	int i,j;
	while(scanf("%d %d",&i,&j)==2)
	{
		while(getchar()!='\n')
			continue;
		scanf("%c",&ch); 
		chline(ch,i,j);
			
	}
	return 0;
}
void chline(char ch,int i,int j)
{
	int count1,count2;
	for(count1=0;count1<i;count1++)
	{
		for(count2=0;count2<j;count2++)
		{
			printf("%c",ch);
		}
		printf("\n");
	}
}
/*while(getchar()!='\n')
			continue;
		ch=getchar();
		chline(ch,i,j);
			while(getchar()!='\n')
			continue;
            
            或者这样   */


