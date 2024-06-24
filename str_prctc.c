#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char str[50];
	printf("Enter a string\n");
	// scanf("%[^\n]s", str);
	
	fgets(str, 15, stdin);

	len = strlen(str);

	if(str[len-1] == '\n')
		str[len-1] = '\o';

	fputs(str, stdout);
	//printf("%s\n", str);
	
	return EXIT_SUCCESS;
}

