#include<stdio.h>
#include<conio.h>
#define MIN 60
int main()
{
    int input,minute,second,middle;
    minute=second=middle=0;
    input=1;
     printf("请输入秒数：");
     scanf("%d",&input);
    while(input>0)
    {
                  
                   minute=input/MIN;
                   second=input%60;
                   printf("%d秒为%d分%d秒。",input,minute,second);
                   printf("\n请输入秒数：");
                   scanf("%d",&input);
    }
    getch();
    return 0;
}
                    
                   
               


