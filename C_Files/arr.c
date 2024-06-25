#include<stdio.h>
#include<stdlib.h>


#define SIZE(arr) (sizeof(arr)/sizeof(arr[0]))

int main()
{
	int arr[3]={1,2,4};

	int arr_size = SIZE(arr);

	//printf("%d\n", arr_size);
	
	printf("%d\n", arr[6]);
	
//	printf("Address of 1 element: %d\n", &arr);

//	printf("Address of last element: %d", &arr + 1);

	return EXIT_SUCCESS;
}

