// Header Files
#include<stdio.h>
#include<string.h>

// Macro

#define space printf("\n")

// Macro functions

char strfunc(char ch[]){
     printf("%s\n", ch);
        }

int main(){
/*
	printf("Size of int is: %ld", sizeof(int));
	space;

	printf("Size of char is: %ld", sizeof(char));
	space;

	printf("Size of float is: %ld", sizeof(float));
	space;

	printf("Size of float is: %ld", sizeof(double));
	space;

	printf("Size of long int is: %ld", sizeof(long int));
	space;

	printf("Size of long long int is: %ld", sizeof(long long int));
	space;

	printf("Size of short int is: %ld", sizeof(short int));
	space;
*/

	printf("Char MIN: %d", CHAR_MIN);
	space;

	printf("Char MIN: %d", CHAR_MAX);
	space;

	printf("UChar MIN: %d", UCHAR_MAX);
        space;

	printf("SHORT MIN: %d", SHRT_MIN);
        space;

	printf("SHORT MAX: %d", SHRT_MAX);
        space;
	
	printf("USHORT MIN: %d", USHRT_MAX);
        space;

	printf("INT MIN: %d", INT_MIN);
        space;

	printf("INT MAX: %ud", INT_MAX);
        space;

	printf("UINT MAX: %ud", UINT_MAX);
        space;

	printf("LONG MIN: %d", LONG_MIN);
        space;

	printf("LONG MAX: %ud", LONG_MAX);
        space;

	printf("ULONG MAX: %ud", ULONG_MAX);
        space;

	printf("FLOAT MIN: %d", FLT_MIN);
        space;

	printf("FLOAT MAX: %ud", FLT_MAX);
        space;

	printf("DOUBLE MIN: %d", DBL_MIN);
        space;

	printf("DOUBLE MAX: %ud", DBL_MAX);
        space;	


	
	




	}	
