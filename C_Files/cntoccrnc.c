#include<stdio.h>
#include<stdlib.h>

int main()
{
	int size;
        int arr[10];
        printf("\nEnter size of array: \n");
        scanf("%d", &size);

        printf("\nenter array elements: \n");
        for(int i=0;i<size;i++)
        {
                scanf("%d", &arr[i]);
        }
	
	int check=0;
	for(int i=0,j=size-1;i<size,j>=0;i++,j--)
	{
		if(arr[i] == arr[j])
		{
			check = 1;

		}
		else
		{
			check =0;
			break;
		}
	}
	
	check == 1 ? printf("Yes, array is a palindrome") : printf("No, array is not a palindrome");
	

	return 0;

}



