#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};

	int i=0,j=9;

	while(i < j)
	{	
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;

		i++;
		j--;
	}

	for(int k=0;k<=9;k++)
	{
		printf("\n%d ", arr[k]);
	}

	return 0;

}
