#include<stdio.h>
#include<conio.h>
#include<string.h>
double function(float num1,float num2);
int main(void)
{     
  float num1,num2;
  int a,b,c;
  while(scanf("%f,%f",&num1,&num2)==2)
  {
       printf("%f\n",function(num1,num2));
}
    
getch();
return 0;
}
double function(float num1,float num2)
{
       double a;
       a=(num1-num2)/(num1*num2);
       return a;
}
