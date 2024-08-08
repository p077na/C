#include <stdio.h>

int main(void){
    char operator;
    printf("Operator: ");
    scanf("%c", &operator);

    int num1;
    printf("Number 1: ");
    scanf("%d", &num1);

    int num2;
    printf("Number 2: ");
    scanf("%d", &num2);

    switch (operator){
        case '+':
            printf("%d", num1+num2);
            break;
        case '-':
            printf("%d", num1-num2);
            break;
        case '*':
            printf("%d", num1*num2);
            break;
        case '/':
            printf("%d", num1/num2);
            break;
        default:
            break;
    }
    printf("\n");
}