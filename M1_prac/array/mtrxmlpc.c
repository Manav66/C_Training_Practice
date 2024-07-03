#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int row1,col1,row2,col2;
	int arr1[100][100], arr2[100][100], arr3[100][100];

	printf("Enter number of rows and columns in matrix 1\n");
	scanf("%d%d", &row1, &col1);

	for(int i=0;i<row1;i++)
	{
		for(int j=0;j<col1;j++)
		{
			scanf("%d", &arr1[i][j]);
		}
	}

	printf("Enter number of rows and columns in matrix 2\n");
        scanf("%d%d", &row2, &col2);

        for(int i=0;i<row2;i++)
        {
                for(int j=0;j<col2;j++)
                {
                        scanf("%d", &arr2[i][j]);
                }
        }

	if(col1 != row2)
	{
		printf("\nMatrix Multiplication not Possible");
		return EXIT_SUCCESS;
	}

	for(int i=0;i<row1;i++)
	{
		for(int j=0;j<col2;j++)
		{
			arr3[i][j] = 0;

			for(int k=0;k<col1;k++)
			{
				arr3[i][j] += arr1[i][k] * arr2[k][j];
			}
		}
	}

	printf("\nThe resultant Matrix is: \n");
	for(int i=0;i<row1;i++)
	{
		for(int j=0;j<col2;j++)
		{
			printf("%d ", arr3[i][j]);
		}
		printf("\n");
	}

	return 0;
}
