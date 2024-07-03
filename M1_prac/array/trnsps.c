#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int row1,col1;
	int arr1[100][100], arr2[100][100];

	printf("Enter number of rows and columns in matrix 1\n");
        scanf("%d%d", &row1, &col1);

        for(int i=0;i<row1;i++)
        {
                for(int j=0;j<col1;j++)
                {
                        scanf("%d", &arr1[i][j]);
                }
        }

	for(int i=0;i<row1;i++)
	{
		for(int j=0;j<col1;j++)
		{
			arr2[j][i] = arr1[i][j];
		}
	}

	printf("The transpose of the given matrix is: \n");

	for(int i=0;i<col1;i++)
	{
		for(int j=0;j<row1;j++)
		{
			printf("%d ", arr2[i][j]);	
		}
		printf("\n");
	}
}
