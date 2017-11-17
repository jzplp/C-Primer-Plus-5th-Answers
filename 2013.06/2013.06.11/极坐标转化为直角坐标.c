#include<stdio.h>
#include<conio.h>
#include<math.h>
struct polar
{
	double radius;
	double angle;
};
struct right
{
	double x;
	double y;
};
struct right transition(struct polar vector);
int main()
{
	struct polar vector;
	struct right scalar;
	while(scanf("%lf %lf",&vector.radius,&vector.angle)==2)
	{
		if(vector.radius<0)
		{
			printf("error! redius<0 input again!\n");
			continue;
		}
		scalar=transition(vector);
		printf("x=%lf y=%lf\n\n",scalar.x,scalar.y);
	}
	getch();
	return 0;
}
struct right transition(struct polar vector)
{
	struct right scalar;
	vector.angle*=3.1415926/180;
	scalar.x=vector.radius*cos(vector.angle);
	scalar.y=vector.radius*sin(vector.angle);
	return scalar;
}



