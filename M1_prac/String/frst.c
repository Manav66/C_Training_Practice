#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];
	char ch, ch2;
	
	printf("Enter the string: \n");
	scanf("%[^\n]s", str);
	getchar();

	printf("Enter the character to remove: \n");
        scanf("%c", &ch);
	getchar();
	
	
	printf("Enter the character to replace with: \n");
        scanf("%c", &ch2);
	getchar();
	

	int n = strlen(str);
	
	int i=0;

	while(str[i] != '\0')
	{
		if(str[i] == ch)
		{
			str[i] = ch2;
			break;
		}
		i++;
	}

	puts(str);
	
	return 0;
}
