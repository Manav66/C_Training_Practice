#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int row1,col1;
        int arr1[100][100];

        printf("\n Enter row and column of first array: ");
        scanf("%d %d", &row1, &col1);

        printf("\nEnter first array");
        for(int i=0;i<row1;i++)
        {
                for(int j=0;j<col1;j++)
                {
                        scanf("%d", &arr1[i][j]);
                }
        }
	
	int arr2[row1][col1], arr3[col1][row1];

	for(int i=0;i<row1;i++)
	{
		for(int j=0;j<col1;j++)
		{
			arr2[j][i] = arr1[i][j];
		}
	}
	
	for(int i=0;i<col1;i++)
	{
		for(int j=0;j<row1;j++)
		{
			printf(" %d ", arr2[i][j]);
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
