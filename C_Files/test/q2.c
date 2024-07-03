#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define spc printf("\n");


int main()
{
	char str[100];

	printf("Enter a word: ");
	scanf("%s", str);

	int n = strlen(str);
	int i=0,j=0;

	for(i=0,j<0;i<n;)
	{
		if(str[i] == str[i+1])
		{
			i += 2;
		}	
		else
		{
			str[j++] = str[i++];
		}
	}	
	
	str[j] = '\0';

	printf("The modified string is: %s\n", str);

	return 0;
	

}


