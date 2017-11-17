#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	while((ch=getchar())!='\n')
	{
		if(ch==' ')
		     putchar(ch);
		else if(ch=='/')
		putchar(ch);
		else
		{
            switch(ch)
            {
                      case '0':printf("000");
                           break;
                      case '1':printf("001");
                      break;
                      case '2':printf("010");
                      break;
                      case '3':printf("011");
                      break;
                      case '4':printf("100");
                      break;
                      case '5':printf("101");
                      break;
                      case '6':printf("110");
                      break;
                      case '7':printf("111");
                      break;
                      default:; 
            
            }
       }
            
                      
                      	
		
	}
	getch();
	return 0;
}


