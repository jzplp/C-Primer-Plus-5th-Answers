#include<stdio.h>
#include<conio.h>
int main(void)
{     
    int upper,lower;
    int loop1,loop2;
    while(scanf("%d,%d",&upper,&lower)==2)
    {
         for(;upper<=lower;upper++)
         printf("%5d   %5d   %5d\n",upper,upper*upper,upper*upper*upper);
}
    
    
    
getch();
return 0;
}
