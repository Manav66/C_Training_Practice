#include<stdio.h>
#include<stdlib.h>

int main()
{
	int size;
	int arr[10];
	printf("\nEnter size of array: \n");
	scanf("%d", &size);

	printf("\nenter array elements: \n");
	for(int i=0;i<size;i++)
	{
		scanf("%d", &arr[i]);
	}

	int ele;

	printf("\nEnter element to be searched");
	scanf("%d", &ele);

	for(int i=0;i<size;i++)
	{
		if(ele == arr[i])
		{
			printf("\nElement found: %d at index: %d", arr[i], i);
			return EXIT_SUCCESS;
		}
		
	}

	printf("Element not Found");

	return EXIT_SUCCESS;

}


