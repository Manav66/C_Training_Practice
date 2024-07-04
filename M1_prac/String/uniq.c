#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char a[100], b[100], c[200];
	
	printf("Enter first string: \n");
	scanf("%[^\n]s", a);
	getchar();

	printf("Enter second string: \n");
        scanf("%[^\n]s", b);
	getchar();

	printf("Enter third string: \n");
        scanf("%[^\n]s", c);

	int freq[26];
	memset(freq, 0, sizeof(freq));

	for(int i=0;a[i]!='\0';i++)
	{
		freq[a[i] - 'a']++;
	}

	for(int i=0;b[i] != '\0'; i++)
	{
		freq[b[i]- 'b']++;
	}

	for(int i=0;c[i] != '\0';i++)
	{
		freq[c[i] - 'c']--;
	}

	for(int i=0;i<26;i++)
	{
		if(freq[i] != 0)
		{
			printf("\nNot Possible\n");
			return 0;
		}
	}

	printf("\nPossible\n");
	
	return 0;
}
