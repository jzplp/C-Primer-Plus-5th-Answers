#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc,char * argv[])
{
	double back,sum;
	int index;
	if(argc!=3)
	{
		printf("off!!!");
		getch();
		return 0;
	}
	else
	{
		back=atof(argv[1]);
		index=atoi(argv[2]);
		sum=pow(back,index);
		printf("%lf\n",pow);
	}
	getch();
	return 0;
}





