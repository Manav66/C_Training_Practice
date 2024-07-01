#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char str[100];

	memset(str, 'a', 20);

	printf("\n%s\n", str);
	
	return 0;
}
