#include<stdio.h>
#include<stdlib.h>

#define spc printf("\n");


int main()
{
	int *ptr;
	int n,i;

	scanf("%d", &n);	
	spc;
	getchar();

	ptr = (int *)calloc(n, sizeof(int));
	spc;

	// printf("Size is: %d", ptr);

	if(ptr == NULL)
	{
		printf("failure");
		spc;
		exit(0);
	}

	else
	{
		printf("Memory Allocated");
		spc;
		
		/*
		for(int i=0;i<n;i++)
		{
			ptr[i] = 'a' + i;
		}
		*/

		for(int i=0;i<n;i++)
		{
			printf("Memory Allocated at %d", &ptr[i]);
			spc;
		}

		printf("Elements");
		spc;

		for(int i=0;i<n;i++)
		{
			printf("%d ", ptr[i]);
		}
		spc;
	}

	free(ptr);
	
	return 0;
	
}


