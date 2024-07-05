#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char str[1000];
    	printf("Enter the string: \n");
    	scanf("%[^\n]s", str);
    	getchar();
    
    	//printf("%s", str);
    
    	char ch;
    	printf("Enter the character: \n");
    	scanf("%c", &ch);
    	getchar();
    
    	int n;
    	printf("Enter the position: \n");
    	scanf("%d", &n);
    	getchar();
	
	int len = strlen(str);
	char str2[1000];

	int j=0;
	
	for(int i=0;i<n;i++)
	{
		str2[j++] = str[i];
	}

	//printf("%s", str2);
    	str2[j] = ch;
    	
	//printf("%s", str2);
    
   	j = n+1;
    
    	for(int i=n+1;i<len;i++){
        	str2[j] = str[i];
        	j++;
    	}
    
    	str2[j] = '\0';
    	printf("%s", str2);
    
    	return 0;
}
