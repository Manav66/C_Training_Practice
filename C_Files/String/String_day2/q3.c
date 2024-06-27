#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char input[1000];
	char words[100][100];
	char *token;

	int cnt = 0;
	
	printf("\nEnter | separated words\n");
	fgets(input, sizeof(input), stdin);

	token = strtok(input, "|");

	while(token != NULL && cnt < 100)
	{
		strcpy(words[cnt], token);
		cnt++;
		token = strtok(NULL, "|");
	}

	for(int i=0;i<cnt-1;i++)
	{
		for(int j=i+1;j<cnt;j++)
		{
			if(strcmp(words[i],words[j]) > 0)
			{
				char temp[100];
				strcpy(temp, words[i]);
				strcpy(words[i], words[j]);
				strcpy(words[j], temp);
			}
		}
	}


	for(int i=0;i<cnt;i++)
	{
		printf("%s", words[i]);
		if(i < cnt - 1)
			printf("|");
	}

	printf("\n");
	
	return EXIT_SUCCESS;
}

