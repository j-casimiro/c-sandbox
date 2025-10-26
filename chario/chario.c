#include <stdio.h>

int main() {

    char c;

    c = getchar();
    // EOF means end of file
    // The EOF value is specifically chosen to be a value 
    // that cannot represent  any valid character in the character set. 
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }

    return 0;
}