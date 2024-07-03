#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num, arr[100];
	printf("Enter size of array\n");
	scanf("%d", &num);

	for(int i=0;i<num;i++)
	{
	scanf("%d", &arr[i]);
	}

	for(int i=0,j=num-1;i<(num/2),j>(num/2);i++,j--)
	{
		if(arr[i] != arr[j])
		{
			printf("\nNot a palindrome\n");
			return 0;
		}
	}

	printf("\nPalindrome\n");
	
	return 0;
}
