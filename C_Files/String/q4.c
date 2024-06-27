#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char str[100];
	printf("Enter the string you want to check\n");
	scanf("%[^\n]s", str);

	int start = 0;
	int end = strlen(str) - 1;
	
	while(start < end)
	{
		if(str[start] != str[end])
		{
			printf("\nNot a Palindrome\n");
			return EXIT_SUCCESS;
		}
		
		start++;
		end--;
	}

	printf("\n%s is a Palindrome\n", str);

	return EXIT_SUCCESS;

}

