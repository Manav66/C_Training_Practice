#include<stdio.h>
#include<stdlib.h>

int main()
{
	double c;
	printf("Enter Temperature in Celcius\n");
	scanf("%lf", &c);

	printf("Temperature in Fahrenheit is: %.2lf", ((c*9)/5) + 32);

	return 0;
}	
