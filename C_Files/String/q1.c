#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char str[100];
	printf("Enter any string\n");
	scanf("%[^\n]s", str);

	int n = strlen(str);
	
	// printf("\n%s", str);
	// printf("\n%d", n);

	int k = 0;

	for(int i=0;i<n;i++)
	{
		int j,flag=0;
		for(j=0;j<i;j++)
		{
			if(str[i] == str[j])
			{
				flag=1;
				break;
			}

			//else if(i == j)
			//{
			//	str[k++] = str[j];
			//}
		}
		if(flag==0)	
			str[k++]=str[i];

	}
		
	str[k] = '\n';

	printf("%s", str);

	return EXIT_SUCCESS;
}

