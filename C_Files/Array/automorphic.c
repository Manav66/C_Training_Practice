#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
	int num;
	
	printf("Enter any number\n");
	scanf("%d", &num);
	
	int pow1 = pow(num, 2);
	// printf("\n%d", pow1);
	
	int dig1=0;
	int dig = num;

	while(dig != 0)
	{
		dig /= 10;
		dig1++;
	}

	dig = pow1 % (int)(pow(10, dig1));

	dig == num ? printf("Automorphic\n") : printf("Not an automorphic\n");


	return EXIT_SUCCESS;

}

