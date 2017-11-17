#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
FILE *fp;
fpos_t pos;
char ch[50];
gets(ch);
if((fp=fopen(ch,"r"))==NULL)
exit(EXIT_SUCCESS);
getc(fp);
putchar(ch[0]);
putchar('\n');
if((fgetpos(fp,&pos))!=0)
exit(1);
pos++;
fsetpos(fp,&pos);
fgets(ch,50,fp);
puts(ch);
getch();
return 0;
}
