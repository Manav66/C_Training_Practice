#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int num;
	printf("Enter any number\n");
	scanf("%d", &num);

	int temp1 = num;
	int temp2 = 0;

	while(temp1 > 0)
	{
		int rem = temp1 % 10;
		temp2 = (temp2) + rem*rem*rem;
		temp1 = temp1 / 10;
	}

	temp2 == num ? printf("\nArmstrong") : printf("\nNot an Armstrong");
	
	printf("\n");

	return 0;
}
