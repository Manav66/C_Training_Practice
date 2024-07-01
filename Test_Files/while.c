#include<stdio.h>
int main()
{
        long long int fact=1;
        long long int count, num;
        
	printf("Enter a number:");
        scanf("%lld",&num);

        for(count=1;count<=num;count++)
        {
                fact = fact * count;
        }

        printf("factorial of %lld is :%lld \n", num, fact);
        
	return 0;
}
