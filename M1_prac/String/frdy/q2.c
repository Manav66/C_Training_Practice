#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char str[1000];
    printf("Enter the string: \n");
    scanf("%[^\n]s", str);
    getchar();
    
    char substr[100];
    printf("Enter the substring: \n");
    scanf("%[^\n]s", substr);
    getchar();
    
    int pos;
    printf("Enter the position: \n");
    scanf("%d", &pos);
    getchar();
    
    int len = strlen(str);
    int m = strlen(substr);
    
    char str2[1000];
        
    int j=0;
    for(int i=0;i<pos;i++){
        str2[j] = str[i];
        j++;
    }
    
    str2[j] = '\0';
    //printf("%s", str2);
    
    strncat(str2, substr, m);
    
    //printf("\n%s", str2);

    j = pos + m;
    
    for(int i=pos;i<len;i++){
        str2[j++] = str[i];
    }
    
    str2[j] = '\0';
    
    printf("%s", str2);
    
    return 0;
}

