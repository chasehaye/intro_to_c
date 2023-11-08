#include <stdio.h>
int main(){


    //  DATA TYPES
    int x; // declaration
    x = 123; //initlization
    int y =321;

    int miles = 100;
    float gpa = 3.0; // float includes decimal
    char grade = 'C'; //stores a single character
    // strings are objects c does not technically have strings
    char name[] = "Dude"; // array use for string emulation

    printf("This car has %d miles\n", miles);
    printf("Hey %s!\n", name);
    printf("Average grade is %c\n", grade);
    printf("gpa is %f", gpa);


    //  doubles have more precision and digits use %lf to display can specify with decimals for float and doubles
    //  doubles are more commonly used
    //  bool variable type type true or flase %d can be used to display
    //  char can be used numerically and can be displayed using its numeric storage value
    //  range -128 to 127 for numeric value since it is one byte
    //  short int and unsigned short int use less space but have less range numeric rnage possibilities (can be declared as just shorts)
    //  overflow resets value back to the min value of the range
    //  2 4 8 short, long int, and long long int
    //  signed ints and flots change the range
    // %- left align
    const float PI = 3.14;
    // best practice is to use all caps for constants inside of C
    // prevents from being over written
    // % modulo
    // ++ inc -- dec
    // divison will truncate unless the divisor is specified as a float and same for the storage value of the division sequence
    
    return 0;
}