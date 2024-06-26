#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char str[100], ch;
	int n;

	printf("\nEnter the length of string\n");
	scanf("%d",&n);
	getchar();
	
	printf("\nEnter the string\n");
	scanf("%[^\n]s", str);

	for(int i=0,j=n-1;i<j;i++,j--)
	{
		ch = str[j];
		str[j] = str[i];
		str[i] = ch;
	}


	printf("\n%s\n", str);
	
	return EXIT_SUCCESS;	
}

