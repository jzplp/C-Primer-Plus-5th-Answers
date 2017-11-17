#include<stdio.h>
#include<conio.h>
int main (void)
{
    int input1,input2,a,b,c=0;
    scanf("%d,%d",&input1,&input2);
    while(input1<input2)
    {
                         for(a=input1,b=input2;a<=b;a++)
                         c+=a*a;
    printf("%d   %d    %d\n",input1,input2,c);
    scanf("%d,%d",&input1,&input2);
}
getch();
return 0;
}
