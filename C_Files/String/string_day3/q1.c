#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define spc printf("\n");

// Bubble sort
/*
char bubble(char str[])
{
	int n = strlen(str);
	char temp;

	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(str[j] > str[j+1])
			{
				temp = str[j];
                		str[j] = str[j+1];
                		str[j+1] = temp;
			}
		}
	}

	return str;
}

*/

// Comparator function of quick sort
int compare(const void* a, const void* b)
{
	return (*(char*)a - *(char*)b);
}

int main()
{
	char a[202],b[202];
	char c[202];

	printf("\nEnter the three strings: \n");
	scanf("%s", a);
	scanf("%s", b);
	scanf("%s", c);
	
	int n = strlen(c);

	strcat(a, b);

	qsort(a, n, sizeof(char), compare);
	qsort(c, n, sizeof(char), compare);

	//printf("\n%s\n", a);
	
//	bubble(a);

//	printf("\n%s\n", a);
	
//	bubble(c);
	
//	printf("\n%s\n", c);

	if(strcmp(a, c) == 0)
	{
		printf("\nPossible\n");
	}
	else
	{
		printf("\nNot Possible\n");
	}


	return 0;
}
