#include<stdio.h>
#include<stdlib.h>

int main()
{
	int size1,size2;
        int arr1[100],arr2[100];
        printf("\nEnter size of array1 and array 2: \n");
        scanf("%d %d", &size1, &size2);

        printf("\nenter first array elements: \n");
        for(int i=0;i<size1;i++)
        {
                scanf("%d", &arr1[i]);
        }
	
	printf("Enter second array elements");

	for(int j=0;j<size2;j++)
	{
		scanf("%d", &arr2[j]);
	}

	int arr3[500];

	for(int i=0,j=0;i<size1;i++,j++)
	{
		arr3[j] = arr1[i];		
	}

	
	for(int i=0,j=size1;i<size2;i++,j++)
	{
		arr3[j] = arr2[i];
	}

	for(int i=0;i<(size1+size2);i++)
	{
		printf("\nMerged array element at index %d is: %d ", i, arr3[i]);
	}

	return 0;

}
	


	
