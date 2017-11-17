#include<stdio.h>
#include<conio.h>
#define N 20
int loop(void);
int main()
{
	int n,count;
	for(n=0;n<N;n++)
		count=loop();
	printf("     %d \n",count);
	getch();
	return 0;
}
int loop(void)
{
	static int n=0;
	printf("Ë­ÈÃÄãÑ­»·ÎÒÁË£¿£¿£¿\n");
	n++;
	return n;
}

