#include <stdio.h>

int main(void) {
    int selection = 0;
    puts("Type 0 to exit.");
    printf("Select the function to run: ");
    scanf("%d", &selection);
    printf("You have selected: %d", selection);
    return 0;
}
