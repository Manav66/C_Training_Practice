#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{
	char str[100];
	int score=0;
	int i,j,len;
	bool flag1 = false;
	bool flag2 = false;

	printf("\nEnter the string\n");
	scanf("%[^\n]s", str);

	getchar();

	len = strlen(str);

	for(int i=0;i<=len-4;i++)
	{	
		flag1 = false;
		for(int j=i;j<=i+1;j++)
		{
			if(str[j] != str[i+3 -(j-i)])
			{
				flag1 = true;
				break;
			}
		}

		if(flag1 == false)
			score += 5;
	}
	
	for(int i=0;i<=len-5;i++)
	{
		flag2 = false;
		for(int j=i;j<=i+2;j++)
		{
			if(str[j] != str[i+4 - (j-i)])
			{
				flag2 = true;
				break;
			}
		}

		if(flag2 == false)
			score += 10;
	}

	printf("\n %d \n", score);

	return EXIT_SUCCESS;
}

