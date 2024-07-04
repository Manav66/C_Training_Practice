#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main()
{
	char str[100];
	printf("\n");
	fgets(str, sizeof(str), stdin);

	int ways=0;	
	
	str[strcspn(str, "\n")] = '\0';
	
	int n = strlen(str);

	for(int i=1;i<n;i++)
	{
		int frst=0,scnd=0;

		for(int j=0;j<i;j++)
		{	
			char c = tolower(str[j]);
			if(c >= 'a' && c <= 'z' && c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
			{
				frst++;
			}
		}

		for(int j=i;j<n;j++)
		{
			char c = tolower(str[j]);
			if(c >= 'a' && c <= 'z' && c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
			{
				scnd++;
			}
		}

		if(frst > scnd)
		{
			ways++;
		}
	}
	
	printf("\nThe number of required ways is: %d \n", ways);

	return 0;
}
