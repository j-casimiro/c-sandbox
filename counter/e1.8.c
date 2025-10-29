// blank, tabs, and newline counter

#include <stdio.h>

int main() {
    int c, t, b, nl;

    t = 0;
    b = 0;
    nl = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++nl;
        } else if (c == '\t') {
            ++t;
        } else if (c == ' ') {
            ++b;
        }
    }
    printf("\n");
    printf("tabs: %d\n", t);
    printf("blanks: %d\n", b);
    printf("newlines: %d\n", nl);

    return 0;
}