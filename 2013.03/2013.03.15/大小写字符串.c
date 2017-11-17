#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<conio.h>
#define ANSWER "GRANT"
#define MAX 40
void shibie(char *haha,int a);
int main(void)
{
char try[MAX];
puts("who 111224557");
gets(try);
shibie(try,MAX);
while(strcmp(try,ANSWER)!=0)
{
puts("NO,EGQWVFU");
gets(try);
shibie(try,MAX);
}
puts("OK~~~~~~~~~~~");
getch();
return 0;
}
void shibie(char *haha,int a)
{
int n;
for(n=0;n<a;n++,haha++)
*haha=toupper(*haha);
}


