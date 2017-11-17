#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	int space,br,other,sum;
	sum=space=br=other=0;
	while((ch=getchar())!='#')
	{
		sum++
		switch (ch)
		case ' ':space++;
			 break;
		case '\n':br++;
			 break;
		default:other++;
	}
	printf("space:%2d,br:%2d,other:%2d,sum:%2d",space,br,other,sum);
	getch();
	return 0;
}



