#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char str1[100], str2[100];

	printf("\nEnter the first and second string\n");
	
	gets(str1);
	gets(str2);

	// printf("str1: %s and str2: %s", str1, str2);

	memset(
	int count2[26] = {0};
	int i, a = strlen(str1), b = strlen(str2);

	for(i=0;i<a && i<b;i++)
	{
		count1[str1[i++]];
		count2[str2[i++]];
	}

	int flag = 1;

	/*
	if(a != b)
	{
		printf("\nNot an anagram");
		return EXIT_SUCCESS;
	}

	*/

	for(i=0;i<26;i++)
	{
		if(count1[i] != count2[i])
		{
			break;
			flag = 0;
		}
	}

	flag != 1 ? printf("Not an anagram") : printf("Anagram");

	return 0;
}

