#include<stdio.h>
#include<conio.h>
#define PREINSTALL 8
int main (void)
{
   double array1[PREINSTALL];
   double array2[PREINSTALL];
   int a£» 
   for(a=0;a<PREINSTALL;a++)
   scanf("%lf",&array1[a]);
   for(a=0;a<PREINSTALL;a++)
   printf("%.2lf ",array1[a]);
   printf("\n");
   for(array2[0]=array1[0],a=1;a<PREINSTALL;a++)
   array2[a]=array2[a-1]+array1[a];
   for(a=0;a<PREINSTALL;a++)
   printf("1.%.2lf  2.%.2lf\n",array1[a],array2[a]);
   
    getch(); 
    return 0; 
}
