#include<stdio.h>
#include<stdlib.h>

int main()
{
	double r;
	printf("Enter radius of circle: \n");
	scanf("%lf", &r);

	printf("\nArea is: %.2f", 3.14*r*r);
	printf("\nCircumference is: %.2f", 2*3.14*r);

	return 0;

}
