#include <stdio.h>
int main(void)
{
    int test, k, min;
    int a_test[4];

    for (k=0; k < 4 ; k++)
    {
        printf("Enter input %i:", k);
        scanf("%i", &test);
        a_test[k] = test;
    }

    min = a_test[0];

    for (k = 0; k < 4; k++)
    {
        if (min < a_test[k])
        {
            min = min;
        }
        else
        {
            min = a_test[k];
        }
    }
    printf("The Minimum is %i", min);

}