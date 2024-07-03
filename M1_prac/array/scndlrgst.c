#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int num, arr[100];
	
	scanf("%d", &num);

	for(int i=0;i<num;i++)
	{
		scanf("%d", &arr[i]);
	}
	
	int max1=0,max2=0;

	for(int i=0;i<num;i++)
	{
		if(arr[i] > max1)
		{
			max2 = max1;
			max1 = arr[i];
		}

		else if(arr[i] > max2 && arr[i] != max1)
		{
			max2 = arr[i];
		}
	}
	/*
	int max2=0;

	for(int j=0;j<num;j++)
	{
		if((arr[j] >  max2) && (arr[j] < maxi1))
		{
			max2 = arr[j];
		}
	}
	*/	

	// printf("\nLargest is: %d", maxi1); 
	printf("\nSecond largest: %d", max2);
	
	return 0;
}
