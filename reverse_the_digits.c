#include <stdio.h>

int main() {
    int number, reversed_number = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number != 0) {
        int remainder = number % 10;
        reversed_number = (reversed_number * 10) + remainder;
        number = number / 10;
    }

    printf("Reversed number: %d\n", reversed_number);

    return 0;
}