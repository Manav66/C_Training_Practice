#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int n;
	int arr[100];

	printf("Enter size of array\n");
	scanf("%d", &n);

	for(int i=0;i<n;i++)
	{
		scanf("%d", &arr[i]);
	}

	int freq[100];
	memset(freq, 0, sizeof(freq));

	int p = 0;
	for(int i=0;i<n;i++)
	{
		freq[arr[i]]++;
		if(freq[arr[i]] == 1)
		{
			arr[p] = arr[i];
			p++;
		}
	}
	
	printf("\nRemoving Duplicates: \n");
	for(int i=0;i<p;i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}
