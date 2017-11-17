
#include<conio.h>
#include"pe12-2a.h"
int main()
{
	int mode;
	printf("0是欧洲，1是美洲\n");
	scanf("%d",&mode);
	while(mode>=0)
	{
		set_mode(mode);
		get_info();
		show_info();
		printf("0是欧洲，1是美洲\n");
		printf("hdsuiwehviuv\n");
		scanf("%d",&mode);
	}
	printf("bye~\n");
	getch();
	return 0;
}


