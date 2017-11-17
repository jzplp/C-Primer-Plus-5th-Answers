#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(void)
{     
    char array[40];
    int a,b,c;
    while(scanf("%s",array)!=0)
    {
       printf("%s\n",array);
       for(a=strlen(array)-1;a>=0;a--)
          printf("%c",array[a]);
         printf("\n")      ;    
}     
    
getch();
return 0;
}
