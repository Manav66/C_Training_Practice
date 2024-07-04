#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main()
{
	char s[] = "mAnAvVeRmA";
	
	for(int i=0;i<strlen(s);i++)
	{
		s[i] = tolower(s[i]);
	}
	
	/*
	for(int i=0;i<strlen(s);i++)
	{
		s[i] = toupper(s[i]);
	}
	*/

	printf("\n%s\n", s);

	return 0;
}


