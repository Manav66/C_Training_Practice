#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *getuser(char input[]);
char *gethost(char input[]);
char *getdomain(char input[]);

int main()
{
	char str[100];
	printf("Enter the mail ID\n");
	scanf("%s", str);

	char str1[20],str2[20];

	strcpy(str1, getuser(str));
	strcpy(str2, gethost(str));
	
	printf("\n%s\n", str1);
	printf("\n%s\n", str2);


	return 0;
}

char *getuser(char input[])
{
	int n = strlen(input);
	char str[20];
	int j=0;

	for(int i=0;i<n;i++)
	{
		if(input[i] == '@')
		{
			while(i<n)
			{
				str[j] = input[i+1];
				j++;
				i++;
			}
		}
	}

	char *ptr[20];
	strcpy(*ptr, (char *)str);

	return *ptr;
}

char *gethost(char input[])
{
	int n = strlen(input);
	char str[20];
	int j=0;

	for(int i=0;i<n;i++)
	{
		
	}	

	char *ptr[20];
	strcpy(*ptr, (char *)str);

	return *ptr;
}
