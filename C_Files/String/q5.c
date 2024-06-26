#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char str[10][50];
	char temp[50];
	int n;

	printf("\nEnter the number of words you want to input\n");
	scanf("%d", &n);
	printf("\n");

	for(int i=0;i<n;i++)
	{
		fgets(str[i], sizeof(str[i]), stdin);
	}

	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(strcmp(str[i], str[j]) > 0)
			{
				strcpy(temp, str[i]);
				strcpy(str[i], str[j]);
				strcpy(str[j], temp);			
			}
		}
	}
	
	printf("The string in lexicographical order are: \n");
	for(int i=0;i<n;i++)
	{
		printf("%s\n", str[i]);
	}
	
	return 	EXIT_SUCCESS;

}

