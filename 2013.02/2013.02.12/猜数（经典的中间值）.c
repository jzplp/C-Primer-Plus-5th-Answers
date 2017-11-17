#include<stdio.h>
#include<conio.h>
int main()
{
	int input=4,middle,upper=100,lower=0,a=0;
	printf("请想1~100中间的一个数字\n");
	while(input!=0)
	{

        middle=(upper-lower)/2+lower;

		printf("%d 小于（按1）大于（按2）还是等于（按0）您选的数字?",middle);
		while(input>=3||input<0)
		{
            scanf("%d",&input);
			switch(input)
			{
				case 0:printf("猜对啦!");
				       break;
				case 1:lower=middle;
				       a=1;
				       break;
				case 2:upper=middle;
				       a=1;
				       break;
				       
           }
        }
        if(a==1)
            input=4;
        a=0;
	}
	getch();
	return 0;
}







	
