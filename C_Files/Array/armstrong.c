#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int n;
	printf("Enter Armstrong number");
	scanf("%d", &n);

	int temp = n;
	int p=n;

	while(n > 0)
	{
		int rem = n % 10;
		p = (p) + rem*rem*rem;
		n = n/10;
	}

	if(temp == p)
		printf("Armstrong number");
	else
		printf("not an Armstrong");

	return 0;

}
