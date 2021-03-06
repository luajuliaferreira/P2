#include <stdio.h>
#define partition 10000
double integral(double (*f)(double x), double a, double b)
{
	double sum = 0.0, dt;
	int i;	
	dt = (b-a)/(partition*1.00);
	for(i=0; i<partition; i++)
		sum += (*f)(i * dt + a) * dt;
	return sum;
}

double square(double x) return x*x;
double cube(double x) return x*x*x;

void main()
{
	printf("%lf\n", integral(square, 0, 1));
	printf("%lf\n", integral(cube, 0, 1));
}
