#include<stdio.h>
#define Square(a) (a)*(a)
#include<stdlib.h>

// Issues with Macro

int main()
{
	int a=3;
	printf("%d\n", Square(a++));
	printf("%d\n", a);

	#ifdef __cplusplus
		printf("Compiled as c++\n");
	
	#else
		printf("Compiled as C\n");

	#endif

	return 0;
}

