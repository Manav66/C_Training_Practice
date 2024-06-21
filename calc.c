// Welcome to my Calculator. It can perform Arithmetic as well as Bitwise Operations.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>


#define spc printf("\n");

int main()
{	
	printf("Hello, Welcome to my calculator");
	spc;

	printf("Choose 1 for Bitwise or 2 for Arithmetic");	
	spc;

	int ch;
	scanf("%d", &ch);

	int a,b;
	spc;
	
	int cnt=1;

	while(cnt == 1){

	if(ch == 2){
		
		printf("Enter two numbers to perform the Operation and on the next selection choose the operation to be performed");
		spc;

		scanf("%d %d", &a,&b); 
		spc;

		printf("Make the choice\n 1.Addition\n 2.Substraction\n 3.Division\n 4.Multiplication\n 5.Modulus\n");
		spc;

		int choice;
		scanf("%d", &choice);

		switch(choice)
		{
			case 1:
				printf("The sum of the given two numbers is: ");
				printf("%d + %d = %d\n", a, b, a+b);
				break;		
			case 2:
				printf("The substraction of the given two numbers is: ");
                                printf("%d - %d = %d\n", a, b, a-b);
				break;
			case 3:
				printf("The multiplication  of the given two numbers is: ");
                                printf("%d * %d = %d\n", a, b, a*b);
				break;
			case 4:
				printf("The division of the given two numbers is: ");
                                printf("%d / %d = %d\n", a, b, a/b);
				break;
			case 5:
				printf("The modulus of the given two numbers is: ");
                                printf("%d %% %d = %d\n", a, b, a%b);
				break;
			default:
				exit(0);
				break;
		}
	}

	else if(ch == 1){
		printf("Enter two numbers to perform the operation: ");
		spc;

		scanf("%d %d", &a, &b);
		spc;

		printf("Make the choice\n 1.Bitwise OR\n 2.Bitwise AND\n 3.Bitwise NOT");
                spc;
		
		int choice;
		scanf("%d", &choice);
		spc;
		
		if(choice == 3){
			printf("The Bitwise NOT of the number is: \n");
			printf("Negation of %d is ~%d", a, ~a);	
			spc;
		}

		else{
			switch(choice)
			{
				case 1:
					printf("The Bitwise OR of the two number is: ");
					printf("%d || %d = %d\n", a, b, a||b);
					break;
				case 2:
					printf("The Bitwise AND of the two number is: ");
                                	printf("%d & %d = %d\n", a, b, a&b);
                               	 	break;
				default:
					exit(0);
					break;
		
				}
			}
		}
	spc;
	printf("If you want to continue, press 1. Else press 0");
	scanf("%d", &cnt);
	}
	
}
