#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int odd(int a) {return a%2;}
int even(int a) {return !(a%2);}
int prime(int a)
{
	int i, prime = 1;
	if(a==1 || a==0) 
		prime = 0;
	for(i=2; i<=sqrt(a); i++)
	{
		if(!(a%i))
		{
			prime = 0;
			break;
		}
	}
	return prime;
}

void filter(int (*f)(int), int *p, int size)
{
	for(int i; i<size; i++)
	{
		if(f(*(p+i)))
			printf("%d\n", *(p+i));
	}
}

void main()
{
	int i = 0, *p = malloc(sizeof(int));
	while(scanf("%d", &p[i]))
	{
		if(p[i]==-1)
			{break;}
		i++;
		p = realloc(p, i*sizeof(int);	
	}
	filter(prime, p, i);
}
