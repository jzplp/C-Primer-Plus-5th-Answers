#include<stdio.h> 
#include<conio.h> 
#define ABC 30
char * bak (char * input,int n);
int main()
{
char wu[ABC];
gets(wu);
printf("ָ��Ϊ%p,֮����ַ�Ϊ%s",bak(wu,ABC),bak(wu,ABC));
getch();
return 0;
}
char * bak ( char * input,int n)
{
int a;
for(a=0;a<n;a++,input++)
{
if(*input==' ')
return input++;
}
return 0;
}
