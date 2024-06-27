#include<string.h>
#include<stdio.h>

int main()
{
	char str[50];
	scanf("%[^\n]", str);

	printf("\n%s", str);

	return 0;
}
