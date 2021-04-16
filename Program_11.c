/*pointers to compute sum, mean and standard deviation*/

#include<stdio.h>
#include<math.h>  

main()
{
	float a[100], *p, sum, mean, sd, res;
	int n, i;
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%f", &a[i]);
	} 	
	
	sum = 0;
	res = 0;
	p = a;
	
	for(i=0;i<n;i++)
	{
		sum += *p;
		p++;
	}
	
	mean = sum/n;
	
		p = a; 
	
	for(i=0;i<n;i++)
	{
		res += pow((*p - mean), 2);
		p++;
	}
	
	res /= n;
	sd = sqrt(res);
	
	printf("Sum = %f", sum);
	printf("\nMean = %f", mean);
	printf("\nStandard deviation = %f\n\n", sd);	
}