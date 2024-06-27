#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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
	

	char *ptr1;
	char *ptr2;

	ptr1 = strstr(str, substr);
	ptr2 = strstr(str, ch);
	
	//printf("\n%c", ptr1);
	
	int pos1 = ptr1 - str;
	int pos2 = ptr2 - str;
	
	//int indx = ptr1 - str;
	//printf("%d\n", indx);
	

	printf("\nIndex of first occurance of substring is %d\n", pos1);
	printf("\nIndex of first occurance of character is %d\n", pos2);

	return EXIT_SUCCESS;

	

}

