#include<stdio.h>
#include<stdlib.h>

#define spc printf("\n");

int main()
{
	/*
	int arr[] = {1,2,3,4,5};
	int *ptr;

	ptr = arr;
	ptr += 2;
	printf("%d", *ptr);
	spc;

	printf("%d ", sizeof(ptr));
	spc;
	printf("%d ", sizeof(arr));
	spc;
	*/

	int arr[] = {1,2,3,4,5};
	int (*ptr)[4];

	ptr = *arr;
	spc;

	printf("%d ", ptr[1]);
	spc;

	return 0;
}
