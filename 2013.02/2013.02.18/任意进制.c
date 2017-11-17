#include<stdio.h>
void to_best_n (unsigned long n,unsigned system);
int main(void)
{
	unsigned long n;
	unsigned system;
	while(scanf("%lu %u",&n,&system)==2)
	{
		to_best_n (n,system);
		printf("\n");
	}
	return 0;
}
void to_best_n (unsigned long n,unsigned system)
{
	int r;
	r=n%system;
	if(n>=system)
		to_best_n(n/system,system);
	printf("%d",r);
}







