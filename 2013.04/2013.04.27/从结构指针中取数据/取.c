#include<stdio.h>
#include<conio.h>
#include "sss.h" 
int main()
{
	struct bem deb=
	{
	6,
	{"BB","GG",},
	"AA"
	};
	struct bem * pr=&deb;
	printf("%s %s is a %d-lll %s",pr->title.first,pr->title.last,pr->limbs,pr->type);
	getch();
	return 0;
}


