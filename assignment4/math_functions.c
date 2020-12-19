#include <stdio.h>
#include <math.h>

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

void radian_degrees_converter(void){
    char angle_to_return;
    float angle;
    printf("\nConvert to (r)adian or (d)egree? ");
    scanf(" %c", &angle_to_return);

    if (angle_to_return == 'd') {
        printf("Input radians: ");
        scanf("%f", &angle);
        printf("%f radians is %f degrees.", angle, angle * 180 / M_PI );
    } else {
        printf("Input degrees: ");
        scanf("%f", &angle);
        printf("%f degrees is %f radians.", angle, angle * M_PI / 180);
    }
    puts("");
}
