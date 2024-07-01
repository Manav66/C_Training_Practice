#include<stdio.h>
#include<stdlib.h>

int main()
{
	int arr1[100];
	int arr2[100];
	int n1,n2;


	printf("Enter size of first array: \n");
	scanf("%d", &n1);

	printf("Enter size of second array: \n");
	scanf("%d", &n2);

	for(int i=0;i<n1;i++)
	{
		scanf("%d", &arr1[i]);
	}

	for(int j=0;j<n2;j++)
	{
		scanf("%d" , &arr2[j]);
	}

	int merged[n1+n2];
	int i=0,j=0,k=0;

	while(i<n1 && j<n2)
	{
		if(arr1[i] <= arr2[j]) 
		{
            		merged[k] = arr1[i];
            		i++;
        	}
		else 
		{
            		merged[k] = arr2[j];
            		j++;
        	}

        k++;

    	}

	while(i < n1) 
	{
        	merged[k] = arr1[i];
        	i++;
        	k++;
    	}

    	while(j < n2) 
	{
        	merged[k] = arr2[j];
        	j++;
        	k++;
    	}

	printf("Merged array: ");
    	for(i = 0; i < n1 + n2; i++) 
	{
        	printf("%d ", merged[i]);
    	}
    	printf("\n");
	
	return 0;

}
