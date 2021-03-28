/*Simple Calculator*/


#include<stdio.h>

int main()
{
	char ch;
	float a, b;
	int x, y;

	printf("\tMenu:\n");
	printf("\t+ Addition   - Subtraction   * Multiplication   / Division   % Remainder\n");
	printf("\tEnter the symbol: ");
	scanf("%c", &ch);
	printf("\tEnter the numbers: ");
	scanf("%f%f", &a, &b);
	
	
	switch(ch) // cases +, -, *, /, %	
	{
		case '+': printf("\tSum = %f\n", a+b); 
				  break;
		case '-': printf("\tDifference = %f\n", a-b); 
			      break;
		case '*': printf("\tProduct = %f\n", a*b); 
				  break;
		case '/'://condition cannot divide by zero 
			if(b!=0)
			 {
			      printf("\tQuotient = %f\n", a/b); 
				  break;
			 }
			else
			 {
				  printf("\tCannot divide by zero!!!!\n");
			 }
		case '%': x=a; y=b;	  					
			  if(b!=0)
			  {
			      printf("\tRemainder = %d\n", x%y); 
				  break;
			  }
			  else
			  {
			  	  printf("\tCannot divide by zero!!!!\n");
			  }
		default: printf("\tInvalid operator!!!!\n");
	}
	return 0;
}
