#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct sales {
        int id;
        int sales;
        } sls;

int main()
{
        printf("\nEnter the number of products: ");
        int n;
        scanf("%d", &n);

        sls s[n];

        for(int i=0;i<n;i++)
        {       printf("\nEnter process ID and quantity\n");

                scanf("%d", &s[i].id);
                getchar();

                scanf("%d", &s[i].sales);
                getchar();
        }

        for(int i=0;i<n-1;i++)
        {
                for(int j=i+1;j<n;j++)
                {
                        if(s[i].id == s[j].id)
			{	
				int max;
				max = s[i].sales;
				if(s[i].sales > s[j].sales)
                                {
					max = s[i].sales;
					s[j].id = -1;
				}
				else if(s[i].sales < s[j].sales)
				{
					max = s[j].sales;
					s[i].id = -1;
				}
				else
				{
					max = s[i].sales;
					s[i].id = -1;
				}
                        }
                }
        }	

        for(int i=0;i<n;i++)
        {
                if(s[i].id != -1)
		{
                        printf("P%d - %d\n", s[i].id, s[i].sales);
                }
        }

        return 0;


}

