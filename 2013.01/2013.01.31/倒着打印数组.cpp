#include<stdio.h>
#include<conio.h>
#define PREINSTALL 10
int main (void)
{
   char array[PREINSTALL];
   int a,b,c,d;
   for(a=0;a<PREINSTALL;a++)
   scanf("%c",&array[a]);
   for(a=0;a<PREINSTALL;a++)
   printf("%c",array[a]);
   printf("\n");
   for(a=PREINSTALL-1;a>=0;a--)
   printf("%c",array[a]);
    getch(); 
    return 0; 
}
