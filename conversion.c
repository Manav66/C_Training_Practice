#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char binary[100];
	printf("Enter the binary number: \n");
	
	gets(binary);

	// printf("%s", binary);
	

	int dec = 0;
	int power = 0;

	int length = strlen(binary);

	for(int i=length-1;i>=0;i--)
	{
		if(binary[i] == '1')
		{
			dec += (1<<power);
		}
		power++;
	}

	printf("Decimal number is: %d\n", dec);

	return 0;

}
