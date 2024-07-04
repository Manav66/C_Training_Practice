#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char str[100];
	scanf("%[^\n]s", str);
	getchar();

	int n = strlen(str);
	
	int k=0;
	
	for(int i=0;i<n;i++)
	{
		int j,flag=0;
		for(int j=0;j<i;j++)
		{
			if(str[i] == str[j])
			{
				flag = 1;
				break;
			}
		}

		if(flag == 0)
		{
			str[k++] = str[i];
		}
	}

	str[k] = '\0';

	printf("\n%s\n", str);

	return 0;
}
