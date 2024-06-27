#include <stdio.h>
#include<stdlib.h>
#include<string.h>

#pragma pack(1)

struct temp1
{
  char a[10];   // 1 byte
  int  b;   // 4 bytes
  char c[10];   // 1 byte
};

void func(struct temp1);

int main()
{
  //printf("sizeof(structure temp1) = %lu\n", sizeof(temp1));
  //printf("sizeof(structure temp2) = %lu\n", sizeof(temp2));
  //printf("sizeof(structure temp3) = %lu\n", sizeof(temp3));
	
  struct temp1 manav;

  strcpy(manav.a, "m");
  manav.b = 50;
  strcpy(manav.c, "f");

  printf("\n%s\n", manav.a);
  printf("\n%d\n", manav.b);
  printf("\n%s\n", manav.c);

  func(manav);

  printf("\n%s\n", manav.a);
  printf("\n%d\n", manav.b);
  printf("\n%s\n", manav.c);


  return EXIT_SUCCESS;
}


void func(struct temp1 manav)
{
	strcpy(manav.a, "a");
	manav.b = 10;
	strcpy(manav.c, "e");

	printf("\n%s\n", manav.a);
 	printf("\n%d\n", manav.b);
 	printf("\n%s\n", manav.c);
}

