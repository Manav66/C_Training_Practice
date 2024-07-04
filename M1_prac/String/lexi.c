#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char str[10][50];
	char temp[50];
	int n;

	printf("Enter the number of words you want to take as input: \n");
	scanf("%d", &n);
	
	printf("Enter the words: \n");
	getchar();	

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

	printf("\nResult: \n");

	for(int i=0;i<n;i++)
	{
		printf("%s", str[i]);
	}

	return 0;


}
