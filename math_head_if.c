#include <stdio.h>
#include <math.h>

int main(){



// MATH OPERATORS
    double A = sqrt(9); 
    double B = pow(2, 4);
    //  round() rounds a number to an int
    // ceil() rounds a number to the nearest whole
    //  floor() rounds a number down to the nearest whole
    // fabs() abs value
    // log()
    // sin() cos() tan()



    // printf("\n%lf", A);
    // printf("\n%lf", B);



// IF STATEMENTS FORMAT C

    // int age;

    // printf("\nEnter age:");
    // scanf("%d", &age);

    // if(age >= 21){
    //     printf("Enjoy your drink!");
    // }else if(age <= 0){
    //     printf("You arent even alive yet answer honestly!");
    // }
    // else{
    //     printf("Not quite old enough for a drink.");
    // }



// SWITCH 


    //  breaks are used to exit out of the switch
    char grade;

    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    switch(grade){
        case 'A':
            printf("Aced it!\n");
            break;
        case 'B':
            printf("You did good!\n");
            break;
        case 'C':
            printf("You did average!\n");
            break;
        default:
            printf("Enter a valid grade");
    };

    return 0;
}