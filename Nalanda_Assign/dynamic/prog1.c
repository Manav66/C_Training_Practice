#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define spc printf("\n");

int main()
{
	char str[1000];
	char str1[1000] = "";
	printf("Enter the string:  ");
	scanf("%[^\n]s", str);
	getchar();

	char *tok;

	tok = strtok(str, "-");
	
	while(tok != NULL)
	{
		//printf("%s", tok);
		strcat(str1, tok);
		strcat(str1, "_");
		spc;
		tok = strtok(NULL, "-");
	}
	
	printf("%s", str1);

	spc;

}
