#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#define spc printf("\n");

int main()
{
	char str[1000];
	spc;
	
	printf("Enter a sentence\n");
	fgets(str, sizeof(str), stdin);
	
	//printf("%s", str);

	int i=0;

	while(str[i] != '\0')
	{
		if((i==0 || str[i-1] == ' ') && islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}
		i++;			
	}

	printf("Every letter: %s\n", str);

	return 0;

}
