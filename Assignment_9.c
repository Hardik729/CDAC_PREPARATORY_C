#include <stdio.h>

void printBinary(int num) {
    if (num > 1)
        printBinary(num / 2);

    printf("%d", num % 2);
}

void printOctal(int num) {
    if (num != 0) {
        printOctal(num / 8);
        printf("%d", num % 8);
    }
}

void printHexadecimal(int num) {
    if (num != 0) {
        printHexadecimal(num / 16);
        int remainder = num % 16;
        if (remainder < 10)
            printf("%d", remainder);
        else
            printf("%c", 'A' + remainder - 10);
    }
}

int main() {
    int number;
    printf("Enter Number: ");
    scanf("%d", &number);
    printf("Given Number: %d\n", number);
    printf("Binary equivalent: ");
    printBinary(number);
    printf("\n");
    printf("Octal equivalent: ");
    printOctal(number);
    printf("\n");
    printf("Hexadecimal equivalent: ");
    printHexadecimal(number);
    printf("\n");

    return 0;
}
