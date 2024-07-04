#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{
	char str[100];
	int score = 0;
	int i,j,len;

	int f1=false,f2=false;

	printf("\nEnter the string: \n");
	scanf("%[^\n]s", str);
	
	len = strlen(str);

	getchar();

	for(int i=0;i<=len-4;i++)
	{
		f1=false;
		
		for(int j=i;j<=i+1;j++)
		{
			if(str[j] != str[i+3 - (j-i)])
			{
				f1 = true;
				break;
			}
		}

		if(f1 == false)
		{
			score += 5;
		}
	}

	for(int i=0;i<=len-5;i++)
	{
		f2 = false;
		for(int j=i;j<=i+1;j++)
		{
			if(str[j] != str[i+4 - (j-i)])
			{
				f2 = true;
				break;
			}
		}

		if(f2 == false)
		{
			score += 4;
		}
	}

	printf("\n%d\n", score);

	return 0;
}
