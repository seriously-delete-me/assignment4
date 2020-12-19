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

void primeFactors(int number);

void prime(void) {
    int upperLimit = 0;
    printf("Give me the number whose prime factors you wish to know: ");
    scanf("%d", &upperLimit);

    primeFactors(upperLimit);
}

void primeFactors(int number)
{
    while (number % 2 == 0)
    {
        printf("%d ", 2);
        number = number / 2;
    }

    for (int i = 3; i <= sqrt(number); i = i + 2)
    {
        while (number % i == 0)
        {
            printf("%d ", i);
            number = number / i;
        }
    }

    if (number > 2)
        printf("%d ", number);
    puts("");
}