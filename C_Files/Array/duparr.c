#include<stdio.h>
#include<stdlib.h>


int main()
{
	int size;
        int a[10];
        printf("\nEnter size of array: \n");
        scanf("%d", &size);

        printf("\nenter array elements: \n");
        for(int i=0;i<size;i++)
        {
                scanf("%d", &a[i]);
        }
	
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(a[i] == a[j])
			{
				for(int k=j;k<size;k++)
				{
					a[k] = a[k+1];
				}
				j--;
				size--;
			}
		}
	}

	printf("\nThe resulting array is: \n");
	for(int i=0;i<size;i++)
		printf("%d ", a[i]);
	

	return 0;
}

