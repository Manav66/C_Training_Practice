#include<stdio.h>
#include<stdlib.h>


int main()
{
	int arr[10];
	for(int i=0;i<10;i++)
	{
		arr[i] = i;

	}

	for(int i=0;i<10;i++)
	{
		printf("\narr[%d] is: %d", i, arr[i]);
	}

	return 0;

}
