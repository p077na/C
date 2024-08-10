#include <stdio.h>

int main(void)
{

    int cent = 1;
    for (int i = 0; i < 30; i++)
    {
        cent *= 2;
    }

    int result_in_dollars = cent / 100;

    if (result_in_dollars > 100)
    {
        printf("Result is more than 100\n");
    }else
    {
        printf("The result is less than 100\n");
    }
    printf("%d\n", result_in_dollars);
    

    return 0;
}
