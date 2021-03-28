/* To find the reverse of a positive integer and check for palindrome or not */

#include <stdio.h>
void main()
{
	int num, rev=0, temp, rem;
	printf("\tEnter a number: ");
	scanf("%d",&num);
	temp = num;
	while (temp!=0)
	{
		rem = temp % 10;
		temp = temp / 10;
		rev = rev * 10 + rem;
	}
	
	printf("\tThe reversed number is: %d\n", rev);
	
	if(rev == num)
	{
		printf("\tIs a palindrome\n\n");
	}else
		{
			printf("\tIt is not a palindrome\n\n");
		}
}