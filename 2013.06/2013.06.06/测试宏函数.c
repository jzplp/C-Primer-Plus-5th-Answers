#include<stdio.h>
#include<conio.h>
#define PRINT(X,Y) printf(#X " is %d and " #Y" is %d \n",(X),(Y))
int main()
{
	int x1213=3+4,y=4*12;
	PRINT(x1213,y);
	getch();
	return 0;
}

	
