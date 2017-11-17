#include<stdio.h>
#include<conio.h>
#define PREINSTALL 100
int main (void)
{
    float chukie;
    int a;
    for(a=1,chukie=100;chukie>0;a++)
    {
    chukie*=1.08;
    chukie-=10;
    printf("%d   %lf\n",a,chukie);
    }
   
    getch(); 
    return 0; 
}
