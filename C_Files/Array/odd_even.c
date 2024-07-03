#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num;
	printf("Enter any number: \n");
	scanf("%d", &num);
	printf("\n");

	if(num % 2 == 0)
	{
		printf("Even\n");
	}
	else
	{
		printf("Odd\n");
	}

	return 0;

}
