// it is a bad practice to bury magic numbers like 300 and 20 in a program
// they convey little information to someone who might have to read the program later

// a #define line defines a symbolic name or constant to be a particular string of characters:

#include <stdio.h>

// symbolic constants are not variables
// they don't appear in declarations
// they are identifiers or names given to fixed values 
// that do not change during the execution of a program.
#define LOWER 0 // lower limit of table
#define UPPER 300 // upper limit
#define STEP 20 // step size

// print Fahrenheit-Celsius table
int main() {
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));

    return 0;
}