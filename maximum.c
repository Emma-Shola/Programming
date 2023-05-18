#include <stdio.h>
studentname
matricno
__INCLUDE_LEVEL__
programme

int main(void)
{
    int test, exam, k;

    int a_exam[10];

    int a_test[10];

    for (k = 0; k <= 10; k++)
    {
        do
        {
            printf("Test %i: ", k+1);
            scanf("%i", &test);
            a_test[k] = test;
        }
        while (test > 40);  

        do
        {
            printf("Exam 1: ");
            scanf("%i", &exam);
            a_exam[k] = exam;
        } 
        while (exam > 60);
    }
}