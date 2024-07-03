#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	/*
	printf("Enter the number\n");
	int num;

	scanf("%d", &num);

//	int len = strlen(str);
	// printf("%s", str);
	
	int sum=0,k;
	
	while(num > 0)
	{
		k = num % 10;
		sum += k;
		num =  num / 10;
	
	}

	printf("%d", sum);

	*/

	printf("Enter the number\n");
	char str[100];
	
	fgets(str, 100, stdin);
	
	int len = strlen(str);
	//printf("\n%d", len);
	int sum=0;

	for(int i=0;i<len-1;i++)
	{
		sum += str[i]-'0';
		// printf("%d", str[i]-'0');
	}

	printf("%d", sum);

	
	return EXIT_SUCCESS;
}

