#include <stdbool.h>
#include<stdio.h>

int main()

{

int i = 123;

short s = 98;

bool b = true;

char c = 'Y';

float d = 235.789;

//TBD – perform operations below and display result using appropriate format specifier

printf("b + c = %d\n", b + c);

printf("c * d = %f\n", c * d);

c = c + b;
printf("c = %c\n", c);

b = -d;

printf("b = %d\n", b);
/*
b+c

s * i

c * d

c = c+b

d = d+c

b = -d
*/
return 0;

}
