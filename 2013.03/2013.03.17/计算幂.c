#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void cloth(double back,int index);
int main(int argc,char *argv[])
{
	double back;
	int index;
        back=argv[1];
	index=argv[2];
	printf("%.2lf  %d",back,index);
		cloth(back,index);
	getch();
	return 0;
}
void cloth(double back,int index)
{
	int count;
    double sum=1;
	for(count=0;count<index;count++)
		sum*=back;
		printf("%.2lf\n",sum);
}

