#include<stdio.h>
#include<string.h>
int int_shifts_are_logical(void)
{
	int shift_val=(sizeof(int)<<3)-1;
	int value=1<<shift_val;
	value=value>>shift_val;
	return value==1;
}
int main()
{
	printf("%d\n",int_shifts_are_logical());
	return 0;
}

