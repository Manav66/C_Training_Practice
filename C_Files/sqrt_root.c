#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	int num;
	printf("Enter any number\n");

	scanf("%d", &num);

	double root = sqrt(num);
	
	int rn1 = round(root);
	
	int pow1 = pow(rn1, 2);
	
	printf("\nThe required num is: %d\n", pow1);

	return EXIT_SUCCESS;
}

