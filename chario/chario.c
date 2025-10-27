#include <stdio.h>

int main() {

    char c;

    // EOF means end of file
    // The EOF value is specifically chosen to be a value 
    // that cannot represent  any valid character in the character set. 

    // The parentheses around the assignment, within the condition are necessary.
    // The precedence of != is higher than of =,
    // which means that in the absence of parentheses the relational test !=
    // would be done before the assignment =.
    // c = getchar() != EOF is same as c = (getchar() != EOF)
    while ((c = getchar()) != EOF) {
        putchar(c);
    }
    return 0;
}