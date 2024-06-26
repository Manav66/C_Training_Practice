#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *p;
	p =(int *) malloc(5*sizeof(int));
	
	p[0] = 5;

	printf("\n%d\n", p[0]);
	
	return EXIT_SUCCESS;
}

