#include<stdio.h>
#include<stdlib.h>


int main()
{
	int a,b,c;
	printf("Enter three numbers: \n");
	scanf("%d%d%d", &a,&b,&c);

	printf("\n");

	int ans;
	
	ans = (a>b) ? (a>c) ? printf("a is largest") : printf("c is largest") : (b>c) ? printf("b is largest") : printf("c is largest");
	printf("\n");
	
	return 0;

}	
