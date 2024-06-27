#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, world!";
    char substr[] = "world";

    // Using strstr to find the substring
    char *ptr = strstr(str, substr);

    if (ptr != NULL) {
        // Calculate the index of the first character of substr in str
        int index = ptr - str;
        printf("Substring found at index: %d\n", index);
    } else {
        printf("Substring not found\n");
    }

    return 0;
}
