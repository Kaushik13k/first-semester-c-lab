/*electricity bill*/

#include<stdio.h>

int main()
{
	float charge;
	int units;
	char name[50];
	
	printf("Enter the name: ");
	scanf("%s", &name);
	printf("Enter the no.of.units consumed: ");
	scanf("%d", &units);
	
	if(units<=200)
	{
		charge = units*0.8;
	}
	else if(units<=300)
		{
			charge = 160 + (units-200)*0.9;	
		}
		else
		{	

			charge = 250 + (units - 300)*1;
		}
	
	charge += 100;
	
	if(charge > 400)
	{
		charge = charge +charge*0.15;
	}
	
	printf("\nName: %s ", name);
	printf("\nUnits consumed: %d", units);
	printf("\nCharge = Rs %f\n", charge);
	
	return 0;

}