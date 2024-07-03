#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
	int num;
	int arr[100];

	printf("Enter array elements\n: ");
	scanf("%d", &num);
	
	for(int i=0;i<num;i++)
	{
		scanf("%d", &arr[i]);
	}

	int ele, pos;
	printf("Enter element to be inserted\n");
	scanf("%d", &ele);

	printf("Enter the position of element\n");
	scanf("%d", &pos);
	
	printf("Array Before Inserting: \n");

	for(int i=0;i<num;i++)
	{
		printf("%d ", arr[i]);
	}

	num++;

	for(int i=num-1;i>=pos;i--)
	{
		arr[i] = arr[i-1];
	}

	arr[pos - 1] = ele;

	printf("Array after Inserting: \n");
	
	for(int i=0;i<num;i++)
	{
		printf("%d ", arr[i]);
	}	

	return 0;
}	


