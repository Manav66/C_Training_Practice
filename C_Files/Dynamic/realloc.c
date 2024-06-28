#include<stdio.h>
#include<stdlib.h>

#define spc printf("\n");

int main()
{
	int *ptr;
	int n,i;
	
	scanf("%d", &n);
	spc;

	ptr = (int *)calloc(n, sizeof(int));

	if(ptr == NULL)
	{
		printf("Failed");
		spc;
		exit(0);
	}	

	else
	{
		printf("Elements are: ");
		spc;

		for(int i=0;i<n;i++)
		{
			printf("%d ", ptr[i]);
		}	

		spc;
		int n1;
		
		printf("Enter new size: ");
		scanf("%d", &n1);
		spc;
		getchar();

		for(int i=n;i<n1;i++)
		{
			ptr[i] = 'a' + 1;
		}

		for(int i=0;i<n1;i++)
		{
			printf("%d ", ptr[i]);
		}

		
	}

}
