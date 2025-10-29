// line counter
#include <stdio.h>

int main() {

    int c, nl;

    nl = 0;
    while ((c = getchar()) != EOF)
        // '\n' is a single char in ascii = 10, and not a string.
        if (c == '\n')
            ++nl;

    printf("%d\n", nl);

    // A character in single quotes like 'A'
    // represents its integer value in the machine’s character set 
    // (e.g., 'A' = 65 in ASCII). 
    // It’s called a character constant and is just another way to write a small integer, 
    // but 'A' is preferred over 65 because it’s clearer
    // and not tied to a specific encoding.
    
    return 0;
}