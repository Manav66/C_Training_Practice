#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{	
	char str[1000];
	printf("Enter a string: ");
	scanf("%[^\n]s", str);
	
	getchar();

	int n = strlen(str);
	
	int j=0;

	for(int i=1;i<n;i++)
	{
		if(((str[i] - str[j]) == 1) || ((str[i] - str[j]) == -1))
		{
			while((i<n) && (((str[i] - str[j]) == 1) || ((str[i] - str[j]) == -1)))
			{
				str[i] = '\0';
				i++;
			}
			
			str[j] = '\0';
			j--;

			while(j>=0)
			{
				if(str[j] != '\0')
				{
					break;
				}
				else
				{
					j--;
				}	
			}
			
			if(j < 0)
			{
				j = i;
			}
			else
			{
				i--;
			}
		}

		else
			j=i;	
	}
	

	for(int i=0;i<n;i++)
	{
		printf("%c", str[i]);
	}

	return 0;
				
}
