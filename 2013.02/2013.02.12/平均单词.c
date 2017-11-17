#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main(void)
{
   char ch1,ch2=' ';
   int little=0,count=0;
   while((ch1=getchar())!=EOF)
   {
       if(isalpha(ch1))
          count++;
          if(isalpha(ch2)==0)
          little++;
          ch2=ch1;
   }
   printf("%f",(float)count/(float)little);
   getch();
   return 0;
}
