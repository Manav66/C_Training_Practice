#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
	int num;
	printf("Enter the num: \n");
	scanf("%d", &num);

	// double root = sqrt(num);
	// int rn1 = round(root);

	// int rn2 = pow(rn1, 2);

	printf("\nThe required num is: %d\n", (int)pow(round(sqrt(num)), 2));

	return 0;
}	
