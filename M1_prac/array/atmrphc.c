#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define ll long long

int main()
{
	ll num;
	printf("Enter any num: ");
	scanf("%lld", &num);

	ll sq = pow(num, 2);

	ll dig1=0;
	ll temp = num;

	while(temp > 0)
	{
		temp /= 10;
		dig1++;
	}
	
	// printf("%d", dig1);
	
	temp = sq % (ll)(pow(10, dig1));

	num == temp ? printf("\nAutomorphic\n") : printf("\nNot an Automorphic\n");

	return 0;
}
