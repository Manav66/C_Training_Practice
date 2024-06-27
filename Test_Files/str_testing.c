#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int sz;
	scanf("%d", &sz);
	getchar();	

	char str[1000];
	fgets(str, sz+1, stdin);
	//getchar();

	printf("\n%s", str);

	return EXIT_SUCCESS;
}

