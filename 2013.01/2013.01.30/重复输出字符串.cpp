#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(void)
{     
    char array[40];
    int b;
    while(scanf("%s",array)!=0)
    {
       for (b=strlen(array);b>0;b--)
       printf("%s\n",array);
    
}    
    
getch();
return 0;
}
