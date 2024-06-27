#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
	int ID;
	float score;
} stdnt;

int main()
{
	printf("\nEnter the number of entries\n");
	int n;
	scanf("%d", &n);
	
	stdnt st[n];

	for(int i=0;i<n;i++)
	{
		printf("\nEnter process ID and quantity\n");

                scanf("%d", &st[i].ID);
                getchar();

                scanf("%f", &st[i].score);
		getchar();
	}	

	for(int i=0;i<n-1;i++)
        {
                for(int j=i+1;j<n;j++)
                {
                        if(st[i].ID == st[j].ID)
                        {
                                st[i].score =  (st[j].score + st[i].score)/2;
				// printf("\n%d\n", st[i].score);
                                st[j].ID = -1;
                        }
                }
        }
	
	for(int i=0;i<n;i++)
        {
                if(st[i].ID != -1)
                {
                        printf("S%d - %.2f\n", st[i].ID, st[i].score);
                }
        }
	

	return EXIT_SUCCESS;
}

