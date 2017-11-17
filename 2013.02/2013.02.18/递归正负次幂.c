#include<stdio.h>
double power(double barkground,int index,double pow);
int main(void)
{
	double barkground;
	int index;
	while(scanf("%lf %d",&barkground,&index)==2)
	{
		printf("%.2lf\n",power(barkground,index,1));
	}
	return 0;
}
double power(double barkground,int index,double pow)
{
	if(barkground==0)
	  pow=0;
	else if(index>0)
	{
			pow*=barkground;
		pow=power(barkground,index-1,pow);
	}

	else if(index<0)
	{
			pow/=barkground;
			pow=power(barkground,index+1,pow);
                            
        }
	return pow;
   
}

 
 
