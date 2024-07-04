#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char str[1000];
	char substr[1000];
	char ch[100];
	
	printf("\nEnter size of string you want to take as input\n");
	scanf("%[^\n]s", str);

	getchar();

	printf("\nEnter the Substring\n");
	scanf("%[^\n]s", substr);
	
	getchar();

	printf("\nEnter the character\n");
	scanf("%s", ch);

	char *ptr;
	char *ptr2;

	ptr = strstr(str, substr);
	ptr2 = strstr(str, ch);

	int pos1 = ptr - str;
	int pos2 = ptr2 - str;

	printf("\nIndex of first occurance of substring is: %d\n", pos1);
	printf("\nIndex of first occurance of character is: %d\n", pos2);

	return 0;	
}
