#include <stdio.h>
#include <ctype.h>

int main() {

    char operator;
    double x;
    double y;
    double equated_value;

    printf("Enter a basic operator: ");
    scanf("%c", &operator);

    printf("Enter the first number: ");
    scanf("%lf", &x);

    printf("Enter the second number: ");
    scanf("%lf", &y);

    switch (operator)
    {
    case '+':
        equated_value = x + y;
        printf("\nEquated value = %.1lf", equated_value);
        break;
    case '-':
        equated_value = x - y;
        printf("\nEquated value = %.1lf", equated_value);
        break;
    case '*':
        equated_value = x * y;
        printf("\nEquated value = %.1lf", equated_value);
        break;
    case '/':
        equated_value = x / y;
        printf("\nEquated value = %.1lf", equated_value);
        break;
    
    default:
        printf("%c is not a simple operator", operator);
    }

    return 0;
}