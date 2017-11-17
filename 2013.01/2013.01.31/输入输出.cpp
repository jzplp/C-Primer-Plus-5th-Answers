#include<stdio.h>
#include<conio.h>
#define PR 8 
int main ()
{
    int array[PR];
    int initial=2,a;
    for(array[0]=2,a=1;a<=PR;a++)
    array[a]=array[a-1]*initial;
    a=0;
    do
    printf("%d\n",array[a]);
    while(++a<PR);
    getch(); 
    return 0; 
}
