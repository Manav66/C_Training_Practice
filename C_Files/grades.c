#include<stdio.h>
#include<stdlib.h>

int main()
{
	int score;
	printf("Enter score between 0-100: \n");
	scanf("%d", &score);

	if(score >= 90 && score <= 100)
	{
		printf("\nA");
	}
	else if(score >=80 && score <= 89)
	{
		printf("\nB");
	}
	else if(score >=70 && score <= 79)
	{
		printf("\nC");
	}
	else if(score >=60 && score <= 69)
	{
		printf("\nD");
	}
	else
	{
		printf("\nF");
	}

	return 0;

}

