#include<stdio.h>
#include<conio.h>
#define LENGTH 30
char * string_in(char * s1,char *s2);
int main(void)
{
	char s1[LENGTH];
	char s2[LENGTH];
	printf("s1 s2\n");
	while(gets(s1)&&gets(s2))
	{
		printf("%s\n",string_in(s1,s2));
		printf("s1 s2\n");
	}
	getch();
	return 0;
}
char * string_in(char * s1,char * s2)
{
	char * ptr1;
	char * ptr2;
	while(*s1)
	{
		if(*s1==*s2)
		{
			ptr1=s1;
			ptr2=s2;
			while(*ptr2)
			{
				if(*ptr1==*ptr2)
				{
					ptr1++;
					ptr2++;
				}
				else
					break;
			}
			if(*ptr2=='\0')
			{
                           return s1;
            }
		}
		s1++;
		s2;
	}
	return s1;
}





