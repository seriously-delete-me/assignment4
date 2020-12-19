#include <stdio.h>

void factorial(void) {
    int number = 0;
    unsigned long long int factorial = 1;
    printf("Enter an integer(<66): ");
    scanf("%d", &number);
    if (number > 65)
    {
        puts("I told you to keep it under 66!");
        return;
    }
    else if (number < 0)
    {
        puts("Positive numbers only!");
        return;
    }

    for (int i = 2; i <= number; i++)
    {
        factorial *= i;
    }

    printf("The factorial of %d is %llu\n", number, factorial);
}