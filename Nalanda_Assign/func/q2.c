#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int read_char(char []);

int main()
{
	char str[100];
	printf("\nEnter the string: ");
	scanf("%s", str);

	read_char(str);

	return 0;
}

int read_char(char str1[])
{
	char str2[50];
	int n = strlen(str1);
	
	int j=0;
	for(int i=0;i<n;i++)
	{
		if(i % 2 != 0)
		{
			str2[j] = str1[i];
		        j++;	
		}	
	}
	
	str2[j++] = '\0';

	printf("\n%s\n", str2);
	
	return EXIT_SUCCESS;
}
