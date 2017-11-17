#include<stdio.h>
int main()
{
	int a=1;
	char *p=(char *)&a;
	int b=*p;
	printf("%d\n",b);
	return 0;
}

