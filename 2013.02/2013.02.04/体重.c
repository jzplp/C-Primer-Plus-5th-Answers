#include<stdio.h>
#include<conio.h>
int main ()
{
	int weight,height;
	printf(" ‰»Îweight∫Õheight\n"); 
	while(scanf("%d,%d",&weight,&height)==2)
	{
     if(weight<100&&height>64)
	{
		if(height>=72)
			printf("very tall\n");
                else
			printf("tall\n");
	}
	else if(weight>=300&&height<=48)
		printf("quite short\n");
        else
		printf("ideal\n");
}
getch();
return 0;
}

