#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char str[1000];
    printf("Enter the string: \n");
    scanf("%[^\n]s", str);
    getchar();
    
    char substr1[100];
    printf("Enter the substring you want to remove: \n");
    scanf("%[^\n]s", substr1);
    getchar();
    
    char substr2[100];
    printf("Enter the substring you want to insert: \n");
    scanf("%[^\n]s", substr2);
    getchar();
    
    char str2[1000];
    
    char *ptr = strstr(str, substr1);
    
    int pos1 = ptr - str;

    int len1, len2, len3;
    
    len1 = strlen(str);
    len2 = strlen(substr1);
    len3 = strlen(substr2);
    
    int j=0;
    for(int i=0;i<pos1;i++){
        str2[j++] = str[i];
    }
    
    str2[j] = '\0';
    
    strncat(str2, substr2, len3);
    
    j = j + len3;
    int k = pos1 + len2;
    
    for(int i=k;i<len1;i++){
        str2[j++] = str[i];
    }
    
    str2[j] = '\0';
    
    printf("\n%s", str2);
    
    return 0;
}
