#include<stdio.h>
#include<stdlib.h>

int add(int x, int y)
{
	return x+y;
}

int main()
{
	int a=10;
	int b = 20;
	
	int c = a+b;

	int sum = add(a, b);
	
	printf("\n%d\n", c);
	printf("\n%d\n", sum);

	return 0;
}
