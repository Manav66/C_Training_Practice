#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int n;
	printf("\nEnter number of lines you want to take as input\n");
	scanf("%d", &n);
	getchar();

	while(n--)
	{
		char a[10], b[10];
		int h1 = -1, m1 = -1, s1 = -1, h2 = -1, m2 = -1, s2 = -1;
		
		printf("\nEnter the time1\n");
		scanf("%[^\n]s", a);
		getchar();	

		printf("\nEnter the time2\n");
                scanf("%[^\n]s", b);
                getchar();

		char *tok;
		int i = 1;
		
		tok = strtok(a, "/");

		while(tok != NULL)
		{
			if(i == 1)
			{
				h1 = atoi(tok);
			}
			if(i == 2)
			{
				m1 = atoi(tok);
			}
			if(i == 3)
			{
				s1 = atoi(tok);
			}

			tok = strtok(NULL, "/");
			i++;

		}

		i = 1;

                tok = strtok(b, "/");

                while(tok != NULL)
                {
                        if(i == 1)
                        {
                                h2 = atoi(tok);
                        }

                        if(i == 2)
                        {
                                m2 = atoi(tok);
                        }

                        if(i == 3)
                        {
                                s2 = atoi(tok);
                        }

                        tok = strtok(NULL, "/");
                        i++;

                }
		
		if(h1 == h2)
		{
			if(m1 == m2)
			{
				if(s1 == s2)
				{
					printf("\nEqual\n");
				}

				else if(s1 < s2)
				{
					printf("\nEarly\n");
				}

				else
				{
					printf("\nLate\n");
				}

			}

			else if(m1 < m2)
			{
				printf("\nEarly\n");
			}	

			else
			{
				printf("\nLate\n");
			}
		}
		
		else if(h1 < h2)
		{
			printf("\nEarly\n");
		}

		else
		{
			printf("\nLate\n");
		}
	}
	

	return EXIT_SUCCESS;
}

