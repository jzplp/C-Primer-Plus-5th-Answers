#include<stdio.h>
#include<conio.h>
#include<math.h>
#define LENGTH 100
double add(double );
double cut(double );
void transfrom(double * source,double * target,int length,double (* fp)(double));
int main()
{
	int n,i;
	double (* fp[4])(double)=
    {
           sin,cos,add,cut
    };
	double source[LENGTH];
	double target[LENGTH];
	for(n=0;n<LENGTH;n++)
		source[n]=(double)n;
	for(i=0;i<4;i++)
	{
		transfrom(source,target,LENGTH,fp[i]);
		for(n=1;n<=LENGTH;n++)
		{
			printf("%6.2lf ",target[n-1]);
			if(!(n%10))
				putchar('\n');
		}
		printf("\n\n\n");
	}
	getch();
	return 0;
}
double add(double a)
{
	a+=a;
	return a;
}
double cut(double a)
{
	a-=1;
	return a;
}

void transfrom(double * source,double * target,int length,double (* fp)(double ))
{
	int n;
	for(n=0;n<length;n++)
	{
		target[n]=fp(source[n]);
	}
}





