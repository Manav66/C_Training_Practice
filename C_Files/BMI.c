#include<stdio.h>
#include<stdlib.h>

int main()
{
	float  wght, hght;

	printf("Enter weight(in kg) and height(in meters): \n");
	scanf("\n%f %f", &wght, &hght);

	float Bmi = wght/hght;
	
	if(Bmi < 18.5)
	{
		printf("Underweight\n");
	}
	else if(Bmi >=18.5 && Bmi <= 24.9)
	{
		printf("Normal Weight\n");
	}
	else if(Bmi >= 25 && Bmi <= 29.9)
	{
		printf("Overweight\n");
	}
	else if(Bmi >=30)
	{
		printf("Obesity\n");
	}
	
	return 0;

}
