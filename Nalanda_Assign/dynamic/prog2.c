#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define spc printf("\n");

int main()
{
	char *user;
	int *age;
	float *salary;
	int *des;
	char *gender;

	user = (char *)malloc(125*sizeof(char));
	age = (int *)malloc(10*sizeof(int));
	salary = (float *)malloc(20*sizeof(float));
	des = (int *)malloc(4*sizeof(int));  
	gender = (char *)malloc(5*sizeof(char));

	spc;
	printf("Enter the details: \n");
	
	scanf("%s", user);
	scanf("%d", age);
	scanf("%f", salary);
	scanf("%d", des);
	scanf("%c", gender);

	printf("Details are: %s %d %f %d %s", user,age,salary,des,gender);
	return 0;

}

