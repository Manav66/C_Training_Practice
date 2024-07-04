#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char str[100];
	int indx[100];
	
	memset(indx, 0, sizeof(indx));
	printf("\n");

	scanf("%[^\n]s", str);
	getchar();

	char ch;
	scanf("%c", &ch);

	int i=0, cnt=0;
	int j=0;

	while(str[i] != '\0')
	{
		if(str[i] == ch)
		{
			indx[j++] = i;		
		}
		i++;
	}

	int m = sizeof(indx)/ sizeof(indx[0]);

	for(int i=0;(i<m && indx[i] != 0);i++)
	{
		printf("\n%c is present at index: %d\n", ch, indx[i]);
	}

	return 0;
}
