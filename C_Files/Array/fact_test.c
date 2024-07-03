#include<stdio.h>
#include<stdlib.h>


int main()
{
	int n;
	scanf("%d", &n);
	
	int sum = 0;
	int fact = 1;

	for(int i=1;i<n;i++)
	{
		for(int i=2;i<n;i++)
		{			
			fact *= i;
		}
	
		sum += fact;

	}
	
	printf("%d", sum);

	return 0;

}
