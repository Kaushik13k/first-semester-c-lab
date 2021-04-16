/*To compute sin x using taylor series*/

#include<stdio.h>
#include<math.h>

int main()
{
	int n, i;
	float x, term, sum = 0;
	
	printf("Enter the value in degrees: ");
	scanf("%f", &x);
	
	printf("Enter the number of terms in Taylor series expansion: ");
	scanf("%d", &n);
	
	
	x = (x * 3.141592)/180;
	term = x;
	sum = x;
	
	for(i = 1; i<10; i++)
	{
		term = (-term*x*x)/(2*i*(2*i + 1));
				
		sum += term;
	}
	
	printf("Calculated = %f\n", sum);
	printf("Builtin function = %f\n", sin(x)); 
	
	return 0;
}