#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
	char ch[1000];
	int age;
} user;

int main()
{
	int n;
	scanf("%d", &n);

	user u[2];
	

	printf("\nEnter user details\n");
	for(int i=0;i<n;i++)
	{
		scanf("%s", u[i].ch);
		scanf("%d", u[i].age);	
	}

	for(int i=0;i<n;i++)
	{
		printf("\n%s ", u[i].ch);
		printf(" %d", u[i].age);
	}

	return 0;
}
