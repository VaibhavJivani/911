#include <stdio.h>
#include <math.h>

int main()
{
    int time;
	float amount,principle,rate;
	printf("Principle amount:$");
	scanf("%f",&principle);
	printf("Time(in years):");
	scanf("%d",&time);
	printf("Interest Rate(in percentage):");
	scanf("%f",&rate);

    amount= principle * pow((1+(rate/100)),time);

	printf("\n");
	amount=amount-principle;
	printf("After %d years , One's gain is $%.2f",time,amount);

	return 0;
}
