#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(void)
{     
  float num1,num2;
  int a,b,c;
  while(scanf("%f,%f",&num1,&num2)==2)
  {
       printf("%f\n",(num1-num2)/(num1*num2));
}
    
getch();
return 0;
}
