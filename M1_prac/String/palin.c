#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];
	printf("\nEnter the string: \n");
	scanf("%[^\n]s", str);

	int n = strlen(str);
	int m = n/2;
	printf("%d", m);	

	int chk = 0;

	for(int i=0,j=n-1;i<=(n/2),j>=(n/2);i++,j--)
	{
			if(str[i] != str[j])
			{
				chk = 1;
				break;
			}
	}

	chk == 1 ? printf("\nNot a Palindrome\n") : printf("\nPalindrome\n");

	return 0;
}
