#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
        char a[202],b[202];
        char c[202];

        printf("\nEnter the three strings: \n");
        scanf("%s", a);
        scanf("%s", b);
        scanf("%s", c);

        int n = strlen(c);

	int freq[26];
	memset(freq, 0, sizeof(freq));

	for(int i=0;a[i]!='\0';i++)
	{
		freq[a[i] - 'a']++;
	}

	for(int i=0;b[i]!='\0';i++)
        {
                freq[b[i] - 'a']++;
        }
	
	for(int i=0;c[i]!='\0';i++)
        {
                freq[c[i] - 'a']--;
        }
	
	for(int i=0;i<26;i++)
	{
		if(freq[i] != 0)
		{
			printf("\nNot Possible\n");
			return EXIT_SUCCESS;
		}
	}

	printf("\nPossible\n");

	return EXIT_SUCCESS;
}
