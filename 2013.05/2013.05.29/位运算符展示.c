#include<stdio.h>
struct style
{
	unsigned int id:8;
	unsigned int size:7;
	unsigned int alignment:2;
	unsigned int bold:1;
	unsigned int italic:1;
	unsigned int underline:1;
};
void show(unsigned int css);
char menu();
unsigned int change_font(unsigned int css);
unsigned int change_size(unsigned int css);
unsigned int change_alignment(unsigned int css);
unsigned int toggle_bold(unsigned int css);
unsigned int toggle_italic(unsigned int css);
unsigned int toggle_underline(unsigned int css);
int main(void)
{
	char c;
	unsigned int css=1;
	show(css);
	while((c=menu())!='q')
	{
		switch(c)
		{
			case 'f':css=change_font(css);
				 break;
			case 's':css=change_size(css);
				 break;
			case 'a':css=change_alignment(css);
				 break;
			case 'b':css=toggle_bold(css);
				 break;
			case 'i':css=toggle_italic(css);
				 break;
			case 'u':css=toggle_underline(css);
				 break;
		}
		show(css);
		putchar('\n');
	}
	puts("bye!");
	return 0;
}
void show(unsigned int css)
{
	printf(" id  size  alignment  b   i   u\n");
	printf(" %d  %d     ",css&0377,css>>8&0177);
	if((css>>15&03)==0)
		printf("left      ");
	else if((css>>15&03)==1)
		printf("center    ");
	else
		printf("right     ");
	if((css>>17&1)==0)
		printf("off ");
	else 
		printf("yes ");
	if((css>>18&1)==0)
		printf("off ");
	else 
		printf("yes ");
	if((css>>19&1)==0)
		printf("off\n");
	else 
		printf("yes\n");
}
char menu()
{
	char ch[10];
	char menuch[]="fsabiuq";
	printf("f)change font s)change size a)change alignment\n");
	printf("b)toggle bold i)toggle italic u)toggle underline\n");
	printf("q)quit\n");
	gets(ch);
	while(ch[0]=='\0'||strchr(menuch,ch[0])==NULL)
	{
		printf("error please input again!\n");
		gets(ch);
	}
	return ch[0];
}
unsigned int change_font(unsigned int css)
{
	int n;
	printf("enter font id(0~255):\n");
	scanf("%d",&n);
	if(n>255||n<0)
		printf("error ,change fail\n");
	else
	{
		css&=(~0377);
		css|=n;
	}
	while(getchar()!='\n')
		continue;
	return css;
}
unsigned int change_size(unsigned int css)
{
	int n;
	printf("enter font size(0~127):\n");
	scanf("%d",&n);
	if(n>127||n<0)
		printf("error ,change fail\n");
	else
	{
		css&=(~(077600));
		css|=n<<8;
	}
	while(getchar()!='\n')
		continue;
	return css;
}
unsigned int change_alignment(unsigned int css)
{
	char ch[10];
	unsigned int mask1=03; 
	mask1<<=15;
	char alignch[]="lcr";
	printf("l)left c)center r)right\n");
	gets(ch);
	while(ch[0]=='\0'||strchr(alignch,ch[0])==NULL)
	{
		printf("error ,input again:\n");
		gets(ch);
	}
	css&=(~(mask1));
	if(ch[0]=='l')
		css|=0<<15;
	else if(ch[0]=='c')
		css|=1<<15;
	else 
		css|=2<<15;
	return css;
}
unsigned int toggle_bold (unsigned int css)
{
	css^=(1<<17);
	return css;
}
unsigned int toggle_italic(unsigned int css)
{
	css^=1<<18;
	return css;
}
unsigned int toggle_underline(unsigned int css)
{
	css^=1<<19;
	return css;
}




