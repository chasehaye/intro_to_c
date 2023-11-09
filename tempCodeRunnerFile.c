    int age;

    printf("\nEnter age:");
    scanf("%d", &age);

    if(age >= 21){
        printf("Enjoy your drink!");
    }else if(age <= 0){
        printf("You arent even alive yet answer honestly!");
    }
    else{
        printf("Not quite old enough for a drink.");
    }