#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int arr[100], n;
	printf("Enter size of array\n");
	scanf("%d",&n);

	for(int i=0;i<n;i++)
	{
		scanf("%d", &arr[i]);
	}

	int freq[100];
	memset(freq, 0, sizeof(freq));

	for(int i=0;i<n;i++)
	{
		freq[arr[i]]++;
	}

	for(int i=0;i<100;i++)
	{
		if(freq[i] == 0)
		{
			continue;
		}
		else
		{
			printf("Occurance of %d: %d\n", i, freq[i]);
		}
	}

	return 0;
}
