#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int *func(void);

int main()
{
	int num,*ptr = NULL;
	ptr = (int *)func();

	num = *ptr;
	
	printf("\n%d\n", num);

	return 1;
}

int *func()
{
	int local;
	local = 10;	

	int *ptr;
	ptr = (int *)&local;

	return(&local);
}
