#include<stdio.h>
#include<conio.h>
int main(void)
{
    char a='*';
    int b,c,d,e,f,g,h,i,j;
    for(b=0;b<=3;b++)
    {
                    for(c=3;c>b;c--)
                    printf(" ");
                    d=b+1;
                    e=2*d-1;
                    for(f=0;f<e;f++)
                    printf("%c",a);
                    printf("\n");
    } 
    for(g=1;g<=3;g++)
    {
                    for(h=0;h<g;h++)
                    printf(" ");
                    i=7-2*g;
                    for(j=0;j<i;j++)
                    printf("%c",a);
                    printf("\n");
}                     
    getch();
    return 0;
}
