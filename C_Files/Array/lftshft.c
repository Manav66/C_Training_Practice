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
	
	int shft;
	printf("Enter the number of position you want the array to shift\n");
	scanf("%d", &shft);
	
	int arr2[20];

	int k = 0;

	for(int i=shft;i<size;i++)
	{
		arr2[k] = arr[i];
		k++;
	}

	for(int i=0;i<shft;i++)
	{
		arr2[k] = arr[i];
		k++;
	}

	for(int i=0;i<size;i++)
	{
		arr[i] = arr2[i];
	}

	printf("\n Array elements are: \n");
	for(int i=0;i<size;i++)
	{
		printf(" %d", arr[i]);
	}

	return 0;

}

