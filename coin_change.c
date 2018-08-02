# C-code
some C codes I played around with
#include <stdio.h>
int main(void)

{
	// It is important to show that what type each variables are.
	int quarters; 
	int dimes;
	int nickels;
	int pennies;
	int cents;

	printf("What is the amount of cents?\n");
	scanf("%d", &cents);

	quarters = cents/25;
	//This will calculate how many quarters will be given out.
	printf("Number of quarters: %d\n", quarters);

	dimes = (cents - quarters*25)/10;
	//If you take out quarters from cents, then second biggest coin are dimes.
	printf("Number of dimes: %d\n", dimes);

	nickels = (cents - quarters*25 - dimes*10)/5;
	//If you take out quarters and dimes, next are nickels.
	printf("Number of nickels: %d\n", nickels);

	pennies = cents - quarters*25 - dimes*10 - nickels*5; 
	//When quarters, dimes, and nickels are taken out, the only coin left are pennies.
	printf("Number of pennies: %d\n", pennies);

}
