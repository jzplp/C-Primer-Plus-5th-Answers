#include<stdio.h>
void men();
int dispose(int a,int b);
int main(void)
{
	int upper=4,lower=1,choose;
	do
	{
		choose=dispose(lower,upper);
		switch(choose)
		{
			case 1:printf("choose 1\n");
			       break;
		        case 2:printf("choose 2\n");
		               break;
		        case 3:printf("choose 3\n");
		               break;
	        }
         }
	while(choose!=4);
	return 0;
}
void men()
{
	printf("Please choose one of the following:\n");
	printf("1) copy files   2) move files\n");
	printf("3) remove files 4) quit\n");
	printf("Enter the number of your choice:\n");
}
int dispose (int a,int b)
{
	int input;
	men();
	while(scanf("%d",&input)==0||(input<a||input>b))
	{
		printf("«Î÷ÿ–¬ ‰»Î£°\n");
        while(getchar()!='\n')
		continue;
		men();
	}
}

