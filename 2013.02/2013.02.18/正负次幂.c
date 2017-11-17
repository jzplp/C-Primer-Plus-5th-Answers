#include<stdio.h>
double power(double barkground,int index);
int main(void)
{
	double barkground;
	int index;
	while(scanf("%lf %d",&barkground,&index)==2)
	{
		printf("%.2lf\n",power(barkground,index));
	}
	return 0;
}
double power(double barkground,int index)
{
	double pow=1;
	int i,j;
	if(barkground==0)
	  pow=0;
	else if(index>0)
	{
		for(i=0;i<index;i++)
			pow*=barkground;
	}
	else if(index==0)
	{
		pow=1;
	}
	else 
	{
		for(j=0;j>index;j--)
			pow/=barkground;
                            
     }
   
	return pow;
}




