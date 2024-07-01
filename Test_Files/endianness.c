#include <stdio.h>

int main() {
    unsigned int num = 1;
    char *ptr = (char *)&num;

    // If the first byte (lowest address) contains the least significant byte (little-endian)
    if (*ptr == 1) {
        printf("Little-endian\n");
    }
    // If the first byte (lowest address) contains the most significant byte (big-endian)
    else if (*ptr == 0) {
        printf("Big-endian\n");
    }
    // This case should not occur on any standard conforming system
    else {
        printf("Unable to determine endianness\n");
    }

    return 0;
}



