#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef Structure prod{
	int ID;
	int sales;
} prod;

int main()
{
	int n;
	scanf("%d", &n);

	prod p[n];
	printf("\n");

	for(int i=0;i<n;i++)
	{
		scanf("%d", &p[i].ID);
		scanf("%d", &p[i].sales);
	}

	for(int i
}
