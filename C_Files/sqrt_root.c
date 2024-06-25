#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	int num;
	printf("Enter any number\n");

	scanf("%d", &num);

	//double root = sqrt(num);
	
	//int rn1 = round(root);
	
	//int pow1 = pow(rn1, 2);

	// int pow1 = pow(round(sqrt(num)),2);
	
	printf("\nThe required number is: %d\n", (int)pow(round(sqrt(num)),2));

	return EXIT_SUCCESS;
}

