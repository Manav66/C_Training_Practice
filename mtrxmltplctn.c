#include<stdio.h>
#include<stdlib.h>

int main()
{
	int row1,clmn1,row2,clmn2;
	int arr1[100][100], arr2[100][100], arr3[100][100];

	printf("\n Enter row and column of first array: ");
	scanf("%d %d", &row1, &clmn1);


	printf("\n Enter row and columns of second array: ");
	scanf("%d%d", &row2, &clmn2);
	

	printf("\nEnter first array");
	for(int i=0;i<row1;i++)
	{
		for(int j=0;j<clmn1;j++)
		{
			scanf("%d", &arr1[i][j]);
		}
	}

	printf("\nEnter second array");

	for(int i=0;i<row2;i++)
	{
		for(int j=0;j<clmn2;j++)
		{
			scanf("%d", &arr2[i][j]);
		}
	}
	
	if(clmn1 != row2)
	{
		printf("\nMultiplication not possible");
	}

	for(int i=0;i<row1;i++)
	{
		for(int j=0;j<clmn2;j++)
		{
			arr3[i][j] = 0;

			for(int k=0;k<clmn1;k++)
			{
				arr3[i][j] += arr1[i][k] * arr2[k][j];
			}

		}
	}	
	

	for(int i=0;i<row1;i++)
	{
		for(int j=0;j<clmn2;j++)
		{
			printf("%d ", arr3[i][j]);
		}
	}

	return 0;
}
