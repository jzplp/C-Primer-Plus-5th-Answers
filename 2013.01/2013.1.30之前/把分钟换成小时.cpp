#include<stdio.h>
#include<conio.h>
void temperature (double fahrenheit);
int main(void)
{     
float celsius,fahrenheit,kelvin;
scanf("%f",&fahrenheit);


while(fahrenheit>0.0)
 {
                   temperature (fahrenheit);
           scanf("%f",&fahrenheit);
}
getch();
return 0;
}

void temperature (double fahrenheit)
{
     float celsius,kelvin;
     const double  constant1=1.8;
     const double  constant2=32.0;
     const double  constant3=273.16;
     celsius=constant1*fahrenheit+constant2;
     kelvin=celsius+constant3;
     printf("%f,%f,%f\n",fahrenheit,celsius,kelvin);
}          
