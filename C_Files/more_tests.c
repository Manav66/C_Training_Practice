// Header Files
#include<stdio.h>
#include<string.h>

// Macro

#define space printf("\n")

// Macro functions

char strfunc(char ch[]){
     printf("%s\n", ch);
        }

int main()
{

	/*	
	int a = 10,b=20;
	printf("Sum: \n");
	printf("%d + %d = %d\n", a, b, a+b);
	
	*/
	
	int a,b;
	space;
	printf("Enter two numbers");
	space;

	scanf("%d %d", &a, &b);
	space;

	printf("The sum of numbers provided is : ");
	space;

	printf("%d + %d = %d", a, b, a+b);	
	space;

	return 0;
}


