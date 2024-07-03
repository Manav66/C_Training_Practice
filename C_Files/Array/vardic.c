#include<stdio.h>
#include<stdlib.h>
#include<stdarg.h>

int Largest_num(int count, ...)
{
	va_list args1;
	va_start(args1, count);

	int largest = va_arg(args1, int);

	for(int i=0;i<count-1;i++)
	{
		int temp = va_arg(args1, int);
		largest = largest > temp ? largest : temp;
	}

	va_end(args1);	
	return largest;
	
}


int sum_vardic(int count, ...)
{
	va_list args;
	
	va_start(args, count);
	
	for(int i=0;i<count;i++)
	{
		int max = va_arg(args, int);
		printf("\n%d", max);
	}
	
	va_end(args);

	va_start(args, count);

	int sum=0;
	
	for(int i=0;i<count;i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);
	return sum;
}



int main()
{
	printf("\nSum of three = %d\n", sum_vardic(3, 10,20,30));
	printf("Sum of four  = %d\n", sum_vardic(4, 10,20,30,50));
	printf("Sum of five  = %d\n", sum_vardic(5, 10,20,30,15,32));
	printf("Sum of six  = %d\n", sum_vardic(6, 10,20,30,10,15,20));
	
	//printf("\nThe largest number is: %d\n", Largest_num(2,4,5));
	
	return 0;
}

