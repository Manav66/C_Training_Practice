#include<stdio.h>
#include<stdlib.h>

void rvrs(int arr[], int i, int j)
{
	int temp;
	
	while(i < j)
	{
		temp = arr[j];
		arr[j] = arr[i];
		arr[i] = temp;
		i++;
		j--;
	}
}


int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	
	int d = 2;

	for(int i=0;i<10;i++)
        {
                printf("%d ", arr[i]);
        }
	
	printf("\n");
	rvrs(arr,0,2);
	rvrs(arr,3,9);

	rvrs(arr,0,9);
	
	printf("Left rotate\n");

	for(int i=0;i<10;i++)
	{
		printf("%d ", arr[i]);
	}

	printf("\n");

	rvrs(arr,7,9);
	rvrs(arr,0,6);
	rvrs(arr,0,9);

	printf("Right rotate\n");

	for(int i=0;i<10;i++)
        {
                printf("%d ", arr[i]);
        }
	
	return 0;
}
