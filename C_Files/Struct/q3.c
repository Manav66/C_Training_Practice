#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct product {
	int id;
	int q;
	} prod;

int main()
{
	printf("\nEnter the number of products: ");
	int n;
	scanf("%d", &n);

	prod p[n];

	for(int i=0;i<n;i++)
	{	printf("\nEnter process ID and quantity\n");
		
		scanf("%d", &p[i].id);
		getchar();

		scanf("%d", &p[i].q);
		getchar();
	}

	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(p[i].id == p[j].id)
			{
				p[i].q  += p[j].q;
				p[j].id = -1;
			}
		}
	}

	for(int i=0;i<n;i++)
	{
		if(p[i].id != -1)
		{
			printf("P%d - %d\n", p[i].id, p[i].q);
		}
	}

	return 0;


}

