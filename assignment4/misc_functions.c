#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include "misc_functions.h"
#include "math_functions.h"

void menu(void) {
    int size_of_choices_array = 0;

    char choices[][60] = {
        "01: Factorial", "02: Radian/Degree converter", "03 Prime Factors"
    };

    size_of_choices_array = sizeof(choices) / sizeof(*choices);

    do
    {
        int selection = 0;
        puts("Select the function to run: ");
        for (int i = 0; i < size_of_choices_array; i++)
        {
            printf("%s", strcat(choices[i], "\t"));
        }
        printf("\nTo exit, press 0.\n");
        printf("> ");
        scanf("%d", &selection);
        printf("You have selected: %d\n", selection);

        switch (selection)
        {
        case 0:
            exit(0);
            break;
        case 1:
            factorial();
            break;
        case 2:
	    radian_degrees_converter();
            break;
        case 3:
            prime();
            break;
        default:
            break;
        }
    } while (true);
}
