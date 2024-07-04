#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char str1[100],str2[100];
	printf("Enter first string: \n");
	scanf("%s", str1);
	getchar();

	printf("\nEnter second string: \n");
	scanf("%s", str2);
	getchar();

	int freq1[26], freq2[26];
	int p=0, n;

	n = strlen(str1);

	for(int i=0;i<n;i++)
	{
		p = str1[i] - 'a';
		freq1[p]++;
	}

	n = strlen(str2);

	for(int i=0;i<n;i++)
	{
		p = str2[i] - 'a';
		freq2[p]++;
	}

	for(int i=0;i<26;i++)
	{
		if(freq1[i] != freq2[i])
		{
			printf("\nNot an Anagram\n");
			return 0;
		}
	}
	
	printf("\nAnagram\n");

	return 0;
}
