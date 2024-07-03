#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arr[10];

	for(int i=0;i<10;i++)
	{
		scanf("%d", &arr[i]);
	}

	int end = 9;
	int temp;

	for(int i=0;i<(10/2);i++)
	{
		temp = arr[i];
		arr[i] = arr[end];
		arr[end] = temp;
		
		end--;
		
	}
	
	printf("\n");

	for(int i=0;i<10;i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
