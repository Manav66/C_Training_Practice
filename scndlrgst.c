#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}



void sort(int arr[], int n)
{
	if(n == 1)
		return;

	int count =0;

	for(int i=0;i<n-1;i++)
	{
		if(arr[i]>arr[i+1])
			{
			swap(&arr[i], &arr[i+1]);
			count++;
			}
	}

	if(count == 0)
		return;
	
	sort(arr, n-1);		
}


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
	
	sort(arr, size);
	 
	/*	
	printf("\nSorted array is: ");
	for(int i=0;i<size;i++)
	{
		printf("\n %d", arr[i]);
	}
	*/

	printf("Second largest element of the array is: %d", arr[size-2]);

	return 0;
}

