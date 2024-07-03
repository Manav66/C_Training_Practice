#include<stdio.h>


int val;

extern void display();

static int function()

{

val++;

int x = 10;

int i = 0;

static int j = 20;

for (; i < 3; i++)

{

int x = 20;

printf("\n %d", x+i);

x+=3;

j++;

display();

}

return val;

}

int main(int argc, char *argv[])

{

val= 0;

function();

return 0;

}
