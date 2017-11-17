#include<stdio.h>
#include<conio.h>
struct style
{
	unsigned int id:8;
	unsigned int size:7;
	unsigned int alignment:2;
	unsigned int bold:1;
	unsigned int italic:1;
	unsigned int underline:1;
};
void show(struct style * css);
char menu();
void change_font(struct style * css);
void change_size(struct style * css);
void change_alignment(struct style * css);
void toggle_bold(struct style * css);
void toggle_italic(struct style * css);
void toggle_underline(struct style * css);
int main(void)
{
	char c;
	struct style css={1,12,0,0,0,0};
	show(&css);
	while((c=menu())!='q')
	{
		switch(c)
		{
			case 'f':change_font(&css);
				 break;
			case 's':change_size(&css);
				 break;
			case 'a':change_alignment(&css);
				 break;
			case 'b':toggle_bold(&css);
				 break;
			case 'i':toggle_italic(&css);
				 break;
			case 'u':toggle_underline(&css);
				 break;
		}
		show(&css);
		putchar('\n');
	}
	puts("bye!");
	getch();
	return 0;
}
void show(struct style * css)
{
	printf(" id  size  alignment  b   i   u\n");
	printf(" %d  %d     ",css->id,css->size);
	if(css->alignment==0)
		printf("left      ");
	else if(css->alignment==1)
		printf("center    ");
	else
		printf("right     ");
	if(css->bold==0)
		printf("off ");
	else 
		printf("yes ");
	if(css->italic==0)
		printf("off ");
	else 
		printf("yes ");
	if(css->underline==0)
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
void change_font(struct style * css)
{
	int n;
	printf("enter font id(0~255):\n");
	scanf("%d",&n);
	if(n>255||n<0)
		printf("error ,change fail\n");
	else
		css->id=n;
	while(getchar()!='\n')
		continue;
}
void change_size(struct style * css)
{
	int n;
	printf("enter font size(0~127):\n");
	scanf("%d",&n);
	if(n>127||n<0)
		printf("error ,change fail\n");
	else
		css->size=n;
	while(getchar()!='\n')
		continue;
}
void change_alignment(struct style * css)
{
	char ch[10];
	char alignch[]="lcr";
	printf("l)left c)center r)right\n");
	gets(ch);
	while(ch[0]=='\0'||strchr(alignch,ch[0])==NULL)
	{
		printf("error ,input again:\n");
		gets(ch);
	}
	if(ch[0]=='l')
		css->alignment=0;
	else if(ch[0]=='c')
		css->alignment=1;
	else 
		css->alignment=2;
}
void toggle_bold (struct style * css)
{
	css->bold^=1;
}
void toggle_italic(struct style * css)
{
	css->italic^=1;
}
void toggle_underline(struct style * css)
{
	css->underline^=1;
}

