#include<stdio.h>
#include<conio.h>
#define DE 10
int main(void)
{     
int a,b,c;
for (a=1;a<=DE;a++)
{
    for(b=1;b<=a;b++)
    printf("%d",b);
    printf("\n");
}    
getch();
return 0;
}
