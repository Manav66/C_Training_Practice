#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	int arr_max=0,arr_min=0;

	for(int i=0,j=1;i<9,j<10;i++,j++)
	{
		if(arr[i] < arr[j])
		{
			arr_max = arr[j];
		}
	}

	for(int i=0,j=1;i<9,j<10;i++,j++)
	{
		if(arr[i] <  arr[j])
	{
			arr_min = arr[i];
		}
	}


	printf("\n The maximum element is:  %d", arr_max);
	printf("\n The minimum element is:  %d", arr_min);

}	
