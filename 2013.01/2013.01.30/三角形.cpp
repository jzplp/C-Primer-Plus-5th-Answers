#include<stdio.h>
#include<conio.h>
#define D 10
int main(void)
{     
      char a;
      int b,c,e,f,g;
      for(b=0,e=D,c=e;b<D;b++,e--,c=e)
      {
         a='A';
         while(--c>0)
                   printf(" ");
       for(f=0;f<=b;f++,a++)
                 printf("%c",a);
                  a='A';
       for(a+=b-1,g=1;g<=b;a--,g++)
       printf("%c",a);
       printf("\n");
       }
getch();
return 0;
}
