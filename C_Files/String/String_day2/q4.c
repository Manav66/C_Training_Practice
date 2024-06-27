#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char str[1000];
	printf("\nEnter the words in space seperated form\n");
	scanf("%[^\n]s", str);
	getchar();
	
	int cnt=0;
	
	str[strcspn(str, "\n")] = '\0';

	for(int i=0;str[i]!= '\0';i++)
	{
		if(str[i] == ' ')
		{
			cnt++;
		}
	}	
	
	cnt = cnt+1;

	char arr[cnt][1000];

	int i=0,flag;
	int k=0;

	char *token = strtok(str, " ");

	while(token != NULL)
	{
		flag = 1;
		for(int j=0;j<i;j++)
		{
			if(strcmp(token, arr[j]) == 0)
			{
				flag = 0;
				break;
			}
		}

		if(flag == 1)
		{
			strcpy(arr[k], token);
			k++;
		}

		token = strtok(NULL, " ");
		i++;
	}
	
	char temp[1000];

	for(int i=0;i<k;i++)
	{
		for(int j=i+1;j<k;j++)
		{
			if(strcmp(arr[i], arr[j]) > 0)
			{
				strcpy(temp,arr[i]);
				strcpy(arr[i],arr[j]);
				strcpy(arr[j],temp);
			}
		}
	}

	for(int i=0;i<k;i++)
	{
		printf("\n%s", arr[i]);
	}
	
	printf("\n");

	return EXIT_SUCCESS;
}

