#include <stdio.h>
#include <math.h>

int main(void){
    int x = 10;
    printf("%.lf\n", pow(x, 2));
    printf("%.lf\n", pow(x, 4));
    printf("%.lf\n", pow(x, 6));
    printf("%.lf\n", pow(x, 8));

    return 0;
}