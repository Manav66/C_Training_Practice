#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#pragma GCC poison printf /* return value */ 
#pragma warn -par /* parameter never used */ 
#pragma warn -rch /*unreachable code */ 

int add(int x, int y)
{
	int sum;
}

int main()
{
	int a=10;
	int b = 20;

	int sum = add(a, b);

	printf("\n%d\n", sum);

	return 0;	
}


