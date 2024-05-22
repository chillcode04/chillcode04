#include <stdio.h>
#include <stdint.h>
int main () {
    printf("\nSIMPLE CALCULATOR");

    printf("\n1. Basic Calculation");
    printf("\n2. GCD");
    printf("\n3. Exit");

    printf("\n Select option [1-3]: ");


    uint8_t option;
    scanf("%hhu", &option);
    printf("\nMode seleted: %hhu", option);
    return 0;
}