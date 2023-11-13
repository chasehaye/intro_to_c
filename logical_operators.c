#include <stdio.h>
#include <stdbool.h>
// needed for working with booleans inside of C
// && for AND C
// || for OR C
// ! for NOT conitional reversal C
// function led with return value type
// parameters must be set using data type
// condition  ? perform if true : perform if false
// function prototype specified before and ensures proper arguements are passed throws an error instead of a warning
// many c compilers do not check for parameter matching
// main function commonly written first
void printer(int num){
    printf("\nprinter is working");
    printf("\nHere is your number: %d", num);
}

int square(double x){
    double result = x * x;
    return result;
}

int main(){

    float temp = 25;
    bool clear = false;
    if (temp >= 0 && temp <=30 && clear){
        printf("\nGreat weather!");
    }else{
        printf("\nBad weather!");
    }


    int num = 21;

    printer(num);
    
    double x = square(7);
    printf("\nValue: %lf", x);

    return 0;
}