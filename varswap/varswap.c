#include <stdio.h>

int main() {
    int var1, var2;
    int temp;

    printf("enter first number: ");
    scanf("%d", &var1);

    printf("enter second number: ");
    scanf("%d", &var2);

    temp = var1;
    var1 = var2;
    var2 = temp;

    printf("new var1: %d\n", var1);
    printf("new var2: %d\n", var2);

    return 0;
}