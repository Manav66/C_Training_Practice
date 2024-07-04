#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int  main()
{
	char str[1000];
	int n, cnt=1;

	printf("\nEnter the string: \n");
	scanf("%[^\n]s", str);

	n = strlen(str);
	
	int i=0;

	while(str[i] != '\0')
	{
		if(str[i] == ' ' || str[i] == '\n' || str[i] == '\0')
		{
			cnt++;
		}
		i++;
	}	

	printf("%d", cnt);

	return 0;	
}

