#include<stdio.h>
#include<conio.h>
#define MIN 60
int main()
{
    int input,minute,second,middle;
    minute=second=middle=0;
    input=1;
     printf("������������");
     scanf("%d",&input);
    while(input>0)
    {
                  
                   minute=input/MIN;
                   second=input%60;
                   printf("%d��Ϊ%d��%d�롣",input,minute,second);
                   printf("\n������������");
                   scanf("%d",&input);
    }
    getch();
    return 0;
}
                    
                   
               


