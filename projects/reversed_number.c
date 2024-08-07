#include <stdio.h>

int main(void){
    int number = 123456789;

    printf("Reversed number: ");

    if (number == 0) {
        printf("0");
    }

    do {
        printf("%d", number % 10);
        number /= 10;
    } while (number != 0);

    printf("\n"); // Ensure output ends with a newline

    return 0;
}