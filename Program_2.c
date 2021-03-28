/*Computation of quadratic equation*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	float a, b, c, d, r1, r2, r, i;	
	
	printf("\tEnter the coefficients of x: ");
	scanf("%f%f%f", &a, &b, &c);
	
	// if a = 0 and b = 0 cannot determine roots.
	if(a==0 && b==0)
	{
		printf("\tRoots cannot be determined\n");
		exit(0);
	}
	
	if(a==0)
	{
		r1 = -c/b;
		printf("\tLinear Equation:\n");
		printf("\tRoot is: %f", r1);
	}
	
	d = b*b - 4*a*c;
	
	if(d == 0)
	{
		r1 = -b/2*a;
		r2 = r1;
		printf("\tThe roots are real and equal:\nRoot 1: %f\tRoot 2: %f\n", r1, r2);
	}
	
	else if(d>0)
	{
		r1 = (-b + sqrt(d))/2*a;
		r2 = (-b - sqrt(d))/2*a;
		printf("\tRoots are real and distinct:\n");
		printf("\tRoot 1: %f\tRoot 2: %f\n", r1, r2);
	}
	
	else
	{
		r = -b/2*a;
		i = sqrt(fabs(d))/2*a;
		printf("\tThe roots are imaginary:\n");
		printf("\tRoot 1: %f + i(%f)\t", r, i);
		printf("\tRoot 2: %f - i(%f)\t\n", r, i);
	}
	
	return 0;
}