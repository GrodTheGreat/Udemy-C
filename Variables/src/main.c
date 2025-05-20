#include <stdio.h>
#include <stdbool.h> // Required for true/false, otherwise you should use 1/0

int main() {
    int jason; // Variable declared but not initialized
    jason = 5; // Variable initialized

    int bob = 7; // Variable declared and initialized

    float mason = 23.22;
    double jason2 = 55.5555555555555;
    jason2 = 55.555555e+11;

    _Bool boolVariable = true;
    boolVariable = 1;
    bool anotherBool = false; //bool needs stdbool otherwise it needs to be _Bool

    enum gender { male, female, other };

    enum gender myGender;

    myGender = male;

    // myGender = "44"; // This will error

    enum gender anotherGender = female;

    bool isMale = myGender == male;

    char myCharacter = '\n'; // newline counts as a single character

    printf("%c", myCharacter);

    int intVar = 3;
    float floatVar = 3.14f;
    char charVar = 'a';
    double doubleVar = 3.14;
    _Bool boolVar = 0;

    printf("Int: %d\n", intVar);
    printf("Float: %f\n", floatVar);
    printf("Char: %c\n", charVar);
    printf("Double: %lf\n", doubleVar);
    printf("Double: %g\n", doubleVar);
    printf("Bool: %d\n", boolVar);

    float x = 3.99434643168763;
    printf("%.2f\n", x);

    return 0;
}
