#include <stdio.h>

int main(void){
    int number;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d", &number);

    do{
        sum += number % 10;
        number /= 10;
    }while(number != 0);

    printf("The sum is: %d", sum);

    return 0;
}