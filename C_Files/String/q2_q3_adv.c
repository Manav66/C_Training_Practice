#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char str[100];
	printf("\nEnter any string\n");
	scanf("%[^\n]s", str);
	
	getchar();

	char ch1, ch2;
	printf("\nEnter character to replace\n");
	scanf("%c", &ch1);
	getchar();

	printf("\nEnter character to replace with\n");
	scanf("%c", &ch2);	
	getchar();

	int i=0,pos=0;
	while(str[i] != '\0')
	{
		if(str[i] == ch1)
		{
			pos = i;
			str[pos] = ch2;
			break;
		}
		i++;
	}
	
	// str[pos] = ch2;
	//printf("\nThe pos is %d", pos);
	//str[pos] = '';

	printf("\nThe modified string is %s\n", str);
	
	return EXIT_SUCCESS;	
}

