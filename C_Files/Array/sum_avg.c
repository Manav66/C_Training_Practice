#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arr[10] = {1,2,33,4,44,45,5,5,63,2};
	int sum=0;
	float avg=0;
	for(int i=0;i<10;i++)
	{
		sum += arr[i];
	}

	avg = sum/sizeof(arr);

	printf("\nThe sum of array is: %d and the average of array is: %.2f", sum, avg);

	return 0;

}
