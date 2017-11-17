#include<stdio.h>
#include<conio.h>
int main ()
{
    int input,a,b;
    int array[10];
    while(scanf("%d",&input)==1)
    {
                                for(a=0;input>0;a++)//除数算法部分 
                                {
                                                    array[a]=input%2;
                                                    input/=2;
                                }
                                a-=1;
                                do   //输出部分 
                                printf("%d ",array[a]);
                                         while(a-->0);
                                printf("\n");
    }
    getch();
    return 0;
}
