#include <stdio.h>
#include <string.h>

int main(){



    char name[25]; // byte specification
    printf("\nwhats your name?");
    // scanf("%s", &name);
    fgets(name, 25, stdin);
    // enter removal
    name[strlen(name)-1]= '\0';

    int age;
    printf("How old are you?");
    scanf("%d", &age);

    printf("Your name is %s!", name);
    printf("\nYou are %d years old!", age);

    return 0;
}