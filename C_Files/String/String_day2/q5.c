#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char s[100];
    int n, ways = 0;

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
   
    s[strcspn(s, "\n")] = '\0';
    n = strlen(s);

    
    for(int i=1;i<n;i++) 
    {
        int first = 0, second = 0;

        for(int j=0;j<i;j++) 
	{
            char c = tolower(s[j]);
            if(c >= 'a' && c <= 'z' && c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') 
	    {
                first++;
            }
        }

     	for(int j=i;j<n;j++) 
     	{
            char c = tolower(s[j]);
            if(c >= 'a' && c <= 'z' && c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') 
	    {
                second++;
            }
     	}

        if(first > second)
       	{
        	ways++;
        }
    }

    printf("Number of ways: %d\n", ways);

    return 0;
}

