#include<stdio.h>
#include<conio.h>
int main()
{
	int input=4,middle,upper=100,lower=0,a=0;
	printf("����1~100�м��һ������\n");
	while(input!=0)
	{

        middle=(upper-lower)/2+lower;

		printf("%d С�ڣ���1�����ڣ���2�����ǵ��ڣ���0����ѡ������?",middle);
		while(input>=3||input<0)
		{
            scanf("%d",&input);
			switch(input)
			{
				case 0:printf("�¶���!");
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







	
