#include <stdio.h>

// count characters in input

int main() {
    double nc;

    // nc = 0;
    // while (getchar() != EOF)
    //     ++nc;
    // printf("%ld\n", nc);

    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%.0f\n", nc);

    // one of the nicest things about while and for
    // is that they test at the top of the loop,
    // before proceeding with the body.
    // If there is nothing to do, nothing is done,
    // even if that means never going through the loop body.
    // Programs should act intelligently when given zero-length input.
    // The while and for statements help ensure that programs
    // do reasonable things with boundary conditions.

    return 0;
}