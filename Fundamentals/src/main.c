// Preprocessor statements are indicated by the # symbol
#include <stdio.h> // .h indicates a header file
// # When an include has <> it usually means it's part of the standard library
// When an include uses "" it usually means it's a custom file in the project directory

// Preprocessors can also be used to define constants and macros
#define PI 3.14;

int main() {
    //This is a single line comment
    /*
    This is a multi line comment
    */

    printf("Printf is useful to send data to the output stream, usually the command line\n");

    //scanf take input in from the input stream, also usually the command line.
    // scanf returns the number of items it successfully reads
    // if you use scanf to read a value for one of the basic data variable types, proceed the variable name with an &
    // if you use scanf to read a string into a character array, don't use an &
    // scanf uses whitespace to decide how to divide up input

    char str[100];
    int i;

    printf("Enter a value: ");
    scanf("%s %d", str, &i);

    printf("\nYou entered: %d::::%s\n", i, str);


    return 0; // You can add comments here too
}
