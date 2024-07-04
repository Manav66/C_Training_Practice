#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char *str2;
    
    scanf("%[^\n]s", str);
    int i=0;
    
    while(str[i] != '\0'){
        if(str[i] != ' '){
            str2 = &str[i];
            break;
        }
        i++;
    }
    
    printf("%s", str2);
    
    return 0;
}
